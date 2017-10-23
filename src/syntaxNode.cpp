#include "syntaxNode.h"

#include <iostream>
using namespace std;

std::vector<std::string> CSyntaxNode::stringList;
std::ofstream* CSyntaxNode::outputFile = NULL;
std::map<std::string, int> CSyntaxNode::eventIds;
int CSyntaxNode::nextEventId = 1;
std::map<int, int> CSyntaxNode::eventTable;
std::map<std::string, int> CSyntaxNode::globalVarIds;
int CSyntaxNode::nextGlobalVarId = 0;
std::vector<COptionNode*> CSyntaxNode::optionStack;
int CSyntaxNode::eventTableAddr = 0;
int CSyntaxNode::globalVarTableAddr = 0;


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

void CSyntaxNode::writeEventTable() {
	eventTableAddr = outputFile->tellp();
	writeWord(eventTable.size());
	for (auto event : eventTable) {
		writeWord(event.first);
		writeWord(event.second);
	}
}

/** Write a list of global variable names and their associated ids. */
void CSyntaxNode::writeGlobalVarTable() {
	globalVarTableAddr = outputFile->tellp();
	writeWord(globalVarIds.size());
	for (auto globalVar : globalVarIds) {
		writeCString(globalVar.first);
		writeWord(globalVar.second);
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

/** Create a string node for the given string. */
CStrNode::CStrNode(std::string* parsedString) {
	stringListIndex = stringList.size();
	stringList.push_back(*parsedString);
}

/** Return the index position in the stringlist of this node's string. */
int CStrNode::getStrIndex() {
	return stringListIndex;
}

/** Write the byte code to push this string literal onto the stack. */
void CStrNode::encode() {
	writeOp(opPushStr);
	writeString(stringList[stringListIndex]);
}

/** Create a operator node for the given and its operands. */
COpNode::COpNode(TOpCode code, CSyntaxNode* operand) {
	opCode = code;
	operands.push_back(operand);
}

COpNode::COpNode(TOpCode code) {
	opCode = code;
}

COpNode::COpNode(TOpCode code, CSyntaxNode * operand1, CSyntaxNode * operand2) {
	opCode = code;
	operands.push_back(operand1);
	operands.push_back(operand2);
}


/** Write the bytecode for this operator and its operands. */
void COpNode::encode() {
/*	switch(opCode) {
		case opPrint: operands[0]->encode(); writeOp(opCode); break;
		case opEnd: writeOp(opCode); break;
		case opAssign: operands[0]->encode(); operands[1]->encode(); writeOp(opCode);  break;
	}*/
	for (auto operand : operands) {
		operand->encode();
	}
	writeOp(opCode);
}

/** Create a joint node connecting these two syntax nodes. */
CJointNode::CJointNode(CSyntaxNode * branch1, CSyntaxNode * branch2) {
	b1 = branch1;
	b2 = branch2;
}

/** Recursively encode the branches of this joint node. */
void CJointNode::encode() {
	if (b1) {
		b1->encode();
	}
	if (b2) {
		b2->encode();
	}
}

/** Create a node storing the text of this event option and its associated ID. */
COptionNode::COptionNode(CSyntaxNode* text, CSyntaxNode* optionalCode, CSyntaxNode* branchEvent) {
	choiceText = stringList[text->getStrIndex()];
	branchID = branchEvent->getId();
	code = optionalCode;
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
	code = codeBlock;
}

/** Write the bytecode for this event. */
void CEventNode::encode() {
	int currentAddress = outputFile->tellp();
	eventTable[eventId] = currentAddress;

	if (code) 
		code->encode();

	writeOp(opGiveOptions);


	//write a table of pointers to any code any options contained
	int optionTableAddr = outputFile->tellp();
	for (auto option : optionStack) {
		writeWord(0xFFFFFFFF);
	}
	int optionStartAddr = outputFile->tellp();



	//write the code for each option, if any
	std::vector<int> offsetList; 
	for (auto option : optionStack) {
		int offset = (int)outputFile->tellp() - optionTableAddr;
		if (option->code)
			option->code->encode();
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

/** Return this event's main text.*/
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
