#include "syntaxNode.h"

#include <iostream>
#include <memory>
#include <algorithm>
using namespace std;

std::ofstream CSyntaxNode::fnByteCode;
std::ofstream CSyntaxNode::globalByteCode;
std::ofstream* CSyntaxNode::outputFile = NULL;
std::map<std::string, int> CSyntaxNode::eventIds;
int CSyntaxNode::nextEventId = 0;
std::map<int, int> CSyntaxNode::eventTable;
std::map<std::string, int> CSyntaxNode::globalVarIds;
int CSyntaxNode::nextGlobalVarId = globalVarStart;
std::vector<std::string> CSyntaxNode::localVarIds;
std::vector<COptionNode*> CSyntaxNode::optionStack;
int CSyntaxNode::eventTableAddr = 0;
int CSyntaxNode::globalVarTableAddr = 0;
int CSyntaxNode::globalCodeAddr = 0;
std::map<std::string, int> CSyntaxNode::memberIds;
int CSyntaxNode::nextMemberId = memberIdStart;
std::map<std::string, CObject> CSyntaxNode::objects; 
int CSyntaxNode::nextObjectId = 1; //0 is the default 'object zero'
std::vector<TMemberRec> CSyntaxNode::memberStack2;
std::vector<CTigVar> CSyntaxNode::arrayStack;
int CSyntaxNode::childLevel = 0;
std::map<int,int> CSyntaxNode::parentList;
bool CSyntaxNode::global = true;
char CSyntaxNode::lastOp = 0;
int CSyntaxNode::currentObj = 0;
std::vector<int>* CSyntaxNode::parentClassList = NULL;
std::map<std::string, TGlobalFn> CSyntaxNode::globalFuncIds;
int CSyntaxNode::nextGlobalFuncId = 0;
std::vector<unsigned char> CSyntaxNode::paramCount;
std::vector<CSyntaxNode*> CSyntaxNode::nodeList;
bool CSyntaxNode::paramDeclarationMode = false;
std::vector<TMemberCheck> CSyntaxNode::globalMembersToCheck;
TCodeDest CSyntaxNode::codeDestination;

extern int lineNo;

CSyntaxNode::CSyntaxNode() {
	nodeList.push_back(this);
	sourceLine = lineNo;
}

/** Set the file the syntax tree writes to. */
void CSyntaxNode::setOutputFile(std::ofstream& file) {
	outputFile = &file;
}

void CSyntaxNode::writeOp(char byte) {
	int addr = outputFile->tellp();
	outputFile->write(&byte, 1);
	cout << "\n" << outputFile << " " << addr << " " << opCode[byte];
	lastOp = byte;
}

void CSyntaxNode::writeByte(char byte) {
	int addr = outputFile->tellp();
	outputFile->write(&byte, 1);
	cout << "\n" << outputFile << " " << addr << " [writeByte] " << (int)byte;
}

void CSyntaxNode::writeWord(unsigned int word) {
	outputFile->write((char*)&word, 4);
	cout << " " << word;
}

void CSyntaxNode::writeString(const std::string & text) {
	writeWord(text.size());
	*outputFile << text.c_str();
	cout << " " << text.substr(0, 20);
}

void CSyntaxNode::writeCString(const std::string & text) {
	*outputFile << text.c_str() << '\0';
}

/** TO DO: since ids are sequential from 0, can probably just store the addresses. */
/** Event ids and addresses. */
void CSyntaxNode::writeEventTable() {
	eventTableAddr = outputFile->tellp();
	writeWord(eventTable.size());
	for (auto event : eventTable) {
		writeWord(event.first);
		writeWord(event.second);
	}
}

/** Writes a list of global variable names and their associated ids. */
void CSyntaxNode::writeGlobalVarTable() {
	globalVarTableAddr = outputFile->tellp();
	writeWord(globalVarIds.size());
	for (auto globalVar : globalVarIds) {
		writeCString(globalVar.first);
		writeWord(globalVar.second);
	}
}

/** Write the definitions of all objects. */
void CSyntaxNode::writeObjectDefTable() {
	//sort object table by objectId, which is also order of creation. This is useful for the VM.
	std::vector<CObject> orderedObjects;
	for (auto object : objects) {
		orderedObjects.push_back(object.second);
	}
	sort(orderedObjects.begin(), orderedObjects.end(),
		[&](CObject& obj1, CObject& obj2) {return obj1.objectId < obj2.objectId; } );

	writeWord(objects.size());
	for (auto object : orderedObjects) {
		writeWord(object.objectId);
	/////////////////////	writeWord(object.classId);
		writeByte(object.classIds.size());
		for (auto classId : object.classIds) {
			writeWord(classId);
		}
		writeByte(object.members.size());
		for (auto member : object.members) {
			writeWord(member.memberId);
			writeByte(member.value.type);
			if (member.value.type == tigString)
				writeString(member.value.getStringValue());
			if (member.value.type == tigInt)
				writeWord(member.value.getIntValue());
			if (member.value.type == tigFunc)
				writeWord(member.value.getFuncAddress());
			if (member.value.type == tigObj)
				writeWord(member.value.getObjId());
			if (member.value.type == tigUndefined)
				writeWord(0);
			if (member.value.type == tigArray) {
				writeWord(member.arrayInitList.size());
				for (auto element : member.arrayInitList) {
					writeByte(element.type);
					writeWord(element.getIntValue());
					//TO DO: provide for other values
				}
			}
		}
	}
}

/** Write the names of all object members, in id order. */
void CSyntaxNode::writeMemberNameTable() {
	std::vector<std::pair<std::string, int>> orderedMembers;
	for (auto member : memberIds) {
		orderedMembers.push_back(member);
	}
	sort(orderedMembers.begin(), orderedMembers.end(),
		[&](std::pair<std::string, int>& memb1, std::pair<std::string, int>& memb2) {return memb1.second <  memb2.second; });

	//now write it to file.
	writeWord(orderedMembers.size());
	for (auto member : orderedMembers) {
		//probably no need to include memberId as they will be sequential starting with memberIdStart
		writeCString(member.first);
	}
}

void CSyntaxNode::writeGlobalFuncTable() {
	std::vector<std::pair<std::string, TGlobalFn>> orderedFuncs;
	for (auto func : globalFuncIds) {
		orderedFuncs.push_back(func);
	}
	sort(orderedFuncs.begin(), orderedFuncs.end(),
		[&](std::pair<std::string, TGlobalFn>& fn1, std::pair<std::string, TGlobalFn>& fn2) {return fn1.second.id <  fn2.second.id; });


	writeWord(orderedFuncs.size());
	for (auto fn : orderedFuncs) {
		writeWord(fn.second.addr);
	}
}

void CSyntaxNode::writeHeader() {
	int headerSize = 8;
	writeWord(eventTableAddr + headerSize); //event table start
	writeWord(globalCodeAddr ); //global code start
}

void CSyntaxNode::killNodes() {
	for (auto node : nodeList)
		delete node;
}

/** Return a pointer to the object with this id. */
CObject * CSyntaxNode::getObject(int objId) {
	auto it = std::find_if(objects.begin(), objects.end(),
		[&](auto &objRec)->bool 
	{ return objRec.second.objectId == objId; });
	if (it == objects.end())
		return NULL;
	return &it->second;
}

/** Return a pointer to the named member record of the given object. */
TMemberRec * CSyntaxNode::getObjectMember(CObject & obj, std::string  membName) {
	int membId = getMemberId(membName);
	auto it = std::find_if(obj.members.begin(), obj.members.end(),
		[&](auto& memberRec) { return memberRec.memberId == membId; });
	if (it == obj.members.end())
		return NULL;
	return &*it;
}

void CSyntaxNode::funcMode(bool onOff) {
	global = !onOff;
	//std::cerr << "\nglobal mode set to " << global;
}

bool CSyntaxNode::objectHasMember(int objId, int memberId) {
	CObject* obj = getObject(objId);
	for (auto member : obj->members) {
		if (member.memberId == memberId)
			return true;
	}

	for (auto parentClass : obj->classIds) {
		CObject* parentObj = getObject(parentClass);
		if (objectHasMember(parentObj->objectId, memberId))
			return true;
	}

	return false;
}

void CSyntaxNode::logLocalMemberCheck(int objId, int memberId) {
	CObject* obj = getObject(objId);
	obj->localMembersToCheck.push_back({sourceLine,memberId});
}


void CSyntaxNode::logGlobalMemberCheck(int lineNum, int memberId) {
	globalMembersToCheck.push_back({ lineNum, memberId });
}

std::string CSyntaxNode::getMemberName(int memberId) {
	auto it = std::find_if(memberIds.begin(), memberIds.end(),
		[&](const std::pair<std::string, int>& member) {return member.second == memberId; });	
	if (it == memberIds.end())
		return NULL;
	return it->first;
}

void CSyntaxNode::setCodeDestination(TCodeDest dest) {
	if (dest != codeDestination) {
		codeDestination = dest;
		if (codeDestination == funcDest) {
			cerr << "\n\n[FUNCTION:]";
			setOutputFile(fnByteCode);
		}
		else {
			cerr << "\n\n[GLOBAL:]";
			setOutputFile(globalByteCode);
		}

	}
}


/** Return the unique id number for this event identifier. */
int CSyntaxNode::getEventId(std::string & identifier) {
	auto iter = eventIds.find(identifier);
	if (iter == eventIds.end()) {
		eventIds[identifier] = nextEventId++;
		return eventIds[identifier];
	}
	return iter->second;
}

/** Return the unique id number for this global variable identifier. */
int CSyntaxNode::getGlobalVarId(std::string & identifier) {
	auto iter = globalVarIds.find(identifier);
	if (iter == globalVarIds.end()) {
		globalVarIds[identifier] = nextGlobalVarId++;
		return globalVarIds[identifier];
	}
	return iter->second;
}

/** Return a variable id for a variable used at a local level. */
int CSyntaxNode::getVarId(std::string & identifier) {
	//TO DO: check if it's a local member

	//check if it's an existing global variable
	auto iter = globalVarIds.find(identifier);
	if (iter != globalVarIds.end()) {
		return iter->second;
	}

	//Check if it's an existing local variable
	//if not, make it one
	auto it = std::find_if(localVarIds.begin(), localVarIds.end(),
		[&](auto& varName) { return varName == identifier; });
	if (it == localVarIds.end()) {
		localVarIds.push_back(identifier);
		return localVarIds.size()-1;
	}

	return it - localVarIds.begin();
}

/** Return the unique id number for this object member identifier. */
int CSyntaxNode::getMemberId(std::string & identifier) {
	auto iter = memberIds.find(identifier);
	if (iter == memberIds.end()) {
		memberIds[identifier] = nextMemberId++;
		return memberIds[identifier];
	}
	return iter->second;
}

/** Return the unique id number for this object identifier. */
int CSyntaxNode::getObjectId(std::string & identifier) {
	auto iter = objects.find(identifier);
	if (iter == objects.end()) {
		CObject newObject;
		newObject.objectId = nextObjectId++;
		objects[identifier] = newObject;
		return newObject.objectId;
	}
	return iter->second.objectId;
}

/** Return the unique id number for this global function identifier. */
int CSyntaxNode::getGlobalFuncId(std::string& identifier) {
	auto iter = globalFuncIds.find(identifier);
	if (iter == globalFuncIds.end()) {
		globalFuncIds[identifier].id = nextGlobalFuncId++;
		return globalFuncIds[identifier].id;
	}
	return iter->second.id;
}



/** Create a string node for the given string. */
CStrNode::CStrNode(std::string* parsedString) {
	text = *parsedString;
}


std::string & CStrNode::getText() {
	return text;
}



/** Write the byte code to push this string literal onto the stack. */
void CStrNode::encode() {
	writeOp(opPushStr);
	writeString(text);
}


/** Create a operator node for the given instruction and its operand. */
COpNode::COpNode(TOpCode code, CSyntaxNode* operand) {
	opCode = code;
	operands.push_back(operand);
}

/** Create an operator node for an instruction with no operands. */
COpNode::COpNode(TOpCode code) {
	opCode = code;
}

/** Create a operator node for the given instruction and its operands. */
COpNode::COpNode(TOpCode code, CSyntaxNode * operand1, CSyntaxNode * operand2) {
	opCode = code;
	operands.push_back(operand1);
	operands.push_back(operand2);
}

COpNode::COpNode(TOpCode code, CSyntaxNode * operand1, CSyntaxNode * operand2, CSyntaxNode * operand3) {
	opCode = code;
	operands.push_back(operand1);
	operands.push_back(operand2);
	operands.push_back(operand3);
}


/** Write the bytecode for this operator and its operands. */
void COpNode::encode() {
	//TO DO: make this the default action for syntaxnodes?
	for (auto operand : operands) {
		operand->encode();
	}
	writeOp(opCode);
}

/** Create a joint node connecting these two syntax nodes. */
CJointNode::CJointNode(CSyntaxNode * branch1, CSyntaxNode * branch2) {
	operands.push_back(branch1);
	if (branch2)
		operands.push_back(branch2);
}

/** Recursively encode the branches of this joint node. */
void CJointNode::encode() {
	for (auto operand : operands) {
		operand->encode();
	}
}

/** Create a node storing the text of this event option and its associated ID. */
COptionNode::COptionNode(CSyntaxNode* text, CSyntaxNode* optionalCode, CSyntaxNode* branchEvent) {
	choiceText = text->getText();
	branchID = branchEvent->getId();
	if (optionalCode)
		operands.push_back(optionalCode);
	
}

/** Write an option declaration for the VM to pick up, and temporarily put details  on the stack. */
void COptionNode::encode() {
	char optionIndex = (char)optionStack.size();
	optionStack.push_back(this);
	writeOp(opOption);
	writeByte(optionIndex);
	writeString(choiceText);
}

/** Return this options's main text.*/
std::string & COptionNode::getText() {
	return choiceText;
}
/** Return the event ID this options branches to. */
int COptionNode::getId() {
	return branchID;
}


/** Create a node storing the text of this event, its ID and pointer to its options. */
CEventNode::CEventNode(CSyntaxNode* identNode,  CSyntaxNode* codeBlock) {
	eventId = identNode->getId();
	operands.push_back(codeBlock);
}

/** Write the bytecode for this event. */
void CEventNode::encode() {
	//setOutputFile(fnByteCode); cerr << "\n\n[FUNCTION E]";
	setCodeDestination(funcDest);
	int currentAddress = outputFile->tellp();
	eventTable[eventId] = currentAddress;

	operands[0]->encode();

	if (optionStack.size() == 0) {
		writeOp(opEnd);
		//setOutputFile(globalByteCode); cerr << "\n\n[GLOBAL OP]";
		setCodeDestination(globalDest);
		return;
	}

	writeOp(opGiveOptions);
	//write a table of pointers to any code any options contained
	int optionTableAddr = outputFile->tellp();
	for (auto option : optionStack) {
		writeWord(0xFFFFFFFF);
	}
	int optionStartAddr = outputFile->tellp();

	//write the code for each option
	std::vector<int> offsetList; 
	for (auto option : optionStack) {
		int offset = (int)outputFile->tellp() - optionTableAddr;
		for (auto operand : option->operands) 
			operand->encode();
		writeOp(opJumpEvent);
		writeWord(option->getId());
		offsetList.push_back(offset);
	}
	int resume = outputFile->tellp();

	//go back and fill in the table
	outputFile->seekp(optionTableAddr);
	for (auto offset : offsetList) {
		writeWord(offset);
	}

	outputFile->seekp(resume);
	
	optionStack.clear();
	//setOutputFile(globalByteCode); cerr << "\n\n[GLOBAL]";
	setCodeDestination(globalDest);
}

/** Create an identifier node for the given identifier string. */
CEventIdentNode::CEventIdentNode(std::string * identifier) {
	eventId = getEventId(*identifier);
	text = *identifier;
}

/** Return this event's unique identifier ID. */
int CEventIdentNode::getId() {
	return eventId;
}

/** Return this event identifier's name text.*/
std::string & CEventIdentNode::getText() {
	return text;
}

/** Create a variable assignment node for the named variable. */
CVarAssigneeNode::CVarAssigneeNode(std::string * parsedString) {
	//Is this global code?
//	if (global)
//		varId = getGlobalVarId(*parsedString);
	//else
	//	varId = -1;

	name = *parsedString;
}

/** Tell the VM to push this variable's identifier on to the stack. */
void CVarAssigneeNode::encode() {
	writeOp(opPushInt);
	//if (varId == -1) { //this is not a global variable
		//check if it's a data member first.
		auto iter = memberIds.find(name);
		if (iter != memberIds.end()) {
			//treat as assignment to a member
			int memberId = iter->second;
			writeWord(selfObjId);
			writeOp(opPushInt);
			writeWord(memberId);
			return;
		}

		//TO DO: check *here* if it's global or local, no need to do so in the constructor
		//check first if it's a prexisting global, that takes priority
		//if not and we're in global mode it must still be a global variable
		//if we're not in global mode assume it's local
		auto gIt = globalVarIds.find(name);
		if (gIt != globalVarIds.end()) {
			varId = gIt->second;
		}
		else if (global)
			varId = getGlobalVarId(name);
		else
			varId = getVarId(name); //local
	//}
	writeWord(varId); //globl
}



/** Create a string statement node for the given string-based expression. */
CStrStatement::CStrStatement(CSyntaxNode* stringExpr) {
	mStringExpr = stringExpr;
}

/** Write the code for the string expression, then tell the VM to print the result. */
void CStrStatement::encode() {
	mStringExpr->encode();
	writeOp(opPrint);
}

/** Create a node representing the given integer. */
CIntNode::CIntNode(int parsedInteger) {
	integer = parsedInteger;
}

/** Push this integer onto the stack for the VM to pick up.*/
void CIntNode::encode() {
	writeOp(opPushInt);
	writeWord(integer);
}

/** Create a node representing a timed event declaration. */
CTimedEventNode::CTimedEventNode(CSyntaxNode * event, int parsedInt) {
	eventId = event->getId();
	delay = parsedInt;
}

/** Tell the VM to register this timed event. */
void CTimedEventNode::encode() {
	writeOp(opTimedEvent);
	writeWord(eventId);
	writeWord(delay);
}

/** Create a node representing the declaration of the named object member. */
CMemberDeclNode::CMemberDeclNode(CSyntaxNode* identifier, CSyntaxNode* initialiser) {
	memberId = getMemberId(identifier->getText());
	//memberId = identNode->getId();
	if (initialiser)
		operands.push_back(initialiser);
}

int CMemberDeclNode::getId() {
	return memberId;
}

/** Take care of any initialisation, then add this member to a list of members for the object currently being defined. */
void CMemberDeclNode::encode() {
	TMemberRec memberRec;
	memberRec.memberId = getId();
	memberStack2.push_back(memberRec);
	if (operands.size() > 0)
		operands[0]->encode();
}

/** Create a node representing an object identifier, that returns its id on request. */
CObjIdentNode::CObjIdentNode(std::string* parsedString) {
	name = *parsedString;
	objectId = getObjectId(*parsedString);
}

/** Return the unique id for this object identifier. */
int CObjIdentNode::getId() {
	return objectId;
}

std::string & CObjIdentNode::getText() {
	return name;
}

/** Create a node representing an object declaration. */
CObjDeclNode::CObjDeclNode(CSyntaxNode * identifier, CSyntaxNode * memberList, CSyntaxNode * classObject) {
	identNode = identifier;
	members = memberList;
	classObj = classObject;
	parentId = 0;
	funcMode(false);

	//maintain object tree 
	parentList[childLevel] = identNode->getId();
	if (parentList.find(childLevel - 1) != parentList.end()) {
		std::cerr << "\nobject " << identifier->getText() << " parent: " << parentList[childLevel - 1] << lineNo;
		parentId = parentList[childLevel - 1];
	}
	else {
		if (childLevel > 0) {
			std::cerr << "\nObject definition error! Unable to make " << identifier->getText() << " a level " << childLevel << " child.";
			exit(1);
		}
	}
	childLevel = 0;
}

/** Create an object definition for the VM to pick up. */
void CObjDeclNode::encode() {
	std::string name = identNode->getText();
	CObject* thisObj = &objects[name];
	currentObj = thisObj->objectId;
	
	parentClassList = &thisObj->classIds;
	if (classObj)
		classObj->encode();  //collect all the parent class ids, if any
	//if (classObj)
	//	thisObj->classId = classObj->getId();

	if (!members)
		return;

	//run through the member node declarations and add these to the object's definition
	memberStack2.clear();
	members->encode();

	for (auto memberRec2 : memberStack2) {
		thisObj->members.push_back(memberRec2);
	}
	memberStack2.clear();
	currentObj = 0;

	if (parentId == 0)
		return;

	CObject* parentObj = getObject(parentId);
	TMemberRec parentMemb;
	parentMemb.memberId = memberIds["parent"];
	parentMemb.value.setObjId(parentId);
	thisObj->members.push_back(parentMemb);

	TMemberRec* parentObjChildMemb = getObjectMember(*parentObj, "child");
	if (parentObjChildMemb == NULL) { //parent obj has no current children
		TMemberRec newChildMemb;
		newChildMemb.memberId = memberIds["child"];
		newChildMemb.value.setObjId(thisObj->objectId);
		parentObj->members.push_back(newChildMemb);
	}
	else {	//parent obj already has a child
		TMemberRec newSiblingMemb;
		newSiblingMemb.memberId = memberIds["sibling"];
		newSiblingMemb.value.setObjId(parentObjChildMemb->value.getObjId());
		thisObj->members.push_back(newSiblingMemb);
		parentObjChildMemb->value.setObjId(thisObj->objectId);
	}

	for (auto check : thisObj->localMembersToCheck) {
		if (!objectHasMember(thisObj->objectId, check.memberId)) {
			std::cerr << "\nError, line " << check.lineNum << ": reference to unrecognised identifier \"" << getMemberName(check.memberId) << "\" in object \"" << name << "\"";
			exit(1);
		}
	}
	thisObj->localMembersToCheck.clear();
}

/** Create a node representing an object's member reference. */
CObjMemberAssigneeNode::CObjMemberAssigneeNode(CSyntaxNode * parent, std::string* parsedString) {
	//assume that parent will leave an object id on the stack
	operands.push_back(parent);

	//identify member
	auto iter = memberIds.find(*parsedString);
	if (iter == memberIds.end()) {
		std::cout << "\nError! No member named " << *parsedString << " exists.";
		exit(1);
	}
	memberId = iter->second;
}

/** Tell the VM to push the object id and member id onto the stack. */
void CObjMemberAssigneeNode::encode() {
	operands[0]->encode();
	writeOp(opPushInt);
	writeWord(memberId);
}



/** Create a node representing a reference to an object - either named or in a variable. */
CObjRefNode::CObjRefNode(std::string * parsedString) {
/*uto iter = objects.find(*parsedString);
	if (iter != objects.end()) {
		refId = iter->second.objectId;
		identType = object;
		return;
	}
	auto iter2 = globalVarIds.find(*parsedString);
	if (iter2 != globalVarIds.end()) {
		refId = iter2->second;
		identType = globalVar;
		return;
	}
	*/

	//still here? may be a local variable
	name = *parsedString;
}

/** Tell the VM to push the referenced object id on the stack . */
void CObjRefNode::encode() {
	////////////////////Do checking here
	auto iter = objects.find(name);
	if (iter != objects.end()) { //absolute reference to an object
		writeOp(opPushObj);
		writeWord(iter->second.objectId);
		return;
	}

	//TO DO!!!!!!!!!! check for local member.

	//check for local variable
	auto it = std::find_if(localVarIds.begin(), localVarIds.end(),
		[&](auto& varName) { return varName == name; });
	if (it != localVarIds.end()) {
		writeOp(opPushVar);
		writeWord(it - localVarIds.begin());
		return;
	}

	//check for global variable
	auto globIt =  std::find_if(globalVarIds.begin(), globalVarIds.end(),
		[&](const std::pair<std::string, int>& var) { return var.first == name; });
	if (globIt != globalVarIds.end()) {
		writeOp(opPushVar);
		writeWord(globIt->second);
		return;
	}

		
	std::cout << "\nError, line " << sourceLine << ". No object or variable named \"" << name << "\" exists.";
	exit(1);
}

//TO DO: identical to CObjMemberAssigneeNode - definitely room for refactoring.
/** Create a node representing a member expression. */
CMemberExprNode::CMemberExprNode(CSyntaxNode * parent, std::string * parsedString) {
	operands.push_back(parent);
	//identify member
	auto iter = memberIds.find(*parsedString);
	if (iter == memberIds.end()) {
		//std::cout << "\nError, line " << line << "! No member named " << *parsedString << " exists.";
		//exit(1);
		memberId = getMemberId(*parsedString);
		logGlobalMemberCheck(sourceLine, memberId);
		return;
	}
	memberId = iter->second;
}

/** Tell the VM to put the value expressed by this member on the stack. */
void CMemberExprNode::encode() {
	operands[0]->encode(); //eg an instruction that will push an object id onto stack
	writeOp(opPushVar); //pushvar expects either a var or member id, puts contents on stack
	writeWord(memberId);
}


/** Create a node identifying the named variable/object. */
CVarExprNode::CVarExprNode(std::string * parsedString) {
	id = variableExpression;
	name = *parsedString;
	//TO DO: check if this is a local variable

	//TO DO: can I scrap the below because it all happens at encoding time now?

	//is this a global variable?
	auto iter = globalVarIds.find(*parsedString);
	if (iter != globalVarIds.end()) {
		varId = iter->second;
		identType = globalVar;
		return;
	}
	
	//is this a previously declared object?
	auto iter2 = objects.find(*parsedString);
	if (iter2 != objects.end()) {
		varId = iter2->second.objectId;
		identType = object;
		return;
	}

	
}

/** Tell VM to push this variable's value onto the stack. */
void CVarExprNode::encode() {
	//is this a local variable
	auto it = std::find_if(localVarIds.begin(), localVarIds.end(),
		[&](auto& varName) { return varName == name; });
	if (it != localVarIds.end()) {
		varId = it - localVarIds.begin();
		writeOp(opPushVar); //TO DO: may need sepatate op for global/local
		writeWord(varId);
		return;
	}



	//is it global?
	auto iter = globalVarIds.find(name);
	if (iter != globalVarIds.end()) {
		varId = iter->second;
		writeOp(opPushVar); //TO DO: may need sepatate op for global/local
		writeWord(varId);
		return;
	}

	//or is it an object?
	auto iter2 = objects.find(name);
	if (iter2 != objects.end()) {
		varId = iter2->second.objectId;
		writeOp(opPushObj); 
		writeWord(varId);
		return;
	}

	//are we in an object definition?
	if (currentObj != 0) {
		//assume it must be a member of the current object
		//get member id for it
		int memberId = getMemberId(name);
		//treat it as a member expression

		//does the current object actually have this member?
		logLocalMemberCheck(currentObj, memberId);

		writeOp(opPushInt);
		writeWord(selfObjId);
		writeOp(opPushVar);
		writeWord(memberId);
		return;
	}


	std::cerr << "\nError! Identifier \"" << name << "\" not recognised on line " << sourceLine << ". ";
	exit(1);
	//if (identType == globalVar)
//		writeOp(opPushVar);
//	else
//		writeOp(opPushObj);
	//TO DO: may be able to do this entirely with pushVar, if object ids start at 1000.
//	writeWord(varId);
}

int CVarExprNode::getId() {
	return id;
}

std::string& CVarExprNode::getText() {
	return name;
}
 
/** Create a member-initialisation node initialising with a string. */
CInitNode::CInitNode(std::string * parsedString) {
	value.setStringValue(*parsedString);
}

/** Create a member-initialisation node initialising with an int. */
CInitNode::CInitNode(int parsedInt) {
	value.setIntValue(parsedInt);
}

CInitNode::CInitNode(CSyntaxNode * codeBlock){
	value.setFuncAddr(NULL);
	operands.push_back(codeBlock);
}

CInitNode::CInitNode(CObjIdentNode * objIdent) {
	value.setObjId(objIdent->getId());
}

CInitNode::CInitNode(CArrayInitListNode * arrayInitList) {
	value.type = tigArray;
	operands.push_back(arrayInitList);
}

CInitNode::CInitNode() {
	
}

/** Throw the value of this initialiser on the stack to use when writing the object table. */
void CInitNode::encode() {
	if (value.type == tigFunc) {
		//setOutputFile(fnByteCode); cerr << "\n\n[FUNCTION INIT]";
		int codeStart = fnByteCode.tellp();
		operands[0]->encode();
		//writeOp(opReturn);
		value.setFuncAddr(codeStart);
		//setOutputFile(globalByteCode);
	}


	if (value.type == tigArray) {
		operands[0]->encode(); //encodes arrayInitListNode, values left in arrayStack
		memberStack2.back().arrayInitList = arrayStack;
		arrayStack.clear();
	}

	memberStack2.back().value = value;
}


ClassIdentNode::ClassIdentNode(std::string * parsedString) {
	auto iter = objects.find(*parsedString);
	if (iter != objects.end()) {
		classId = iter->second.objectId;
		return;
	}
	std::cout << "\nError, line: " << sourceLine << " No object named \"" << *parsedString << "\" exists.";
	exit(1);
}

//TO DO: can scrap now
int ClassIdentNode::getId() {
	return classId;
}

void ClassIdentNode::encode() {
	parentClassList->push_back(classId);
}

/** Encapsulate functional, non-global code so that we can encode it separately. */
CodeBlockNode::CodeBlockNode(CSyntaxNode * codeBlock) {
	operands.push_back(codeBlock);
}

void CodeBlockNode::encode() {
	//setOutputFile(fnByteCode); cerr << "\n\nFUNCTION code block"; //TO DO: scrap and catch code inside function definitions instead
	operands[0]->encode();
	//setOutputFile(globalByteCode);
}


CHotTextNode::CHotTextNode(std::string * hotText, std::string* member, CSyntaxNode* object) {
	text = *hotText;
	memberId = getMemberId(*member);
	if (object)
		operands.push_back(object);
}

void CHotTextNode::encode() {
	if (operands.size() > 0 )
		operands[0]->encode(); 
	else {
		writeOp(opPushInt);
		writeWord(selfObjId);
	}
	writeOp(opHot);
	writeString(text);
	writeWord(memberId);
}

void CArrayInitConstNode::encode() {
	//arrayStack.back().value = value;
	arrayStack.push_back(value);
}


CArrayInitNode::CArrayInitNode(CSyntaxNode * initList) {
	operands.push_back(initList);
}

void CArrayInitNode::encode() {
	writeOp(opInitArray);

	arrayStack.clear();
	operands[0]->encode(); //get all the initialisation values on the array stack
	//now write those values as bytecode for the VM to pick up.
	writeWord(arrayStack.size());
	for (auto initValue : arrayStack) {
		writeByte(initValue.type);
		if (initValue.type == tigString)
			writeString(initValue.getStringValue());
		if (initValue.type == tigInt)
			writeWord(initValue.getIntValue());
		//if (initValue.type == tigFunc)
		//	writeWord(initValue.getFuncAddress());
		if (initValue.type == tigObj)
			writeWord(initValue.getObjId());
		if (initValue.type == tigUndefined)
			writeWord(0);
	}
	arrayStack.clear();
}

CArrayElementExprNode::CArrayElementExprNode(CSyntaxNode * array, CSyntaxNode * index) {
	operands.push_back(index);
	operands.push_back(array);
}

void CArrayElementExprNode::encode() {
	operands[0]->encode();
	operands[1]->encode();
	writeOp(opPushElem);
}

CArrayAssignNode::CArrayAssignNode(CSyntaxNode* array, CSyntaxNode* index) {
	operands.push_back(index);
	operands.push_back(array);
}

void CArrayAssignNode::encode() {
	operands[0]->encode();
	operands[1]->encode();
	//writeOp(opAssignElem);
}

CArrayInitListNode::CArrayInitListNode(CSyntaxNode * initList) {
	operands.push_back(initList);
}

void CArrayInitListNode::encode() {
	arrayStack.clear();
	operands[0]->encode(); //get all the initialisation values on the array stack
}

/** Important: this quickly gets the member identifier string stored before an identifier in its initialisation block
	can overwrite it. */
CMembDeclIdentNode::CMembDeclIdentNode(std::string * ident) {
	text = *ident;
}

std::string & CMembDeclIdentNode::getText() {
	return text;
}


CFunctionDefNode::CFunctionDefNode(CSyntaxNode* params, CSyntaxNode * codeBlock) {
	operands.push_back(params);
	operands.push_back(codeBlock);
}

/** Write the function code, prefacing it with the number of local variables required. */
void CFunctionDefNode::encode() {
	localVarIds.clear();
	paramDeclarationMode = true;
	if (operands[0])
		operands[0]->encode();
	paramDeclarationMode = false;
	//should now know how many params

	//setOutputFile(fnByteCode); cerr << "\n\n[FUNCTION write funcDef]";
	setCodeDestination(funcDest);
	global = false;
	int varCountAddr = outputFile->tellp();
	writeByte(0);
	operands[1]->encode();
	char varCount = (char)localVarIds.size();
	if (varCount > 0) {
		int resume = outputFile->tellp();
		outputFile->seekp(varCountAddr);
		cerr << "\n[Patch variable count at " << varCountAddr << " to ";
		writeByte(varCount);
		outputFile->seekp(resume);
	}
	if (lastOp != opReturn && lastOp != opReturnTrue)
		writeOp(opReturnTrue); 
	global = true;
	//setOutputFile(globalByteCode); cerr << "\n\n[GLOBAL] end of func def";
	setCodeDestination(globalDest);
}


CReturnNode::CReturnNode(CSyntaxNode * returnVal) {
	if (returnVal)
		operands.push_back(returnVal);
}

void CReturnNode::encode() {
	if (operands.size() > 0) {
		operands[0]->encode();
		writeOp(opReturn);
	}
	else
		writeOp(opReturnTrue);
}

/** Create a node for calling a function and discarding the returned value. */
CallDiscardNode::CallDiscardNode(CSyntaxNode * funcCode) {
	operands.push_back(funcCode);
}

void CallDiscardNode::encode() {
	operands[0]->encode();
	//writeOp(opCall);
	writeOp(opPop);
}


CIfNode::CIfNode(CSyntaxNode * expr, CSyntaxNode * code, CSyntaxNode * elseCode) {
	operands.push_back(expr);
	operands.push_back(code);
	if (elseCode)
		operands.push_back(elseCode);
}

void CIfNode::encode() {
	//write the test
	operands[0]->encode();

	writeOp(opJumpFalse);
	int patchAddr = outputFile->tellp();
	writeWord(0xFFFFFFFF); //dummy address

	//write the conditional code
	operands[1]->encode();

	//int skipAddr = outputFile->tellp();
	if (operands.size() > 2) {
		writeOp(opJump);
		int patch2Addr = outputFile->tellp();
		writeWord(0xFFFFFFFF);
		int elseAddr = outputFile->tellp();
		outputFile->seekp(patchAddr);
		cout << "\n[patch] " << patchAddr << " to ";
		writeWord(elseAddr);
		outputFile->seekp(elseAddr);
		patchAddr = patch2Addr;
		operands[2]->encode();
	}


	int resumeAddr = outputFile->tellp();

	outputFile->seekp(patchAddr);
	cout << "\n[patch] " << patchAddr << " to ";
	writeWord(resumeAddr);

	outputFile->seekp(resumeAddr);
}



CMemberCallNode::CMemberCallNode(CSyntaxNode * object, CSyntaxNode * funcName, CSyntaxNode * params) {
	operands.push_back(object);
	isFnCall = false;
	auto iter = globalFuncIds.find(funcName->getText());
	if (iter != globalFuncIds.end()) {
		memberId = iter->second.id;
		isFnCall = true;
	}
	else { 
		memberId = getMemberId(funcName->getText());
		logGlobalMemberCheck(sourceLine, memberId);
	}
	operands.push_back(params);
}


void CMemberCallNode::encode() {

	//write code to leave parameter value on stack
	paramCount.push_back(0);
	if (operands[1]) {
		operands[1]->encode();
	}

	if (isFnCall)
		writeOp(opCallFn);
	else {
		if (operands[0] == NULL) {
			writeOp(opPushInt);
			writeWord(selfObjId);
		}
		else
			operands[0]->encode();
		writeOp(opCall);
	}
	writeWord(memberId);
	writeByte(paramCount.back());
	paramCount.pop_back();
}


CForEachNode::CForEachNode(CSyntaxNode* variable, CSyntaxNode * containerObj, CSyntaxNode * code) {
	operands.push_back(variable);
	operands.push_back(containerObj);
	operands.push_back(code);
}

void CForEachNode::encode() {
	operands[0]->encode(); //write code to put variable identifier on the stack
	operands[1]->encode(); //write code to put parent object identifier on the stack
	//initialise var with first child of container
		//get child of container object
		writeOp(opChild);
		//assign to variable
		writeOp(opAssign);
	//:start
	int loopAddr = outputFile->tellp();
	//is var == NULL
	operands[0]->encode(); //put variable identifier back on stack
	writeOp(opGetVar); //leave variable contents on stack
	//yes? jump to resume
	writeOp(opJumpFalse);
	int patchAddr = outputFile->tellp();
	writeWord(0xFFFFFFFF);
	//otherwise do code
	operands[2]->encode();
	//set var to sibling of currently assigned object
	operands[0]->encode(); //put variable identifier on stack
	operands[0]->encode(); //put variable identifier on stack
	writeOp(opGetVar); //resolve to an object identifier
	writeOp(opSibling); //get sibling on stack
	writeOp(opAssign); //assign to variable
	//loop to start
	writeOp(opJump);
	writeWord(loopAddr);
	//:resume

	int resumeAddr = outputFile->tellp();
	outputFile->seekp(patchAddr);
	cout << "\n[patch] " << patchAddr << " to ";
	writeWord(resumeAddr);
	outputFile->seekp(resumeAddr);
}

void CSelfExprNode::encode() {
	//TO DO: if this is global code, just throw an error.
	writeOp(opPushObj);
	writeWord(selfObjId);
}

COpAssignNode::COpAssignNode(TOpCode code, CSyntaxNode * assignee, CSyntaxNode * expr) {
	opCode = code;
	operands.push_back(assignee);
	operands.push_back(expr);
}

void COpAssignNode::encode() {
	operands[0]->encode(); 
	operands[0]->encode();
	writeOp(opGetVar);
	operands[1]->encode();
	writeOp(opCode); //sum values on stack
	writeOp(opAssign); //leave result in the assignee
}


CGlobalFuncDeclNode::CGlobalFuncDeclNode(CSyntaxNode * ident, CSyntaxNode * params, CSyntaxNode * code) {
	//add name to list of global functions
//	id = getGlobalFuncId(*ident);
	operands.push_back(params);
	operands.push_back(code);
	name = ident->getText();
	id = getGlobalFuncId(name);
}

void CGlobalFuncDeclNode::encode() {
	currentObj = 0;
	paramDeclarationMode = true;
	localVarIds.clear();
	if (operands[0])
		operands[0]->encode();
	paramDeclarationMode = false;
	//should now know how many params
	//setOutputFile(fnByteCode); cerr << "\n\n[FUNCTION write global def]";
	setCodeDestination(funcDest);
	global = false; 
	int fnStartAddr = outputFile->tellp();
	writeByte(0); //initial var count
	operands[1]->encode(); //actual function code
	char varCount = (char)localVarIds.size(); //check this gets updated
	if (varCount > 0) {
		int resume = outputFile->tellp();
		outputFile->seekp(fnStartAddr);
		cout << "\n[patch]: ";
		writeByte(varCount);
		outputFile->seekp(resume);
	}
	if (lastOp != opReturn && lastOp != opReturnTrue)
		writeOp(opReturnTrue);
	globalFuncIds[name].addr = fnStartAddr; 
	global = true;
	//setOutputFile(globalByteCode); cerr << "\n\n[GLOBAL] end of global func def";
	setCodeDestination(globalDest);

}

CGlobalFnIdentNode::CGlobalFnIdentNode(std::string* ident) {
	name = *ident;
	id = getGlobalFuncId(*ident);
}

std::string & CGlobalFnIdentNode::getText() {
	return name;
}

/** Ensures declared parameters become part of this function's local variables. */
CParamDeclNode::CParamDeclNode(std::string* ident) {
	name = *ident;
}

void CParamDeclNode::encode() {
	localVarIds.push_back(name);
}

/** Ensures the result of each parameter expression is on the stack.*/
CParamExprNode::CParamExprNode(CSyntaxNode * param) {
	operands.push_back(param);
}

void CParamExprNode::encode() {
	if (paramDeclarationMode) {
		CSyntaxNode* paramNode = operands[0];
		if (paramNode->getId() == variableExpression) {
			localVarIds.push_back(paramNode->getText());
			return;
		}
		else {
			cerr << "\nError! Non-identifier used as parameter declaration.";
			exit(1);
		}
	}
	operands[0]->encode(); 
	paramCount.back()++;
}

CFuncIdentNode::CFuncIdentNode(std::string * ident) {
	name = *ident;
}

std::string & CFuncIdentNode::getText() {
	return name;
}


void CNothingNode::encode() {
	writeOp(opPushObj);
	writeWord(0);
}
