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
class COptionNode;
class CSyntaxNode {
public:
	CSyntaxNode();
	virtual int getStrIndex() {  return NULL; } ;
	virtual void encode() {};
	virtual int getId() { return NULL; }
	virtual std::string& getText() { std::string nul;  return nul; };
	int getEventId(std::string& identifier); //TO DO still needed?
	int getGlobalVarId(std::string & identifier);
	static void setOutputFile(std::ofstream& file);
	void writeOp(char byte);
	void writeByte(char byte);
	void writeWord(unsigned int word);
	void writeString(const std::string& text);
	void writeCString(const std::string & text);
	void writeEventTable();
	void writeGlobalVarTable();
	void writeHeader();

	static std::vector<std::string> stringList;
	static std::ofstream* outputFile;
	static std::map<std::string, int> eventIds;
	static int nextEventId;
	static std::map<int, int> eventTable; ///<Tables event IDs and addresses.
	static std::map<std::string, int> globalVarIds;
	static int nextGlobalVarId;
	static std::vector<COptionNode*> optionStack; ///<A handy, temporary container of nodes.

	static int eventTableAddr; ///<Where the event table starts
	static int globalVarTableAddr; ///<Where the global variable table starts
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
	COpNode(TOpCode code);
	COpNode(TOpCode code, CSyntaxNode* operand1, CSyntaxNode* operand2);
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

	int eventId;
	std::string text;
};

class COptionNode : public CSyntaxNode {
public:
	COptionNode(CSyntaxNode* text, CSyntaxNode* optionalCode, CSyntaxNode* branchEvent);
	void encode();

	std::string & getText();
	int getId();

	std::string choiceText;
	int branchID;
	CSyntaxNode* code;
};

class CEventNode : public CSyntaxNode {
public:
	CEventNode(CSyntaxNode* identNode, CSyntaxNode* codeBlock);
	void encode();
	
	std::string eventText;
	int eventId;
	std::vector<CSyntaxNode*> optionList;
	CSyntaxNode* code;
};


class CGlobalVarAssignNode : public CSyntaxNode {
public:
	CGlobalVarAssignNode(std::string* parsedString);
	void encode();

	int varId;
	std::string name;
};

class CGlobalVarExprNode : public CSyntaxNode {
public:
	CGlobalVarExprNode(std::string* parsedString);
	void encode();

	int varId;
	std::string name; ///TO DO: can probably do without
};

class CStrStatement : public CSyntaxNode {
public:
	CStrStatement(CSyntaxNode* stringExpr);
	void encode();

	CSyntaxNode* mStringExpr;
};

