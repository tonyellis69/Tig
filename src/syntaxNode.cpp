#include "syntaxNode.h"

#include <iostream>
using namespace std;

std::ofstream* CSyntaxNode::outputFile = NULL;
std::map<std::string, int> CSyntaxNode::eventIds;
int CSyntaxNode::nextEventId = 0;
std::map<int, int> CSyntaxNode::eventTable;
std::map<std::string, int> CSyntaxNode::globalVarIds;
int CSyntaxNode::nextGlobalVarId = 0;
std::vector<COptionNode*> CSyntaxNode::optionStack;
int CSyntaxNode::eventTableAddr = 0;
int CSyntaxNode::globalVarTableAddr = 0;
std::map<std::string, int> CSyntaxNode::memberIds;
int CSyntaxNode::nextMemberId = memberIdStart;
std::map<std::string, CObject> CSyntaxNode::objects; 
int CSyntaxNode::nextObjectId = 0;
std::vector<CMemberDeclNode*> CSyntaxNode::memberStack; 


CSyntaxNode::CSyntaxNode() {
}

/** Set the file the syntax tree writes to. */
void CSyntaxNode::setOutputFile(std::ofstream& file) {
	outputFile = &file;
}

void CSyntaxNode::writeOp(char byte) {
	outputFile->write(&byte, 1);
	//cout << "\n" << opCode[byte];
}

void CSyntaxNode::writeByte(char byte) {
	outputFile->write(&byte, 1);
}

void CSyntaxNode::writeWord(unsigned int word) {
	outputFile->write((char*)&word, 4);
	//cout << " " << word;
}

void CSyntaxNode::writeString(const std::string & text) {
	writeWord(text.size());
	*outputFile << text.c_str();
	//cout << " " << text.substr(0, 20);
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

/** Write the class definitions of all defined objects. */
void CSyntaxNode::writeObjectDefTable() {
	writeWord(objects.size());
	for (auto object : objects) {
		writeWord(object.second.objectId);
		writeByte(object.second.members.size());
		for (auto member : object.second.members) {
			writeWord(member);
		}
	}
}

void CSyntaxNode::writeHeader() {
	int headerSize = 4;
	writeWord(eventTableAddr + headerSize);
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
		for (auto operand : operands) 
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

/** Create a global variable assignment node for the named variable. */
CGlobalVarAssignNode::CGlobalVarAssignNode(std::string * parsedString) {
	varId = getGlobalVarId(*parsedString);
	name = *parsedString;
}

/** Write this variable's identifier for the VM to pick up. */
void CGlobalVarAssignNode::encode() {
	writeOp(opPushInt);
	writeWord(varId); 
}

/** Create a global variable expression node for the named variable. */
CGlobalVarExprNode::CGlobalVarExprNode(std::string * parsedString) {
	varId = getGlobalVarId(*parsedString);
	name = *parsedString;
}

/** Push this variable's contents onto the stack for the VM to pick up. */
void CGlobalVarExprNode::encode() {
	writeOp(opPushVar);
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
CMemberDeclNode::CMemberDeclNode(std::string * parsedString) {
	name = *parsedString;
	memberId = getMemberId(*parsedString);
}

int CMemberDeclNode::getId() {
	return memberId;
}

/** Add this member to a list of members for the object currently being defined. */
void CMemberDeclNode::encode() {
	memberStack.push_back(this);
}

/** Create a node representing an object identifier. */
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
CObjDeclNode::CObjDeclNode(CSyntaxNode * identifier, CSyntaxNode * memberList) {
	identNode = identifier;
	members = memberList;
}

/** Create an object definition for the VM to pick up. */
void CObjDeclNode::encode() {
	std::string name = identNode->getText();
	//run through the member nodes and add these to the object's definition
	memberStack.clear();
	members->encode();
	for (auto member : memberStack) {
		objects[name].members.push_back(member->getId());
	}
	memberStack.clear();
}

/** Create a node representing a member reference. */
CReferenceNode::CReferenceNode(CSyntaxNode * parent, std::string* parsedString) {
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

/** Leave the member id of this reference for the VM to pick up. */
void CReferenceNode::encode() {
	operands[0]->encode();
	writeOp(opPushInt);
	writeWord(memberId);
}



/** Create a node representing an object. */
CObjNode::CObjNode(std::string * parsedString) {
	auto iter = objects.find(*parsedString);
	if (iter == objects.end()) {
		std::cout << "\nError! No object named " << *parsedString << " exists.";
		exit(1);
	}
	objectId = iter->second.objectId;
}

/** Leave the object id on the stack for the VM to pick up. */
void CObjNode::encode() {
	writeOp(opPushInt);
	writeWord(objectId);
}

//TO DO: identical to CReferenceNode - definitely room for refactoring.
/** Create a node representing a member expression. */
CMemberNode::CMemberNode(CSyntaxNode * parent, std::string * parsedString) {
	operands.push_back(parent);
	//identify member
	auto iter = memberIds.find(*parsedString);
	if (iter == memberIds.end()) {
		std::cout << "\nError! No member named " << *parsedString << " exists.";
		exit(1);
	}
	memberId = iter->second;
}

/** Get the value expressed by this member on the stack for the VM to pick up. */
void CMemberNode::encode() {
	operands[0]->encode();
	writeOp(opPushVar);
	writeWord(memberId);
}
