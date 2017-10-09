#include "syntaxNode.h"

#include <iostream>
using namespace std;

std::vector<std::string> CSyntaxNode::stringList;
std::ofstream* CSyntaxNode::outputFile = NULL;
std::map<std::string, int> CSyntaxNode::eventIDs;
int CSyntaxNode::nextEventId = 1;
std::map<int, int> CSyntaxNode::eventTable;
std::vector<CSyntaxNode*> CSyntaxNode::stack;


//using  strList_t = std::vector<std::string>*;

CSyntaxNode::CSyntaxNode() {
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
		eventIDs[identifier] = nextEventId++;
		return eventIDs[identifier];
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

/** Write the byte code for this string literal. */
void CStrNode::encode() {
	int stringSize = stringList[stringListIndex].size();
	writeWord(stringSize);
	writeString(stringList[stringListIndex]);
}

/** Create a operator node for the given and its operands. */
COpNode::COpNode(TOpCode code, CSyntaxNode* operand) {
	opCode = code;
	operands.push_back(operand);
}

/** Write the bytecode for this operator and its operands. */
void COpNode::encode() {
	switch(opCode) {
	case opPrint: writeByte(opCode); operands[0]->encode();  break;
	}
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
COptionNode::COptionNode(CSyntaxNode* text, CSyntaxNode* branchEvent) {
	choiceText = stringList[text->getStrIndex()];
	branchID = branchEvent->getId();
}

/** Temporarily put the details of this option on the stack. */
void COptionNode::encode() {
	stack.push_back(this);

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
CEventNode::CEventNode(CSyntaxNode* identNode, CSyntaxNode* textNode, CSyntaxNode* options) {
	eventText = stringList[textNode->getStrIndex()]; 
	eventID = identNode->getId();
	optionList.push_back(options);
}

/** Write the bytecode for this event. */
void CEventNode::encode() {
	cout << "\nEvent node " << eventID << " with text: \n" << eventText;
	cout << "\noptions: ";
	//write the event's in-code position to the event list.
	int currentAddress = outputFile->tellp();
	eventTable[eventID] = currentAddress;
	//write code to display the event text.
	writeByte(opPrint);
	writeString(eventText);

	//collect the options
	int count = 0;
	for (auto option : optionList) {
		option->encode();
	}
	//write code passing the option texts to the user
	writeByte(opOption);
	writeByte(stack.size());
	for (int option = 0; option < stack.size(); option++) {
		string optionStr = stack[option]->getText();
		writeWord(optionStr.size());
		writeString(optionStr);
		int eventID = stack[option]->getId();
		writeWord(eventID);
	}
	stack.clear();


}

/** Create an identifier node for the given identifier string. */
CEventIdentNode::CEventIdentNode(std::string * identifier) {
	eventID = getEventId(*identifier);
	text = *identifier;
}

/** Return this event's unique identifier ID. */
int CEventIdentNode::getId() {
	return eventID;
}

/** Return this event's main text.*/
std::string & CEventIdentNode::getText() {
	return text;
}
