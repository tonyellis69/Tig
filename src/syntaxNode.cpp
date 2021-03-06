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
//std::map<std::string, int> CSyntaxNode::globalVarIds;
//int CSyntaxNode::nextGlobalVarId = globalVarStart;
std::vector<std::string> CSyntaxNode::localVarIds;
std::vector<COptionNode*> CSyntaxNode::optionStack;
int CSyntaxNode::eventTableAddr = 0;
int CSyntaxNode::globalVarTableAddr = 0;
int CSyntaxNode::globalCodeAddr = 0;
std::map<std::string, int> CSyntaxNode::memberIds;
int CSyntaxNode::nextMemberId = memberIdStart;

int CSyntaxNode::nextObjectId = 1; //0 is the default 'object zero'
std::vector<TMemberRec> CSyntaxNode::memberStack2;
std::vector<CTigVar> CSyntaxNode::arrayStack;
std::vector<std::string> CSyntaxNode::unrecognisedArrayIniterStack;
int CSyntaxNode::childLevel = 0;
std::map<int,int> CSyntaxNode::parentList;
bool CSyntaxNode::globalCode = true;
int CSyntaxNode::currentObj = 0;
std::vector<int>* CSyntaxNode::parentClassList = NULL;
//std::map<std::string, TGlobalFn> CSyntaxNode::globalFuncIds;
//int CSyntaxNode::nextGlobalFuncId = 0;
std::vector<unsigned char> CSyntaxNode::paramCount;
std::vector<CSyntaxNode*> CSyntaxNode::nodeList;
bool CSyntaxNode::paramDeclarationMode = false;
std::vector<TMemberCheck> CSyntaxNode::globalMembersToCheck;
//TCodeDest CSyntaxNode::codeDestination;

set<int> CSyntaxNode::globalVarIds;
std::vector<int> CSyntaxNode::arrayInitCount;
std::vector<int> CSyntaxNode::continueAddr;
std::vector<int> CSyntaxNode::breakAddr;
std::vector<std::string> CSyntaxNode::flagNamesTmp; 
std::vector<std::string> CSyntaxNode::flagStack;
std::vector<TNameCheck> CSyntaxNode::flagNamesToCheck;
std::vector<TNameCheck> CSyntaxNode::objNamesToCheck;
std::vector<int> CSyntaxNode::newInitialisationMembers;
std::vector<std::string> CSyntaxNode::unconfirmedLocalVarNames;
std::string CSyntaxNode::latestNewLocalVarName; 
std::vector<TLoopTypes> CSyntaxNode::currentLoop;
std::vector<std::string> CSyntaxNode::declaredMemberNamesTmp;
std::vector<TMemberCheck> CSyntaxNode::unconfirmedLocalMember;

extern std::vector<TLineRec> lineRecs;

extern vector<string> filenames;

std::vector<CSyntaxNode*> nodeList;


CSyntaxNode::CSyntaxNode() {
	nodeList.push_back(this);
	sourceLine = lineRecs.back().currentLineNo;
	sourceFile = lineRecs.back().fileNo;
}

CSyntaxNode::~CSyntaxNode() {

}



void CSyntaxNode::writeFWord(float word) {
	outputFile->write((char*)& word, 4);
	if (compiler->tron)
		cout << " " << word;
}



/** TO DO: since ids are sequential from 0, can probably just store the addresses. */
/** Event ids and addresses. */
void CSyntaxNode::writeEventTable() {
	eventTableAddr = outputFile->tellp();
	compiler->writeWord(eventTable.size());
	for (auto event : eventTable) {
		compiler->writeWord(event.first);
		compiler->writeWord(event.second);
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
	compiler->writeWord(orderedMembers.size());
	for (auto member : orderedMembers) {
		//probably no need to include memberId as they will be sequential starting with memberIdStart
		compiler->writeCString(member.first);
	}
}

/** Write the names of the flags. */
void CSyntaxNode::writeFlagNameTable() {
	compiler->writeWord(flagStack.size());
	for (auto flagName : flagStack) {
		compiler->writeCString(flagName);
	}
}



void CSyntaxNode::writeHeader() {
	int headerSize = 8;
	compiler->writeWord(eventTableAddr + headerSize); //event table start
	compiler->writeWord(globalCodeAddr ); //global code start
}

void CSyntaxNode::killNodes() {
	for (auto node : nodeList)
		delete node;
}

/** Return a pointer to the object with this id. */
CObject * CSyntaxNode::getObject(int objId) {
	auto it = std::find_if(compiler->objects.begin(), compiler->objects.end(),
		[&](auto &objRec)->bool 
	{ return objRec.second.objectId == objId; });
	if (it == compiler->objects.end())
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
	globalCode = !onOff;
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
	obj->localMembersToCheck.push_back({sourceLine,sourceFile, memberId});
}


void CSyntaxNode::logGlobalMemberCheck(int lineNum, int fileNum, int memberId) {
	for (auto globalRef : globalMembersToCheck) {
		if (globalRef.memberId == memberId && globalRef.objId == currentObj) //only need one check
			return;
	}
	globalMembersToCheck.push_back({ lineNum,fileNum, memberId,currentObj });
}

/** Register the given flag name as one that has been encountered without yet being
	declared, to be checked later. */
void CSyntaxNode::logFlagNameCheck(int lineNum, int fileNum, std::string flagName) {
	for (auto flag : flagNamesToCheck) {
		if (flag.name == flagName) 
			return;
	}
	flagNamesToCheck.push_back({ lineNum,fileNum, flagName });
}

/** Register the given object name as one that has been encountered without yet being
	declared, to be checked later. */
void CSyntaxNode::logObjDeclarationCheck(int lineNum, int fileNum, std::string objName) {
	for (auto obj : objNamesToCheck) {
		if (obj.name == objName)
			return;
	}
	objNamesToCheck.push_back({ lineNum,fileNum, objName });
}

std::string CSyntaxNode::getMemberName(int memberId) {
	auto it = std::find_if(memberIds.begin(), memberIds.end(),
		[&](const std::pair<std::string, int>& member) {return member.second == memberId; });	
	if (it == memberIds.end())
		return string("");
	return it->first;
}



/** If an object inherits flags, merge them together in its #flag member to ensure it inherits them. */
void CSyntaxNode::mergeInheritedFlags() {
	int flagsId = getMemberId(string("#flags"));
	int cumulativeFlags;

	for (auto &object : compiler->objects) {
		cumulativeFlags = 0;
		for (auto parentId : object.second.classIds) { //for each parent
			cumulativeFlags |= getObject(parentId)->flags; //merge flags
		}
		if (!cumulativeFlags)
			continue;

		if (object.second.flags) { //if the object already has a flag member
			cumulativeFlags |= object.second.flags;
			for (auto &member : object.second.members) {
				if (member.memberId == flagsId) {
					member.value = cumulativeFlags; //update it
					break;
				}
			}
		}
		else { //otherwise give it one now
			TMemberRec flagMember;
			flagMember.memberId = flagsId;
			flagMember.value = cumulativeFlags;
			//object.second.members.push_back({ flagsId,cumulativeFlags });
			object.second.members.push_back(flagMember);
		}
	
	}
}

/** Return the bitmask value of this flag, creating it if necessary. */
int CSyntaxNode::getFlagBitmask(std::string flagName) {
	auto it = find(flagStack.begin(), flagStack.end(), flagName);
	if (it == flagStack.end()) {
		flagStack.push_back(flagName);
		if (flagStack.size() > 32) {
			cerr << "\nError! Max number of flags (32) exceeded in file: "
				<< filenames[sourceFile] << ", line: " << sourceLine << ".";
			exit(1);
		}
		it = flagStack.end()-1;
		logFlagNameCheck(sourceLine, sourceFile, flagName);//we had to create it, so it's untrustworthy
		
	}

	int bitMask = std::distance(flagStack.begin(), it);
	return  1 << bitMask;
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



/** Return a variable id for a variable used at a local level. */
int CSyntaxNode::getVarId(std::string & identifier) {
	//TO DO: check if it's a local member

	//check if it's an existing global variable
	//auto iter = globalVarIds.find(identifier);
//	if (iter != globalVarIds.end()) {
//		return iter->second;
	//}

	//Check if it's an existing local variable
	//if not, make it one
	nameBase->storeLocalVar(identifier, { sourceFile,sourceLine });
	auto it = std::find_if(localVarIds.begin(), localVarIds.end(),
		[&](auto& varName) { return varName == identifier; });
	if (it == localVarIds.end()) {
		localVarIds.push_back(identifier);
		unconfirmedLocalVarNames.push_back(identifier);
		latestNewLocalVarName = identifier;
		return localVarIds.size()-1;
	}

	return it - localVarIds.begin();
}

/** Return the correct member/local variable id number for this identifier, if it can be found. */
int CSyntaxNode::resolveIdentifier(std::string  identifier) {
	//is it a local variable
	auto it = std::find_if(localVarIds.begin(), localVarIds.end(),
		[&](auto& varName) { return varName == identifier; });
	if (it != localVarIds.end()) { //great, found it!
		return distance(localVarIds.begin(), it);
	}

	//is it a member identifier?
	auto iter = memberIds.find(identifier);
	if (iter != memberIds.end()) {
		return  memberIds[identifier];
	}
	return -1;
}

/** Return the unique id number for this object member identifier. */
int CSyntaxNode::getMemberId(std::string & identifier) {
	auto iter = memberIds.find(identifier);
	if (iter == memberIds.end()) {
		memberIds[identifier] = nextMemberId++;

		//logGlobalMemberCheck(sourceLine, sourceFile, nextMemberId-1);
		//TO DO: experimental! See how this works
		//update: suspended, it was logging 'name' in obj.name[0] as a potential global

		return memberIds[identifier];
	}
	return iter->second;
}

/** Return the unique id number for this object identifier. */
int CSyntaxNode::getObjectId(std::string & identifier) {
	auto iter = compiler->objects.find(identifier);
	if (iter == compiler->objects.end()) {
		CObject newObject;
		newObject.objectId = nextObjectId++;
		compiler->objects[identifier] = newObject;

		logObjDeclarationCheck(sourceLine, sourceFile, identifier); //in case this object is never declared

		return newObject.objectId;
	}
	return iter->second.objectId;
}

/** Return the unique id number for this global function identifier. */
/*
int CSyntaxNode::getGlobalFuncId(std::string& identifier) {
	auto iter = globalFuncIds.find(identifier);
	if (iter == globalFuncIds.end()) {
		globalFuncIds[identifier].id = nextGlobalFuncId++;
		return globalFuncIds[identifier].id;
	}
	return iter->second.id;
}
*/


/** Create a string node for the given string. */
CStrNode::CStrNode(std::string* parsedString) {
	text = *parsedString;
}


std::string & CStrNode::getText() {
	return text;
}



/** Write the byte code to push this string literal onto the stack. */
void CStrNode::encode() {
	compiler->writeOp(opPushStr);
	compiler->writeString(text);
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

COpNode::COpNode(TOpCode code, CSyntaxNode * operand1, CSyntaxNode * operand2, CSyntaxNode * operand3,
	CSyntaxNode * operand4) {
	opCode = code;
	operands.push_back(operand1);
	operands.push_back(operand2);
	operands.push_back(operand3);
	operands.push_back(operand4);
}


/** Write the bytecode for this operator and its operands. */
void COpNode::encode() {
	//TO DO: make this the default action for syntaxnodes?
	for (auto operand : operands) {
		operand->encode();
	}
	compiler->writeOp(opCode);
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
	compiler->writeOp(opOption);
	compiler->writeByte(optionIndex);
	compiler->writeString(choiceText);
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
	//compiler->setOutputFile(fnByteCode); cerr << "\n\n[FUNCTION E]";
	compiler->setCodeDestination(funcDest);
	int currentAddress = outputFile->tellp();
	eventTable[eventId] = currentAddress;

	operands[0]->encode();

	if (optionStack.size() == 0) {
		compiler->writeOp(opEnd);
		//compiler->setOutputFile(globalByteCode); cerr << "\n\n[GLOBAL OP]";
		compiler->setCodeDestination(globalDest);
		return;
	}

	compiler->writeOp(opGiveOptions);
	//write a table of pointers to any code any options contained
	int optionTableAddr = outputFile->tellp();
	for (auto option : optionStack) {
		compiler->writeWord(0xFFFFFFFF);
	}
	int optionStartAddr = outputFile->tellp();

	//write the code for each option
	std::vector<int> offsetList; 
	for (auto option : optionStack) {
		int offset = (int)outputFile->tellp() - optionTableAddr;
		for (auto operand : option->operands) 
			operand->encode();
		compiler->writeOp(opJumpEvent);
		compiler->writeWord(option->getId());
		offsetList.push_back(offset);
	}
	int resume = outputFile->tellp();

	//go back and fill in the table
	outputFile->seekp(optionTableAddr);
	for (auto offset : offsetList) {
		compiler->writeWord(offset);
	}

	outputFile->seekp(resume);
	
	optionStack.clear();
	//compiler->setOutputFile(globalByteCode); cerr << "\n\n[GLOBAL]";
	compiler->setCodeDestination(globalDest);
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
	name = *parsedString;
}

CVarAssigneeNode::~CVarAssigneeNode() {
	
}

/** Tell the VM to push this variable's identifier on to the stack. */
void CVarAssigneeNode::encode() {

	if (nameBase->isConst(name)) {
		cerr << "\nError: file " << filenames[sourceFile] << ", line: " <<
			sourceLine << ". Attempt to assign value to const '" << name << "'.";
		exit(1);
	}

	compiler->writeOp(opPushInt); //TO DO make pushObj where necessary
		//check if it's an existing data member or global variable.
		auto iter = memberIds.find(name);
		if (iter != memberIds.end()) { //member name exists
			int memberId = iter->second;

			if (globalVarIds.find(memberId) != globalVarIds.end() 
				|| find(declaredMemberNamesTmp.begin(), declaredMemberNamesTmp.end(),name) != declaredMemberNamesTmp.end()
				|| objectHasMember(currentObj,memberId) ) {

				compiler->writeWord(zeroObject); //tells VM to resolve whether global or local at runtime
				compiler->writeOp(opPushInt);
				compiler->writeWord(memberId);
				if (globalCode) {
					globalVarIds.insert(memberId);
				}
				return;
			}
		}

		
		if (globalCode) {
			//have we previously used this as a local variable?
			if (nameBase->isLocalVar(name)) {
				cerr << "\nError: local variable " << name << " declared at line " 
					<< nameBase->getSrcLocationConst(name).srcLine
					<< " is also declared as a global variable at line " << sourceLine;
				exit(1);
				//TO DO: maybe scrap this and do all checks at end?
			}
			compiler->writeWord(zeroObject);
			compiler->writeOp(opPushInt);
			varId = getMemberId(name);
			globalVarIds.insert( varId );
		}
		else
			varId = getVarId(name); //local
	
	compiler->writeWord(varId); 
}



/** Create a string statement node for the given string-based expression. */
CStrStatement::CStrStatement(CSyntaxNode* stringExpr) {
	mStringExpr = stringExpr;
}

/** Write the code for the string expression, then tell the VM to print the result. */
void CStrStatement::encode() {
	mStringExpr->encode();
	compiler->writeOp(opPrint);
}

/** Create a node representing the given integer. */
CIntNode::CIntNode(int parsedInteger) {
	integer = parsedInteger;
}

/** Push this integer onto the stack for the VM to pick up.*/
void CIntNode::encode() {
	compiler->writeOp(opPushInt);
	compiler->writeWord(integer);
}

/** Create a node representing the given float. */
CFloatNode::CFloatNode(float parsedFloat) {
	floatVal = parsedFloat;
}

/** Push this integer onto the stack for the VM to pick up.*/
void CFloatNode::encode() {
	compiler->writeOp(opPushFloat);
	writeFWord(floatVal);
}

/** Create a node representing a timed event declaration. */
CTimedEventNode::CTimedEventNode(CSyntaxNode * event, int parsedInt) {
	eventId = event->getId();
	delay = parsedInt;
}

/** Tell the VM to register this timed event. */
void CTimedEventNode::encode() {
	compiler->writeOp(opTimedEvent);
	compiler->writeWord(eventId);
	compiler->writeWord(delay);
}

/** Create a node representing the declaration of the named object member. */
CMemberDeclNode::CMemberDeclNode(CSyntaxNode* identifier, CSyntaxNode* initialiser) {
	std::string name = identifier->getText();
	if (nameBase->isConst(name)) {
		std::cerr << "\nError: file " << filenames[sourceFile] << " line: " << sourceLine << ", "
		<< "member '" << name << "' already defined as a const.";
		exit(1);
	}



	declaredMemberNamesTmp.push_back(name);
	memberId = getMemberId(name);

	nameBase->storeMember(name, memberId, { sourceFile,sourceLine });

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

	memberNames = declaredMemberNamesTmp;
	declaredMemberNamesTmp.clear();

	//maintain object tree 
	parentList[childLevel] = identNode->getId();
	if (parentList.find(childLevel - 1) != parentList.end()) {
	//	std::cerr << "\nobject " << identifier->getText() << " parent: " << parentList[childLevel - 1] << lineNo;
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
	CObject* thisObj = &compiler->objects[name];
	currentObj = thisObj->objectId;
	
	parentClassList = &thisObj->classIds;
	if (classObj)
		classObj->encode();  //collect all the parent class ids, if any

	//if this object name is on the to-be-checked list, we can now remove it
	for (int x = 0; x < objNamesToCheck.size(); x++) {
		if (name == objNamesToCheck[x].name) {
			objNamesToCheck.erase(objNamesToCheck.begin() + x);
			break;
		}
	}


	if (members) {
		//run through the member node declarations and add these to the object's definition
		memberStack2.clear();
		flagNamesTmp.clear();
		unconfirmedLocalMember.clear();
		declaredMemberNamesTmp = memberNames;
		members->encode();

		for (auto memberRec2 : memberStack2) {
			thisObj->members.push_back(memberRec2);
		}
		memberStack2.clear();
		
		memberNames.clear();
		declaredMemberNamesTmp.clear();

		//did we pick up any flags while running through the member declarations?
		int flagValues = 0;
		for (auto flagName : flagNamesTmp) {
			//add flag to the list of known flags
			auto it = find(flagStack.begin(), flagStack.end(), flagName);
			unsigned int index = distance(flagStack.begin(), it);
			//accumulate flag values
			flagValues |= (1 << (index));
		}

		if (flagValues) {
			//if object doesn't have the flags member, add it
			TMemberRec* flagsMember = getObjectMember(*thisObj, "#flags");
			if (flagsMember == NULL) {
				TMemberRec flagMember;
				flagMember.memberId = memberIds["#flags"];
				flagMember.value = flagValues;
				//thisObj->members.push_back({ memberIds["#flags"], CTigVar(flagValues) });
				thisObj->members.push_back(flagMember);
			}
			else {
				int oldVal = flagsMember->value.getIntValue();
				flagsMember->value = oldVal |= flagValues;
			}
			thisObj->flags = flagValues;
		}
		flagNamesTmp.clear();


		for (auto check : thisObj->localMembersToCheck) {
			if (!objectHasMember(thisObj->objectId, check.memberId)
				&& globalVarIds.find(check.memberId) == globalVarIds.end()) {
				std::cerr << "\nError, line " << check.lineNum << ": reference to unrecognised identifier \"" << getMemberName(check.memberId) << "\" in object \"" << name << "\"";
				exit(1);
			}
		}
		thisObj->localMembersToCheck.clear();
	}

	//check if any members logged as potentially undefined globals were in fact local members
	//run through list and remove any false positives
	for (auto it = globalMembersToCheck.begin(); it != globalMembersToCheck.end();) {
		if (it->objId == currentObj && objectHasMember(currentObj, it->memberId))
			it = globalMembersToCheck.erase(it);
		else
			it++;
	}

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


}

/** Create a node representing an object's member reference. */
CObjMemberAssigneeNode::CObjMemberAssigneeNode(CSyntaxNode * parent, std::string* parsedString) {
	//assume that parent will leave an object id on the stack
	operands.push_back(parent);
	memberId = getMemberId(*parsedString);
}

/** Special version for assignment to dereferenced members. */
CObjMemberAssigneeNode::CObjMemberAssigneeNode(CSyntaxNode* parent, CSyntaxNode* reference) {
	//assume that parent will leave an object id on the stack
	operands.push_back(parent);
	operands.push_back(reference);
}

/** Tell the VM to push the object id and member id onto the stack. */
void CObjMemberAssigneeNode::encode() {
	operands[0]->encode(); 
	if (operands.size() == 1) {
		compiler->writeOp(opPushInt);
		compiler->writeWord(memberId);
	}
	else {  //it's a dereferenced member
		operands[1]->encode(); //hopefully this leaves a memberId on the stack.
	}
}



/** Create a node representing a reference to an object - either named or in a variable. */
CObjRefNode::CObjRefNode(std::string * parsedString) {
	name = *parsedString;
}

/** Tell the VM to push the referenced object id on the stack . */
void CObjRefNode::encode() {
	auto iter = compiler->objects.find(name);
	if (iter != compiler->objects.end()) { //absolute reference to an object
		compiler->writeOp(opPushObj);
		compiler->writeWord(iter->second.objectId);
		return;
	}

	//TO DO!!!!!!!!!! check for local member.

	//check for local variable
	auto it = std::find_if(localVarIds.begin(), localVarIds.end(),
		[&](auto& varName) { return varName == name; });
	if (it != localVarIds.end()) {
		compiler->writeOp(opPushVar);
		compiler->writeWord(it - localVarIds.begin());
		return;
	}


	//check for existing global variable/local member
	auto memb = memberIds.find(name);
	if (memb != memberIds.end()) {
		compiler->writeOp(opPushInt); //TO DO pushObj?
		compiler->writeWord(zeroObject);
		compiler->writeOp(opPushVar);
		compiler->writeWord(memb->second);
		return;
	}

	//NO? Then assume this is a forward-reference to a global variable
	int id = getMemberId(name);
	compiler->writeOp(opPushInt); //TO DO pushObj?
	compiler->writeWord(zeroObject);
	compiler->writeOp(opPushVar);
	compiler->writeWord(id);
	logGlobalMemberCheck(sourceLine,sourceFile, id);

	//check for global variable
//	auto globIt =  std::find_if(globalVarIds.begin(), globalVarIds.end(),
//		[&](const std::pair<std::string, int>& var) { return var.first == name; });
//	if (globIt != globalVarIds.end()) {
	//	compiler->writeOp(opPushVar);
//		compiler->writeWord(globIt->second);
	//	return;
//	}

		
	//std::cout << "\nError, line " << sourceLine << ". No object or variable named \"" << name << "\" exists.";
	//exit(1);
}

//TO DO: identical to CObjMemberAssigneeNode - definitely room for refactoring.
/** Create a node representing a member expression. */
CMemberExprNode::CMemberExprNode(CSyntaxNode * parent, std::string * parsedString) {
	operands.push_back(parent);
	//identify member
	auto iter = memberIds.find(*parsedString);
	if (iter == memberIds.end()) {
		memberId = getMemberId(*parsedString);
		logGlobalMemberCheck(sourceLine,sourceFile, memberId);
		return;
	}
	memberId = iter->second;
}

/** Tell the VM to put the value expressed by this member on the stack. */
void CMemberExprNode::encode() {
	operands[0]->encode(); //eg an instruction that will push an object id onto stack
	compiler->writeOp(opPushVar); //pushvar expects either a var or member id, puts contents on stack
	compiler->writeWord(memberId);
}


/** Create a node identifying the named variable/object. */
CVarExprNode::CVarExprNode(std::string * parsedString) {
	id = variableExpression;
	name = *parsedString;	
}

/** Tell VM to push this variable's value onto the stack. */
void CVarExprNode::encode() {
	//is this a known local variable
	auto it = std::find_if(localVarIds.begin(), localVarIds.end(),
		[&](auto& varName) { return varName == name; });
	if (it != localVarIds.end()) {
		varId = it - localVarIds.begin();
		compiler->writeOp(opPushVar); //TO DO: convert to opCall, zero params, as below
		//compiler->writeWord(varId);
		compiler->writeWord(varId);
		return;
	}

	//or is it an object?
	auto iter2 = compiler->objects.find(name);
	if (iter2 != compiler->objects.end()) {
		varId = iter2->second.objectId;
		compiler->writeOp(opPushObj);
		compiler->writeWord(varId);
		return;
	}

	//is it a const?
	if (nameBase->isConst(name)) {
		compiler->writeOp(opPushInt);
		compiler->writeWord(nameBase->getConstValue(name));
		return;
	}


	//is this a local member or global variable?
	auto it2 = memberIds.find(name); int memberId;
	if (it2 == memberIds.end()) { //it's totally new
		memberId = getMemberId(name);
		//log the fact that we couldn't identify it
		logGlobalMemberCheck(sourceLine, sourceFile, memberId);
	}
	else {
		memberId = it2->second;
		//it's a recognised member name, is it a global var?
	
		//does it belong to this object?
		
		logLocalMemberCheck(currentObj,memberId );
	}





	compiler->writeOp(opPushInt);
	compiler->writeWord(zeroObject);
	//compiler->writeOp(opPushVar); 
	//compiler->writeWord(memberId);
	compiler->writeOp(opCall);
	compiler->writeWord(memberId);
	compiler->writeByte(0); //zero params
	return;


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

CInitNode::CInitNode(CMemberIdNode * membIdent) {
	value.setIntValue(membIdent->getId());
}

CInitNode::CInitNode(CObjIdentNode * objIdent) {//
	value.setObjId(objIdent->getId());//
}

CInitNode::CInitNode(CObjOrConstIdentNode* ident) {
	//identifier could be an object name or a global variable
	//search consts list
	if (nameBase->isConst(ident->name)) {
		value = nameBase->getConstValue(ident->name);
		return;
	}

	value.setObjId(getObjectId(ident->name));

}

CInitNode::CInitNode(CMembOrObjIdNode* membOrObjIdent) {
	//let's see if we recognise this identifier
	auto iter = compiler->objects.find(membOrObjIdent->name);
	if (iter != compiler->objects.end()) {
		value.setObjId(iter->second.objectId);
		return;
	}
	auto iter2 = memberIds.find(membOrObjIdent->name);
	if (iter2 != memberIds.end()) {
		value.setIntValue(iter2->second);
		return;
	}

	//it hasn't been declared yet, so let's just store the name for now 
	//and do a last-minute check when compiling
	unrecognisedIdent = membOrObjIdent->name;
	value.type = tigUndefined; //kind of a hack to flag this as so far undefined
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
		// empty function definition = external function
		if (operands[0]->operands[1]->getOpCode() == opNop) {
			value.setFuncAddr(-1);
		}
		else 
	{
			int codeStart = fnByteCode.tellp();
			operands[0]->encode();
			value.setFuncAddr(codeStart);
		}
	}


	if (value.type == tigArray) {
		operands[0]->encode(); //encodes arrayInitListNode, values left in arrayStack
		memberStack2.back().arrayInitList = arrayStack;
		if (!unrecognisedArrayIniterStack.empty())
			memberStack2.back().unrecogniseArrayInitIds = unrecognisedArrayIniterStack;
		memberStack2.back().value.setArray();
		arrayStack.clear();
		unrecognisedArrayIniterStack.clear();
		return;
	}

	memberStack2.back().value = value;
}


ClassIdentNode::ClassIdentNode(std::string * parsedString) {
	//classId = getObjectId(*parsedString);
//	return;

	//TO DO: maybe replace this with the above?
	auto iter = compiler->objects.find(*parsedString);
	if (iter != compiler->objects.end()) {
		classId = iter->second.objectId;
		return;
	}



	std::cout << "\nError, file: " << filenames[sourceFile] << ", line: " << sourceLine << ". No object named \"" << *parsedString << 
		"\" has so far been declared.";
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
	//compiler->setOutputFile(fnByteCode); cerr << "\n\nFUNCTION code block"; //TO DO: scrap and catch code inside function definitions instead
	operands[0]->encode();
	//compiler->setOutputFile(globalByteCode);
}


CHotTextNode::CHotTextNode(CSyntaxNode* hotText, CSyntaxNode* object, CSyntaxNode* member,   CSyntaxNode* params) {
	operands.push_back(hotText);
	operands.push_back(member);
	//if (object)
		operands.push_back(object);
	if (params)
		operands.push_back(params);
}

void CHotTextNode::encode() {
	paramCount.push_back(0);

	operands[0]->encode(); //get hot text string
	operands[1]->encode(); //get memberId
	//if (operands.size() > 2 )
		operands[2]->encode(); //get object
	//else {
	///	compiler->writeOp(opPushSelf);
		//compiler->writeWord(selfObjId);
	//}
	if (operands.size()>3)
		operands[3]->encode(); //get params on stack
	//TO DO: can surely replace with one loop through operands
	compiler->writeOp(opHot);
	
	compiler->writeByte(paramCount.back());
	paramCount.pop_back();

}

void CArrayInitConstNode::encode() {
	arrayStack.push_back(value);

	//unrecognised identifiers go in the string value for later checking,
	//but because the type is tigUndefined the string has to be copied manually:
	if (value.type == tigUndefined) {
		unrecognisedArrayIniterStack.push_back(unrecognisedIdent);
	}
}


CArrayDynInitNode::CArrayDynInitNode(CSyntaxNode * initList) {
	operands.push_back(initList);
}

void CArrayDynInitNode::encode() {
	

	//arrayStack.clear();
	arrayInitCount.push_back(0);
	if (operands[0] != NULL)
		operands[0]->encode(); //get all the initialisation values on the //array// stack
	compiler->writeOp(opInitArray);
	compiler->writeWord(arrayInitCount.back());
	arrayInitCount.pop_back();
	return;



	//now write those values as bytecode for the VM to pick up.
	compiler->writeWord(arrayStack.size());
	for (auto initValue : arrayStack) {
		compiler->writeByte(initValue.type);
		if (initValue.type == tigString)
			compiler->writeString(initValue.getStringValue());
		if (initValue.type == tigInt)
			compiler->writeWord(initValue.getIntValue());
		//if (initValue.type == tigFunc)
		//	compiler->writeWord(initValue.getFuncAddress());
		if (initValue.type == tigObj)
			compiler->writeWord(initValue.getObjId());
		if (initValue.type == tigUndefined)
			compiler->writeWord(0);
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
	compiler->writeOp(opPushElem);
}

CArrayAssignNode::CArrayAssignNode(CSyntaxNode* array, CSyntaxNode* index) {
	operands.push_back(index);
	operands.push_back(array);
}

void CArrayAssignNode::encode() {
	operands[0]->encode(); //index
	operands[1]->encode(); //array
	//compiler->writeOp(opAssignElem);
}

CArrayInitListNode::CArrayInitListNode(CSyntaxNode * initList) {
	operands.push_back(initList);
}

void CArrayInitListNode::encode() {
	arrayStack.clear();
	unrecognisedArrayIniterStack.clear();
	if (operands[0] != NULL)
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
	unconfirmedLocalVarNames.clear();
	paramDeclarationMode = true;
	if (operands[0])
		operands[0]->encode();
	paramDeclarationMode = false;
	//should now know how many params

	compiler->setCodeDestination(funcDest);
	globalCode = false;
	int varCountAddr = outputFile->tellp();
	compiler->writeByte(0);
	operands[1]->encode();

	for (auto varName : unconfirmedLocalVarNames) {
		cerr << "\nError! Unrecognised identifier \"" << varName << "\" in file " <<
			filenames[sourceFile] << ", line " << nameBase->getSrcLocationLocalVar(varName).srcLine << ".";
		exit(1);
	}

	char varCount = (char)localVarIds.size();
	if (varCount > 0) {
		int resume = outputFile->tellp();
		outputFile->seekp(varCountAddr);
		if (compiler->tron)
			cout << "\npatched " << varCountAddr << " to ";
		compiler->writeByte(varCount);
		outputFile->seekp(resume);
	}
//	if (lastOp != opReturn && lastOp != opReturnTrue)
		compiler->writeOp(opReturnTrue); 
	globalCode = true;
	compiler->setCodeDestination(globalDest);
}


CReturnNode::CReturnNode(CSyntaxNode * returnVal) {
	if (returnVal)
		operands.push_back(returnVal);
}

void CReturnNode::encode() {
	if (operands.size() > 0) {
		operands[0]->encode();
		compiler->writeOp(opReturn);
	}
	else
		compiler->writeOp(opReturnTrue);
}

/** Create a node for calling a function and discarding the returned value. */
CallDiscardNode::CallDiscardNode(CSyntaxNode * funcCode) {
	operands.push_back(funcCode);
}

void CallDiscardNode::encode() {
	operands[0]->encode();
	//compiler->writeOp(opCall);
	compiler->writeOp(opPop);
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

	compiler->writeOp(opJumpFalse);
	int patchAddr = outputFile->tellp();
	compiler->writeWord(0xFFFFFFFF); //dummy address

	//write the conditional code
	operands[1]->encode();

	//int skipAddr = outputFile->tellp();
	if (operands.size() > 2) {
		compiler->writeOp(opJump);
		int patch2Addr = outputFile->tellp();
		compiler->writeWord(0xFFFFFFFF);
		int elseAddr = outputFile->tellp();
		outputFile->seekp(patchAddr);
		if (compiler->tron) {
			cout << "\npatched " << patchAddr << " to";
		}
		compiler->writeWord(elseAddr); 
		outputFile->seekp(elseAddr);
		patchAddr = patch2Addr;
		operands[2]->encode();
	}


	int resumeAddr = outputFile->tellp();

	outputFile->seekp(patchAddr);
	if (compiler->tron)
		cout << "\npatched " << patchAddr << " to";
	compiler->writeWord(resumeAddr);

	outputFile->seekp(resumeAddr);
}



CMemberCallNode::CMemberCallNode(CSyntaxNode * object, CSyntaxNode * funcName, CSyntaxNode * params) {
	operands.push_back(object);
	//memberId = 0;
	operands.push_back(funcName);
	operands.push_back(params);
}


void CMemberCallNode::encode() {

	string funcName = operands[1]->getText();
	//if (funcName == "initialiseCombat" && sourceLine == 29)
	//	int b = 0;



	int nameId = -1;

	if (funcName.size() > 0) {
		nameId = resolveIdentifier(funcName);
		//either an id or -1 = not found
		//if not found, consider it a forward reference to a global func name
		if (nameId == -1) {
			nameId = getMemberId(funcName);
			logGlobalMemberCheck(sourceLine, sourceFile, nameId); //makes a note to check if this function was ever found
		}
	}

	//if there's no parent object, are we sure this is a local member call?
	if (operands[0] == NULL && funcName != "") {
		logGlobalMemberCheck(sourceLine, sourceFile, nameId);
	}

	//write code to leave parameter values on stack
	paramCount.push_back(0);
	if (operands[2]) {
		operands[2]->encode();
	}

	if (operands[0] == NULL) { //object, if any
		compiler->writeOp(opPushObj); 
		compiler->writeWord(zeroObject); //local or global method
	}
	else
		operands[0]->encode(); //the object we're messaging

	if (nameId != -1) {
		compiler->writeOp(opCall);
		compiler->writeWord(nameId);
	}
	else {
		operands[1]->encode(); //get the resolved reference on the stack
		compiler->writeOp(opCallDeref); //TO DO: I don't think we ever got here. Investigate
	}

	compiler->writeByte(paramCount.back());
	paramCount.pop_back();
}


CMemberCallDerefNode::CMemberCallDerefNode(CSyntaxNode * object, CSyntaxNode * ref, CSyntaxNode * params) {
	operands.push_back(object);
	//memberId = getMemberId(funcName->getText());
	//this may still be a call to a global function as yet undefined
	//logGlobalMemberCheck(sourceLine, memberId); //makes a note to check if this function was ever found

	operands.push_back(ref);

	operands.push_back(params);
}

void CMemberCallDerefNode::encode() {
	//write code to leave parameter values on stack
	paramCount.push_back(0);
	if (operands[2]) {
		operands[2]->encode();
	}

	if (operands[0] == NULL) { //object, if any
		compiler->writeOp(opPushObj);
		compiler->writeWord(zeroObject); //local or global method
	}
	else
		operands[0]->encode(); //the object we're messaging
	
	//leave value on stack to deref
	operands[1]->encode();
	compiler->writeOp(opCallDeref);

	compiler->writeByte(paramCount.back());
	paramCount.pop_back();
}

CDerefMemberCallNode::CDerefMemberCallNode(CSyntaxNode * pointer, CSyntaxNode * params) {
	operands.push_back(pointer);
	operands.push_back(params);
}

void CDerefMemberCallNode::encode() {
	paramCount.push_back(0);
	if (operands[1]) {
		operands[1]->encode();
	}

	operands[0]->encode(); //this will leave memberId on stack.
	compiler->writeOp(opCallDeref);

	compiler->writeByte(paramCount.back());
	paramCount.pop_back();
}



CForEachNode::CForEachNode(CSyntaxNode* variable, CSyntaxNode * containerObj, CSyntaxNode * code) {
	operands.push_back(variable);
	operands.push_back(containerObj);
	operands.push_back(code);
}

void CForEachNode::encode() {
	unsigned int numBreaks = breakAddr.size();
	operands[1]->encode(); //write code to put parent object identifier on the stack
	//initialise var with first child of container
		//get child of container object
		compiler->writeOp(opChild);
		//assign to variable
		operands[0]->encode(); //write code to put variable identifier on the stack
		compiler->writeOp(opAssign);
	//:start
	int loopAddr = outputFile->tellp();
	continueAddr.push_back(loopAddr);

	operands[0]->encode(); //put variable identifier back on stack
	compiler->writeOp(opGetVar); //leave variable contents on stack
	//yes? jump to resume
	compiler->writeOp(opJumpFalse);
	int patchAddr = outputFile->tellp();
	compiler->writeWord(0xFFFFFFFF);
	//otherwise do code
	operands[2]->encode();
	//set var to sibling of currently assigned object
	//operands[0]->encode(); //put variable identifier on stack
	operands[0]->encode(); //put variable identifier on stack
	compiler->writeOp(opGetVar); //resolve to an object identifier
	compiler->writeOp(opSibling); //get sibling on stack
	operands[0]->encode(); //put variable identifier on stack
	compiler->writeOp(opAssign); //assign to variable
	//loop to start
	compiler->writeOp(opJump);
	compiler->writeWord(loopAddr);
	//:resume

	int resumeAddr = outputFile->tellp();
	outputFile->seekp(patchAddr);
	if (compiler->tron)
		cout << "\npatched " << patchAddr << " to";
	compiler->writeWord(resumeAddr);

	for (unsigned int breaks = numBreaks; breaks < breakAddr.size(); breaks++) {
		outputFile->seekp(breakAddr[breaks]);
		if (compiler->tron)
			cout << "\npatched " << breakAddr[breaks] << " to";
		compiler->writeWord(resumeAddr);
	}
	breakAddr.erase(breakAddr.begin() + numBreaks, breakAddr.end());

	outputFile->seekp(resumeAddr);
	continueAddr.pop_back();
}

CForEachElementNode::CForEachElementNode(CSyntaxNode * variable, CSyntaxNode * containerObj, CSyntaxNode * code,
	CSyntaxNode* start) {
	operands.push_back(variable);
	operands.push_back(containerObj);
	operands.push_back(code);
	operands.push_back(start);
}

void CForEachElementNode::encode() {
	unsigned int numBreaks = breakAddr.size();
	if (operands[3] != NULL)
		operands[3]->encode(); //put start value on stack as index
	else {
		compiler->writeOp(opPushInt);
		compiler->writeWord(0); //put 0 on the stack as index
	}
	operands[1]->encode(); //write code to put array on the stack

	//loop:
	int loopAddr = outputFile->tellp();
	continueAddr.push_back(loopAddr);
	compiler->writeOp(opArrayIt);
	int patchAddr = outputFile->tellp();
	compiler->writeWord(0xFFFFFFFF); //jump to resume if index = array size
	//otherwise, element n is now on the stack
	operands[0]->encode(); //write code to put variable identifier on the stack					   
	compiler->writeOp(opAssign); //assign value on stack to the variable

	auto it = find(unconfirmedLocalVarNames.begin(),
		unconfirmedLocalVarNames.end(), latestNewLocalVarName);
	if (it != unconfirmedLocalVarNames.end())
		unconfirmedLocalVarNames.erase(it);



	//do code code
	currentLoop.push_back(forEachLoop);
	operands[2]->encode();
	currentLoop.pop_back();

	//jump to loop:
	compiler->writeOp(opJump);
	compiler->writeWord(loopAddr);

	int resumeAddr = outputFile->tellp();
	outputFile->seekp(patchAddr);
	if (compiler->tron)
		cout << "\npatched " << patchAddr << " to";
	compiler->writeWord(resumeAddr);

	for (unsigned int breaks = numBreaks; breaks < breakAddr.size(); breaks++) {
		outputFile->seekp(breakAddr[breaks]);
		if (compiler->tron)
			cout << "\npatched " << breakAddr[breaks] << " to";
		compiler->writeWord(resumeAddr);
	}
	breakAddr.erase(breakAddr.begin() + numBreaks, breakAddr.end());

	outputFile->seekp(resumeAddr);

	continueAddr.pop_back();



}


void CSelfExprNode::encode() {
	//TO DO: if this is global code, just throw an error.
	compiler->writeOp(opPushObj);
	compiler->writeWord(selfObjId);
}

COpAssignNode::COpAssignNode(TOpCode code, CSyntaxNode * assignee, CSyntaxNode * expr) {
	opCode = code;
	operands.push_back(assignee);
	operands.push_back(expr);
}

void COpAssignNode::encode() {
	//operands[0]->encode();
	operands[0]->encode();
	compiler->writeOp(opGetVar);



	operands[1]->encode();
	compiler->writeOp(opCode); //sum values on stack
	operands[0]->encode();
	compiler->writeOp(opAssign); //leave result in the assignee
}


CGlobalFuncDeclNode::CGlobalFuncDeclNode(CSyntaxNode * ident, CSyntaxNode * params, CSyntaxNode * code) {
	operands.push_back(params);
	operands.push_back(code);
	name = ident->getText();
	//id = getGlobalFuncId(name);
	id = getMemberId(name); //Any call-forward to this func will have made its name a member, so let's use that id.
	
	//has a previously uncertain global member reference now been confirmed?
	for (unsigned int x = 0; x < globalMembersToCheck.size(); x++) {
		if (globalMembersToCheck[x].memberId == id && globalMembersToCheck[x].objId == 0) {
			globalMembersToCheck.erase(globalMembersToCheck.begin() + x);
		}
	}
}

void CGlobalFuncDeclNode::encode() {
	currentObj = 0;
	paramDeclarationMode = true;
	localVarIds.clear();
	if (operands[0])
		operands[0]->encode();
	paramDeclarationMode = false;
	//should now know how many params
	//compiler->setOutputFile(fnByteCode); cerr << "\n\n[FUNCTION write global def]";
	compiler->setCodeDestination(funcDest);
	globalCode = false; 
	int fnStartAddr = outputFile->tellp();
	compiler->writeByte(0); //initial var count
	operands[1]->encode(); //actual function code
	char varCount = (char)localVarIds.size(); //check this gets updated
	if (varCount > 0) {
		int resume = outputFile->tellp();
		outputFile->seekp(fnStartAddr);
		if (compiler->tron)
			cout << "\npatched " << fnStartAddr << "to ";
		compiler->writeByte(varCount);
		outputFile->seekp(resume);
	}
	//if (lastOp != opReturn && lastOp != opReturnTrue)
		compiler->writeOp(opReturnTrue);
	//globalFuncIds[name].addr = fnStartAddr; 
	CTigVar addr;
	addr.setFuncAddr(fnStartAddr);
	TMemberRec  fnMember;
	fnMember.memberId = id;
	fnMember.value = addr;
	//compiler->objects[""].members.push_back({ id,addr });
	compiler->objects[""].members.push_back(fnMember);
	globalCode = true;
	//compiler->setOutputFile(globalByteCode); cerr << "\n\n[GLOBAL] end of global func def";
	compiler->setCodeDestination(globalDest);
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

CFuncIdentNode::CFuncIdentNode(std::string * ident, CSyntaxNode* deref) {
	if (ident)
		name = *ident;
	operands.push_back(deref);
}

std::string & CFuncIdentNode::getText() {
	return name;
}

void CFuncIdentNode::encode() {
	operands[0]->encode();
}

/** Tell the VM to put the zero object on the stack. */
void CNothingNode::encode() {
	compiler->writeOp(opPushObj);
	compiler->writeWord(0);
}

/**	Tell the VM to call the superclass version of this function.  */
CSuperCallNode::CSuperCallNode(CSyntaxNode * super, CSyntaxNode * funcName, CSyntaxNode * params) {
	operands.push_back(super);
	memberId = getMemberId(funcName->getText());
	operands.push_back(params);
}

void CSuperCallNode::encode() {
	logGlobalMemberCheck(sourceLine, sourceFile, memberId); //makes a note to check if this function was ever found										//}

	//write code to leave parameter value on stack
	paramCount.push_back(0);
	if (operands[1]) {
		operands[1]->encode();
	}

	compiler->writeOp(opPushInt); ///TO DO push obj!!!
	compiler->writeWord(operands[0]->getId());
	compiler->writeOp(opSuperCall);
	compiler->writeWord(memberId);
	compiler->writeByte(paramCount.back());
	paramCount.pop_back();
}


CMemberIdNode::CMemberIdNode(std::string * membName) {
	if (membName)
		name = *membName;
}

int CMemberIdNode::getId() {
	return getMemberId(name);
}

void CMemberIdNode::encode() {
	compiler->writeOp(opPushInt);
	if (name.size() > 0) {
		int memberId = getMemberId(name);
		compiler->writeWord(memberId);
	}
	else
		compiler->writeWord(0);
}

CDerefVarNode::CDerefVarNode(CSyntaxNode * var) {
	operands.push_back(var);
}

void CDerefVarNode::encode() {
	//compiler->writeOp(opPushSelf);////////////////////////////////////////shouldn't need
	operands[0]->encode(); //should leave the memberId in var on the stack.
//	compiler->writeOp(opGetVar); //leave value in local member on stack
}

CVarIdNode::CVarIdNode(std::string * ident) {
	name = *ident;
}

void CVarIdNode::encode() {
	compiler->writeOp(opPushInt);
	int memberId = getMemberId(name);
	compiler->writeWord(memberId);
}

CArrayDynInitElem::CArrayDynInitElem(CSyntaxNode * element) {
	operands.push_back(element);
}

void CArrayDynInitElem::encode() {
	arrayInitCount.back()++;
	operands[0]->encode();
}

CMsgNode::CMsgNode(CSyntaxNode * params) {
	operands.push_back(params);
}

void CMsgNode::encode() {
	paramCount.push_back(0);
	if (operands[0]) {
		operands[0]->encode();
	}

	compiler->writeOp(opMsg);
	compiler->writeByte(paramCount.back());
	paramCount.pop_back();
}

/** A syntax node for a continue statement in a loop. */
void CContinueNode::encode() {
	if (continueAddr.size()) {
		compiler->writeOp(opJump);
		compiler->writeWord(continueAddr.back());
		return;
	}
	cerr << "\nError: file " << filenames[sourceFile] << ", line: " <<
		sourceLine << ". 'continue' used outside a loop.";
	exit(1);
}

/** A syntax node fore breaking out of a loop. */
void CLoopBreakNode::encode() {
	if (currentLoop.empty()) {
		cerr << "\nError: file " << filenames[sourceFile] << ", line: " <<
			sourceLine << ". 'break' used outside a loop.";
		exit(1);
	}

	if (currentLoop.back() == forEachLoop) {
		compiler->writeOp(opPop);
		compiler->writeOp(opPop);
	}

	compiler->writeOp(opJump);
	breakAddr.push_back(outputFile->tellp());
	compiler->writeWord(0xFFFFFFFF);
}


CMakeHotNode::CMakeHotNode(CSyntaxNode * text, CSyntaxNode * obj, CSyntaxNode * fn,  CSyntaxNode * params, bool alt) {
	this->alt = alt;
	operands.push_back(text);
	operands.push_back(fn);
	operands.push_back(obj);
	if (params)
		operands.push_back(params);
}

void CMakeHotNode::encode() {
	paramCount.push_back(0);

	for (auto operand : operands)
		operand->encode();
	if (alt)
		compiler->writeOp(opMakeHotAlt);
	else
		compiler->writeOp(opMakeHot);
	compiler->writeByte(paramCount.back());
	paramCount.pop_back();
}

/** Node for the declaration of a flag in an object definition. If the flag doesn't
	already exist it is added to the permanent list. */
CFlagDeclNode::CFlagDeclNode() {
	for (auto flagName : flagNamesTmp)
		flagNames.push_back(flagName);
	flagNamesTmp.clear();
}

void CFlagDeclNode::encode() {
	for (auto flagName : flagNames) {
		flagNamesTmp.push_back(flagName);
		getFlagBitmask(flagName);
		//adds name to list, no need to record bitmask here
	
		//if it's on the naughty list, we can now remove it as it has been set therefore definitely exists
		for (unsigned int x = 0; x < flagNamesToCheck.size(); x++) {
			if (flagNamesToCheck[x].name == flagName) {
				flagNamesToCheck.erase(flagNamesToCheck.begin() + x);
				break;
			}
		}
	}
}


/** Node for when a flag expression is encountered in code. */
CFlagExprNode::CFlagExprNode(std::string * flagName) {
	this->flagName = *flagName;
}

void CFlagExprNode::encode() {

	int bitMask = getFlagBitmask(flagName);

	//auto it = find(flagStack.begin(),flagStack.end(),flagName);
	//if (it == flagStack.end()) {
	//	logFlagNameCheck(sourceLine, sourceFile, flagName);

	//}

	//int bitMask = std::distance(flagStack.begin(), it) + 1;
	//bitMask = 1 << bitMask;

	compiler->writeOp(opPushInt);
	compiler->writeWord(bitMask);
}

/**	Node for creating a new object with the 'new' keyword. */
CNewNode::CNewNode(CSyntaxNode * classType, CSyntaxNode * initialisation) {
	//classId = classType->getId();
	//Let's try to make the class a variable
	operands.push_back(classType);

	if (initialisation)
		operands.push_back(initialisation);
}

void CNewNode::encode() {
	//handle any initialisation here
	if (operands.size() > 1) {
		newInitialisationMembers.clear();
		operands[1]->encode();
	}

	operands[0]->encode(); //get the classId on the stack
	compiler->writeOp(opNew);
	//compiler->writeWord(classId);

	//write length of initialisation list
	compiler->writeByte((char)newInitialisationMembers.size());
	//write initialisation list
	reverse(newInitialisationMembers.begin(), newInitialisationMembers.end());
	for (auto member : newInitialisationMembers)
		compiler->writeWord(member);
	newInitialisationMembers.clear();
}

/** Node for handling a list of member initialisations for a new object. */
CNewInitialiserListNode::CNewInitialiserListNode(CSyntaxNode * initList) {
	operands.push_back(initList);
}

/** Process the initialisation list items. */
void CNewInitialiserListNode::encode() {
	operands[0]->encode();
}

/** Node for the initialisation of a specific member in a new object initialisation list. */
CNewInitialiserNode::CNewInitialiserNode(std::string* memberName, CSyntaxNode * initCode) {
	memberId = getMemberId(*memberName);
	operands.push_back(initCode);
}

/** Write the code to put the initialisation value on the stack; record the initialised member. */
void CNewInitialiserNode::encode() {
	operands[0]->encode();
	newInitialisationMembers.push_back(memberId);
}

/** A syntax node for a finalLoop expression in a loop. */
void CFinalLoopNode::encode() {

	if (continueAddr.size()) {
		compiler->writeOp(opFinalLoop);
		return;
	}
	cerr << "\nError: file " << filenames[sourceFile] << ", line: " <<
		sourceLine << ". 'finalLoop' used outside a loop.";
	exit(1);

}

/**	A node for setting a flag on an object. If the flag is unrecognised, it is created.*/
CSetFlagNode::CSetFlagNode(CSyntaxNode * object, CSyntaxNode * flagExpr) {
	operands.push_back(object);
	operands.push_back(flagExpr);
}

void CSetFlagNode::encode() {
	std::string flagName = operands[1]->getText();
	int bitmask = getFlagBitmask(flagName);

	//if it's on the naughty list, we can now remove it as it has been set therefore definitely exists
	for (unsigned int x = 0; x < flagNamesToCheck.size(); x++) {
		if (flagNamesToCheck[x].name == flagName) {
			flagNamesToCheck.erase(flagNamesToCheck.begin() + x);
			break;
		}
	}


	operands[0]->encode();
	compiler->writeOp(opPushInt);
	compiler->writeWord(bitmask);
	compiler->writeOp(opSet);
}

/** Node for a dice roll expression, eg 'd20'. */
CRollNode::CRollNode(int die) {
	sides = die;
}

void CRollNode::encode() {
	compiler->writeOp(opRoll);
	compiler->writeWord(sides);
}


/** A syntax node for a 'first loop' expression in a loop. */
void CFirstLoopNode::encode() {
	if (continueAddr.size()) {
		compiler->writeOp(opFirstLoop);
		return;
	}
	cerr << "\nError: file " << filenames[sourceFile] << ", line: " <<
		sourceLine << ". 'firstLoop' used outside a loop.";
	exit(1);

}

/** A syntax node for trapping assignment, to ensure all local variables
	have been properly created through assignment. */
CVarAssignNode::CVarAssignNode(CSyntaxNode * assignee, CSyntaxNode * value) {
	operands.push_back(assignee);
	operands.push_back(value);
}

void CVarAssignNode::encode() {
	operands[0]->encode();
	operands[1]->encode();

	auto it = find(unconfirmedLocalVarNames.begin(),
		unconfirmedLocalVarNames.end(), latestNewLocalVarName);
	if (it != unconfirmedLocalVarNames.end())
		unconfirmedLocalVarNames.erase(it);

	compiler->writeOp(opAssign);
}

CArrayPushNode::CArrayPushNode(CSyntaxNode * assignee, CSyntaxNode * value) {
	operands.push_back(assignee);
	operands.push_back(value);
}

void CArrayPushNode::encode() {
	operands[0]->encode();
	operands[1]->encode();

	auto it = find(unconfirmedLocalVarNames.begin(),
		unconfirmedLocalVarNames.end(), latestNewLocalVarName);
	if (it != unconfirmedLocalVarNames.end())
		unconfirmedLocalVarNames.erase(it);

	compiler->writeOp(opArrayPush);
}

/** Node for a -= operation on an array. */
CArrayRemoveValueNode::CArrayRemoveValueNode(CSyntaxNode* assignee, CSyntaxNode* value) {
	operands.push_back(assignee);
	operands.push_back(value);
}

void CArrayRemoveValueNode::encode() {
	operands[0]->encode();
	operands[1]->encode();

	auto it = find(unconfirmedLocalVarNames.begin(),
		unconfirmedLocalVarNames.end(), latestNewLocalVarName);
	if (it != unconfirmedLocalVarNames.end())
		unconfirmedLocalVarNames.erase(it);

	compiler->writeOp(opArrayRemoveValue);
}

/** A node defining a while loop. */
CWhileNode::CWhileNode(CSyntaxNode* condition, CSyntaxNode* code) {
	operands.push_back(condition);
	operands.push_back(code);
}

void CWhileNode::encode() {
	unsigned int numBreaks = breakAddr.size();
	int loopAddr = outputFile->tellp();
	continueAddr.push_back(loopAddr);
	operands[0]->encode(); //condition check
	compiler->writeOp(opJumpFalse);
	int patchAddr = outputFile->tellp();
	compiler->writeWord(0xFFFFFFFF); //dummy address

	//write the conditional code
	currentLoop.push_back(whileLoop);
	operands[1]->encode();
	currentLoop.pop_back();

	compiler->writeOp(opJump);
	compiler->writeWord(loopAddr);
	int resumeAddr = outputFile->tellp();
	outputFile->seekp(patchAddr);
	if (compiler->tron)
		cout << "\npatched " << patchAddr << " to";
	compiler->writeWord(resumeAddr);

	//patch any use of break in this loo[
	for (unsigned int breaks = numBreaks; breaks < breakAddr.size(); breaks++) {
		outputFile->seekp(breakAddr[breaks]);
		if (compiler->tron)
			cout << "\npatched " << breakAddr[breaks] << " to";
		compiler->writeWord(resumeAddr);
	}
	breakAddr.erase(breakAddr.begin() + numBreaks, breakAddr.end());

	outputFile->seekp(resumeAddr);
	continueAddr.pop_back();
}

/** A node representing an identifier that may be an object name and may be a 
	member, usually found in a member array initialisation. */
CMembOrObjIdNode::CMembOrObjIdNode(std::string* idName) {
	name = *idName; //just preserve the identifier string for now.
}

/** A node representing an identifier that may be an object name and may be a
	const, usually found in a member  initialisation. */
CObjOrConstIdentNode::CObjOrConstIdentNode(std::string* idName) {
	name = *idName; //just preserve the identifier string for now.
}

/** A node representing a constant declaration. */
CConstNode::CConstNode(std::string* idName, int value) {
	if (nameBase->isMember(*idName)) {
		cerr << "\nError: file " << filenames[sourceFile] << ", line: " <<
			sourceLine << ", const '" << *idName << "' already defined as a member.";
		exit(1);
	}

	nameBase->storeConst(*idName, value, {sourceLine, sourceFile});
}




CNegateNode::CNegateNode(CSyntaxNode* expr) {
	numericConst = false;
	operands.push_back(expr);
}

CNegateNode::CNegateNode(CIntNode* expr) {
	numericConst = true;
	expr->integer = -expr->integer;
	operands.push_back(expr);
}

void CNegateNode::encode() {
	operands[0]->encode();
	if (!numericConst)
		compiler->writeOp(opMinus);
}

CExportDeclNode::CExportDeclNode(std::string* idName) {
	nameBase->storeExport(*idName);
}

void CExportDeclNode::encode()
{
}
