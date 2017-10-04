#pragma once

#pragma warning (push)
#pragma warning (disable : 4005)
#include <string>
#pragma warning (pop)

#include <vector>
#include <fstream>

#include "sharedTypes.h"

/** Basic syntax node. */
class CSyntaxNode {
public:
	CSyntaxNode();
	virtual int getStrIndex() {  return NULL; } ;
	virtual void encode() {};
	static void setStringList(std::vector<std::string>* list);
	static void setOutputFile(std::ofstream& file);
	void writeByte(char byte);
	void writeWord(unsigned int word);
	void writeString(std::string& text);

	static std::vector<std::string>* stringList;
	static std::ofstream* outputFile;
};



class CStrNode : public CSyntaxNode {
public:
	CStrNode(int index);
	int getStrIndex();
	void encode();

	
	int stringListIndex; ///<The position in the stringlist of the string represented by this node.
};

class COpNode : public CSyntaxNode {
public:
	COpNode(TOpCode code, CSyntaxNode* operand);
	void encode();

	TOpCode opCode;
	std::vector<CSyntaxNode*> operands;
};

class CBranchNode : public CSyntaxNode {
public:
	CBranchNode(CSyntaxNode* branch1, CSyntaxNode* branch2);
	void encode();

	CSyntaxNode* b1;
	CSyntaxNode* b2;
};