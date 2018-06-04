#pragma once

#pragma warning (push)
#pragma warning (disable : 4005)
#include <string>
#pragma warning (pop)

#include <vector>
#include <fstream>
#include <map>


#include "sharedTypes.h"
#include "..\..\VMtest\src\var.h"

extern int lineNo;

class CSyntaxNode;
struct TMemberRec {
	int memberId;
	CTigVar value;
	std::vector<CTigVar> arrayInitList;
};

class CObject {
public:
	CObject() : objectId(-1), classId(-1) {};
	int objectId;
	int classId;
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
	int getLocalVarId(std::string & identifier);
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
	void writeMemberNameTable();
	void writeHeader();

	void killNodes();

	CObject* getObject(int id);
	TMemberRec* getObjectMember(CObject& obj, std::string membName);

	static void funcMode(bool onOff);

	std::vector<CSyntaxNode*> operands;

	static std::ofstream fnByteCode;
	static std::ofstream globalByteCode;
	static std::ofstream* outputFile;

	static std::map<std::string, int> eventIds;
	static int nextEventId;
	static std::map<std::string, int> globalVarIds;
	static int nextGlobalVarId;
	static std::vector<std::string> localVarIds; ///<Local variable names.
	static std::map<std::string, int> memberIds; ///<Object member names and their ids.
	static int nextMemberId;
	static std::map<std::string, CObject> objects; ///<Objects names and their details.
	static int nextObjectId;

	static std::map<int, int> eventTable; ///<Tables event IDs and addresses.
	static std::vector<COptionNode*> optionStack; ///<A handy, temporary container of nodes.

	static int eventTableAddr; ///<Where the event table starts
	static int globalVarTableAddr; ///<Where the global variable table starts

	static std::vector<TMemberRec> memberStack2; ///<Temporary tracker of all the members of an object.
	static std::vector<CTigVar> arrayStack; ///<Temporary tracker of values used to initialise an array.

	static std::vector<CSyntaxNode*> nodeList;

	static int globalCodeAddr; ///<Where the global code starts, if any.

	static std::map<int,int> parentList; //ids of current parent objects at each tree level
	static int childLevel;

	static bool global; ///<True if we're encoding global code, false inside function definitions.

	static char lastOp; ///<Most recent op code written;
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


class CVarAssigneeNode : public CSyntaxNode {
public:
	CVarAssigneeNode(std::string* parsedString);
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
	CMemberDeclNode(CSyntaxNode* identifier, CSyntaxNode* initialiser);
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
	CObjDeclNode(CSyntaxNode* identifier, CSyntaxNode* memberList, CSyntaxNode * classObject);
	void encode();

	CSyntaxNode* identNode;
	CSyntaxNode* members;
	CSyntaxNode* classObj;
	int parentId;
};

class CObjMemberAssigneeNode : public CSyntaxNode {
public:
	CObjMemberAssigneeNode(CSyntaxNode* parent, std::string* parsedString);
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

class CMemberExprNode : public CSyntaxNode {
public:
	CMemberExprNode(CSyntaxNode* parent, std::string* parsedString);
	void encode();

	int memberId;
};

class CVarExprNode : public CSyntaxNode {
public:
	CVarExprNode(std::string* parsedString);
	void encode();

	int varId;
	std::string name; ///TO DO: can probably do without
	TIdentType identType;
};


class CArrayInitListNode;
class CInitNode : public CSyntaxNode {
public:
	CInitNode(std::string* parsedString);
	CInitNode(int parsedInt);
	CInitNode(CSyntaxNode* codeBlock);
	CInitNode(CObjIdentNode* objIdent);
	CInitNode(CArrayInitListNode * arrayInitList);
	CInitNode();
	void encode();

	CTigVar value;
};


class ClassIdentNode : public CSyntaxNode {
public:
	ClassIdentNode(std::string * parsedString);
	int getId();


	int classId;
	TIdentType identType;
};

class CodeBlockNode : public CSyntaxNode {
public:
	CodeBlockNode(CSyntaxNode* codeBlock);
	void encode();
};

class CHotTextNode : public CSyntaxNode {
public:
	CHotTextNode(std::string * hotText, std::string* action);
	void encode();

	std::string text;
	int memberId;
};

class CArrayInitConstNode : public CInitNode {
public:
	using CInitNode::CInitNode;
	void encode();
};

class CArrayInitNode : public CSyntaxNode {
public:
	CArrayInitNode(CSyntaxNode* initList);
	void encode();
};

class CArrayInitListNode : public CSyntaxNode {
public:
	CArrayInitListNode(CSyntaxNode* initList);
	void encode();
};

class CArrayElementExprNode : public CSyntaxNode {
public:
	CArrayElementExprNode(CSyntaxNode* array, CSyntaxNode* index);
	void encode();
};

class CArrayAssignNode : public CSyntaxNode {
public:
	CArrayAssignNode(CSyntaxNode* array, CSyntaxNode* index);
	void encode();
};

class CMembDeclIdentNode : public CSyntaxNode {
public:
	CMembDeclIdentNode(std::string* ident);
	std::string& getText();

	std::string text;
};


class CFunctionDefNode : public CSyntaxNode {
public:
	CFunctionDefNode(CSyntaxNode* codeBlock);
	void encode();
};

class CReturnNode : public CSyntaxNode {
public:
	CReturnNode(CSyntaxNode* returnVal);
	void encode();
};

class CallDiscardNode : public CSyntaxNode {
public:
	CallDiscardNode(CSyntaxNode* funcCode);
	void encode();
};

class CIfNode : public CSyntaxNode {
public:
	CIfNode(CSyntaxNode* expr, CSyntaxNode* code, CSyntaxNode* elseCode);
	void encode();
};
