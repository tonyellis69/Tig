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
int CSyntaxNode::nextGlobalVarId = 0;
std::vector<COptionNode*> CSyntaxNode::optionStack;
int CSyntaxNode::eventTableAddr = 0;
int CSyntaxNode::globalVarTableAddr = 0;
int CSyntaxNode::globalCodeAddr = 0;
std::map<std::string, int> CSyntaxNode::memberIds;
int CSyntaxNode::nextMemberId = memberIdStart;
std::map<std::string, CObject> CSyntaxNode::objects; 
int CSyntaxNode::nextObjectId = 0;
std::vector<TMemberRec> CSyntaxNode::memberStack2;
std::vector<CTigVar> CSyntaxNode::arrayStack;


std::vector<CSyntaxNode*> CSyntaxNode::nodeList;

CSyntaxNode::CSyntaxNode() {
	nodeList.push_back(this);
}

/** Set the file the syntax tree writes to. */
void CSyntaxNode::setOutputFile(std::ofstream& file) {
	outputFile = &file;
}

void CSyntaxNode::writeOp(char byte) {
	int addr = outputFile->tellp();
	outputFile->write(&byte, 1);
	cout << "\n" << addr << " " << opCode[byte];
}

void CSyntaxNode::writeByte(char byte) {
	outputFile->write(&byte, 1);
	cout << " " << byte;
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
		writeWord(object.classId);
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

void CSyntaxNode::writeHeader() {
	int headerSize = 8;
	writeWord(eventTableAddr + headerSize); //event table start
	writeWord(globalCodeAddr ); //global code start
}

void CSyntaxNode::killNodes() {
	for (auto node : nodeList)
		delete node;
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
	setOutputFile(fnByteCode);
	int currentAddress = outputFile->tellp();
	eventTable[eventId] = currentAddress;

	operands[0]->encode();

	if (optionStack.size() == 0) {
		writeOp(opEnd);
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
	varId = getGlobalVarId(*parsedString);
	name = *parsedString;
}

/** Tell the VM to push this variable's identifier on to the stack. */
void CVarAssigneeNode::encode() {
	writeOp(opPushInt);
	writeWord(varId); 
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
}

/** Create an object definition for the VM to pick up. */
void CObjDeclNode::encode() {
	std::string name = identNode->getText();
	if (classObj)
		objects[name].classId = classObj->getId();

	if (!members)
		return;
	//run through the member node declarations and add these to the object's definition
	memberStack2.clear();
	members->encode();
	for (auto memberRec2 : memberStack2) {
		objects[name].members.push_back(memberRec2);
	}
	memberStack2.clear();
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
	auto iter = objects.find(*parsedString);
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

	std::cout << "\nError! No object or variable named " << *parsedString << " exists.";
	exit(1);
}

/** Tell the VM to push the object id on the stack . */
void CObjRefNode::encode() {
	if (identType == object) {
		writeOp(opPushInt);
		writeWord(refId);
	}
	else {
		writeOp(opPushVar);
		writeWord(refId);
	}
}

//TO DO: identical to CObjMemberAssigneeNode - definitely room for refactoring.
/** Create a node representing a member expression. */
CMemberExprNode::CMemberExprNode(CSyntaxNode * parent, std::string * parsedString) {
	operands.push_back(parent);
	//identify member
	auto iter = memberIds.find(*parsedString);
	if (iter == memberIds.end()) {
		std::cout << "\nError! No member named " << *parsedString << " exists.";
		exit(1);
	}
	memberId = iter->second;
}

/** Tell the VM to put the value expressed by this member on the stack. */
void CMemberExprNode::encode() {
	operands[0]->encode(); //eg push object id onto stack
	writeOp(opPushVar); //pushvar expects either a var or member id, puts contents on stack
	writeWord(memberId);
}

/** Create a node identifying the named variable/object. */
CVarExprNode::CVarExprNode(std::string * parsedString) {
	name = *parsedString;
	//TO DO: check if this is a local variable

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
	if (identType == globalVar)
		writeOp(opPushVar);
	else
		writeOp(opPushObj);
	//TO DO: may be able to do this entirely with pushVar, if object ids start at 1000.
	writeWord(varId);
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
		setOutputFile(fnByteCode);
		int codeStart = outputFile->tellp();
		operands[0]->encode();
		writeOp(opReturn);
		value.setFuncAddr(codeStart);
		setOutputFile(globalByteCode);
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
	std::cout << "\nError! No object named " << *parsedString << " exists.";
}

int ClassIdentNode::getId() {
	return classId;
}

/** Encapsulate functional, non-global code so that we can encode it separately. */
CodeBlockNode::CodeBlockNode(CSyntaxNode * codeBlock) {
	operands.push_back(codeBlock);
}

void CodeBlockNode::encode() {
	setOutputFile(fnByteCode);
	operands[0]->encode();
	//setOutputFile(globalByteCode);
}


CHotTextNode::CHotTextNode(std::string * hotText, std::string* member) {
	text = *hotText;
	memberId = getMemberId(*member);
}

void CHotTextNode::encode() {
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
