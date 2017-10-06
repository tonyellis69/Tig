#include "syntaxNode.h"

#include <iostream>
using namespace std;

std::vector<std::string>* CSyntaxNode::stringList = NULL;
std::ofstream* CSyntaxNode::outputFile = NULL;
std::map<std::string, int> CSyntaxNode::eventIDs;
int CSyntaxNode::nextEventId = 1;

using  strList_t = std::vector<std::string>*;

CSyntaxNode::CSyntaxNode() {
}

void CSyntaxNode::setStringList(std::vector<std::string>* list) {
	stringList = list;
}

void CSyntaxNode::setOutputFile(std::ofstream& file) {
	outputFile = &file;
}

void CSyntaxNode::writeByte(char byte) {
	outputFile->write(&byte, 1);
}

void CSyntaxNode::writeWord(unsigned int word) {
	outputFile->write((char*)&word, 4);
}

void CSyntaxNode::writeString(std::string & text) {
	*outputFile << text.c_str();
}

/** Return the unique id number for this event identifier. */
int CSyntaxNode::getEventId(std::string & identifier) {
	auto iter = eventIDs.find(identifier);
	if (iter == eventIDs.end()) {
		eventIDs[identifier] = nextEventId;
		return nextEventId++;
	}
	return iter->second;
}

CStrNode::CStrNode(int index) {
	stringListIndex = index;
}

int CStrNode::getStrIndex() {
	
	return stringListIndex;
}

void CStrNode::encode() {
	int stringSize = (*stringList)[stringListIndex].size();
	writeWord(stringSize);
	writeString((*stringList)[stringListIndex]);
}


COpNode::COpNode(TOpCode code, CSyntaxNode* operand) {
	opCode = code;
	operands.push_back(operand);
}

void COpNode::encode() {
	switch(opCode) {
	case opPrint: writeByte(opCode); operands[0]->encode();  break;
	
	}
}

CBranchNode::CBranchNode(CSyntaxNode * branch1, CSyntaxNode * branch2) {
	b1 = branch1;
	b2 = branch2;
}

void CBranchNode::encode() {
	if (b1) {
		b1->encode();
	}
	if (b2) {
		b2->encode();
	}
}

/** Create a node storing the text of this option and its associated ID. */
COptionNode::COptionNode(std::string* text, std::string* branchEvent) {
	choiceText = *text;
	branchID = getEventId(*branchEvent);
}

/** Create a node storing the text of this event, its ID and pointer to its options. */
CEventNode::CEventNode(std::string* identifier, std::string* text, CSyntaxNode* options) {
	eventText = *text;
	eventID = getEventId(*identifier);
	optionList.push_back(options);
}
