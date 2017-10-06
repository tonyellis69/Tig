#pragma once

#pragma warning (push)
#pragma warning (disable : 4005)
#include <string>
#pragma warning (pop)

#include <vector>
#include <fstream>
#include <map>

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
	int getEventId(std::string& identifier);

	static std::vector<std::string>* stringList;
	static std::ofstream* outputFile;
	static std::map<std::string, int> eventIDs;
	static int nextEventId;
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

class COptionNode : public CSyntaxNode {
public:
	COptionNode(std::string* text, std::string* branchEvent);


	std::string choiceText;
	int branchID;
};

class CEventNode : public CSyntaxNode {
public:
	CEventNode(std::string* identifier, std::string* text, CSyntaxNode* options);
	
	std::string eventText;
	int eventID;
	std::vector<CSyntaxNode*> optionList;
};