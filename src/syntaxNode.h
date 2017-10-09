#pragma once

#pragma warning (push)
#pragma warning (disable : 4005)
#include <string>
#pragma warning (pop)

#include <vector>
#include <fstream>
#include <map>

#include "sharedTypes.h"

struct TEventRec {
	int eventId;
	int address;
};

/** Basic syntax node. */
class CSyntaxNode {
public:
	CSyntaxNode();
	virtual int getStrIndex() {  return NULL; } ;
	virtual void encode() {};
	virtual int getId() { return NULL; }
	virtual std::string& getText() { std::string nul;  return nul; };
	static void setOutputFile(std::ofstream& file);
	void writeByte(char byte);
	void writeWord(unsigned int word);
	void writeString(std::string& text);
	int getEventId(std::string& identifier);

	static std::vector<std::string> stringList;
	static std::ofstream* outputFile;
	static std::map<std::string, int> eventIDs;
	static int nextEventId;
	static std::map<int, int> eventTable; ///<Tables event IDs and addresses.
	static std::vector<CSyntaxNode*> stack; ///<A handy, temporary container of nodes.
};



class CStrNode : public CSyntaxNode {
public:
	CStrNode(std::string* parsedString);
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

class CJointNode : public CSyntaxNode {
public:
	CJointNode(CSyntaxNode* branch1, CSyntaxNode* branch2);
	void encode();

	CSyntaxNode* b1;
	CSyntaxNode* b2;
};

class CEventIdentNode : public CSyntaxNode {
public:
	CEventIdentNode(std::string* identifier);
	int getId();
	std::string& getText();

	int eventID;
	std::string text;
};

class COptionNode : public CSyntaxNode {
public:
	COptionNode(CSyntaxNode* text, CSyntaxNode* branchEvent);
	void encode();

	std::string & getText();
	int getId();

	std::string choiceText;
	int branchID;
};

class CEventNode : public CSyntaxNode {
public:
	CEventNode(CSyntaxNode* identNode, CSyntaxNode* textNode, CSyntaxNode* options);
	void encode();
	
	std::string eventText;
	int eventID;
	std::vector<CSyntaxNode*> optionList;
};

