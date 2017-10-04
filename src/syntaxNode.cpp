#include "syntaxNode.h"

#include <iostream>
using namespace std;

std::vector<std::string>* CSyntaxNode::stringList = NULL;
std::ofstream* CSyntaxNode::outputFile = NULL;

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
