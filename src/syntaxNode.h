#pragma once

#pragma warning (push)
#pragma warning (disable : 4005)
#include <string>
#pragma warning (pop)

#include <vector>
#include <fstream>
#include <map>

#include "sharedTypes.h"

class CSyntaxNode;
struct TMemberRec {
	int memberId;
	CSyntaxNode* initialiser;
};

class CObject {
public:
	CObject() {};
	int objectId;
	std::vector<TMemberRec> members;
};

/** Basic syntax node. */
class COptionNode;
class CMemberDeclNode;
class CSyntaxNode {
public:
	CSyntaxNode();
	virtual int getStrIndex() {  return NULL; } ;
	virtual void encode() {};
	virtual int getId() { return NULL; }
	virtual std::string& getText() { std::string nul;  return nul; };
	int getEventId(std::string& identifier); //TO DO still needed?
	int getGlobalVarId(std::string & identifier);
	int getMemberId(std::string & identifier);
	int getObjectId(std::string & identifier);
	static void setOutputFile(std::ofstream& file);
	void writeOp(char byte);
	void writeByte(char byte);
	void writeWord(unsigned int word);
	void writeString(const std::string& text);
	void writeCString(const std::string & text);
	void writeEventTable();
	void writeGlobalVarTable();
	void writeObjectDefTable();
	void writeHeader();

	void killNodes();


	std::vector<CSyntaxNode*> operands;

	static std::ofstream* outputFile;
	static std::map<std::string, int> eventIds;
	static int nextEventId;
	static std::map<std::string, int> globalVarIds;
	static int nextGlobalVarId;
	static std::map<std::string, int> memberIds; ///<Object member names and their ids.
	static int nextMemberId;
	static std::map<std::string, CObject> objects; ///<Objects names and their details.
	static int nextObjectId;

	static std::map<int, int> eventTable; ///<Tables event IDs and addresses.
	static std::vector<COptionNode*> optionStack; ///<A handy, temporary container of nodes.

	static int eventTableAddr; ///<Where the event table starts
	static int globalVarTableAddr; ///<Where the global variable table starts

	static std::vector<CMemberDeclNode*> memberStack; ///<Temporary tracker of all the members of an object.

	static std::vector<CSyntaxNode*> nodeList;
};

enum TIdentType { local, globalVar, object };

class CStrNode : public CSyntaxNode {
public:
	CStrNode(std::string* parsedString);
	std::string& getText();
	void encode();
	
	int stringListIndex; ///<The position in the stringlist of the string represented by this node.
	std::string text;
};

class COpNode : public CSyntaxNode {
public:
	COpNode(TOpCode code, CSyntaxNode* operand);
	COpNode(TOpCode code);
	COpNode(TOpCode code, CSyntaxNode* operand1, CSyntaxNode* operand2);
	void encode();

	TOpCode opCode;
	
};

class CJointNode : public CSyntaxNode {
public:
	CJointNode(CSyntaxNode* branch1, CSyntaxNode* branch2);
	void encode();

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
};

class CEventNode : public CSyntaxNode {
public:
	CEventNode(CSyntaxNode* identNode, CSyntaxNode* codeBlock);
	void encode();
	
	std::string eventText;
	int eventId;
	std::vector<CSyntaxNode*> optionList;
	//CSyntaxNode* code;
};


class CGlobalVarAssignNode : public CSyntaxNode {
public:
	CGlobalVarAssignNode(std::string* parsedString);
	void encode();

	int varId;
	std::string name;
};

class CStrStatement : public CSyntaxNode {
public:
	CStrStatement(CSyntaxNode* stringExpr);
	void encode();

	CSyntaxNode* mStringExpr;
};

class CIntNode : public CSyntaxNode {
public:
	CIntNode(int parsedInteger);
	void encode();

	int integer;
};

class CTimedEventNode : public CSyntaxNode {
public:
	CTimedEventNode(CSyntaxNode* event, int parsedInt);
	void encode();

	int eventId;
	int delay;
};

class CMemberDeclNode : public CSyntaxNode {
public:
	CMemberDeclNode(CSyntaxNode* identNode, CSyntaxNode* initialiser);
	int getId();
	void encode();

	std::string name;
	int memberId;
};

class CObjIdentNode : public CSyntaxNode {
public:
	CObjIdentNode(std::string* parsedString);
	int getId();
	std::string& getText();

	std::string name;
	int objectId;
};

class CObjDeclNode : public CSyntaxNode {
public:
	CObjDeclNode(CSyntaxNode* identifier, CSyntaxNode* memberList);
	void encode();

	CSyntaxNode* identNode;
	CSyntaxNode* members;
};

class CReferenceNode : public CSyntaxNode {
public:
	CReferenceNode(CSyntaxNode* parent, std::string* parsedString);
	void encode();

	int memberId;

};

class CObjRefNode : public CSyntaxNode {
public:
	CObjRefNode(std::string* parsedString);
	void encode();

	int refId;
	TIdentType identType;
};

class CMemberNode : public CSyntaxNode {
public:
	CMemberNode(CSyntaxNode* parent, std::string* parsedString);
	void encode();

	int memberId;
};


class CIdentExprNode : public CSyntaxNode {
public:
	CIdentExprNode(std::string* parsedString);
	void encode();

	int varId;
	std::string name; ///TO DO: can probably do without
	TIdentType identType;
};


class CInitNode : public CSyntaxNode {
public:
	CInitNode(std::string* parsedString);
	CInitNode(int parsedInt);
	void encode();

	TigVarType type;
	std::string text;
	int integer;
};

class CMemberIdentNode : public CSyntaxNode {
public:
	CMemberIdentNode(std::string* parsedString);
	std::string& getText();

	std::string name;
};
