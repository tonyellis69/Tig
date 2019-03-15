#pragma once

#pragma warning (push)
#pragma warning (disable : 4005)
#include <string>
#pragma warning (pop)

#include <vector>
#include <fstream>
#include <map>
#include <set>
#include <unordered_set>

#include "lineRec.h"
#include "sharedTypes.h"
#include "..\..\VMtest\src\var.h"

#include "nodeLib.h"

class CSyntaxNode;




extern std::vector<TLineRec> lineRecs;

const int variableExpression = 2001;

class CSyntaxNode;
struct TMemberRec {
	int memberId;
	CTigVar value;
	std::vector<CTigVar> arrayInitList;
};

struct TMemberCheck {
	int lineNum;
	int fileNum;
	int memberId;
};

struct TNameCheck {
	int lineNum;
	int fileNum;
	std::string name;

};



class CObject {
public:
	CObject() : objectId(0), flags(0) {};
	int objectId;
	std::vector<int> classIds;
	std::vector<TMemberRec> members;
	std::vector<TMemberCheck> localMembersToCheck;
	int flags; //storing to help with inheritence
};

struct TGlobalFn {
	int id;
	int addr;
};

enum TCodeDest {funcDest, globalDest, destNone};

//namespace syn {
	extern std::vector<CSyntaxNode*> nodeList;

//}


/** Basic syntax node. */
class COptionNode;
class CMemberDeclNode;
class CSyntaxNode {
public:
	CSyntaxNode();
	virtual ~CSyntaxNode();
	virtual int getStrIndex() {  return NULL; } ;
	virtual void encode() {};
	virtual int getId() { return NULL; }
	virtual std::string& getText() { std::string nul;  return nul; };
	int getEventId(std::string& identifier); //TO DO still needed?
	int getVarId(std::string & identifier);
	int resolveIdentifier(std::string identifier);
	int getMemberId(std::string & identifier);
	int getObjectId(std::string & identifier);
	int getGlobalFuncId(std::string& identifier);
	static void setOutputFile(std::ofstream& file);
	void writeOp(char byte);
	void writeByte(char byte);
	void writeWord(unsigned int word);
	void writeString(const std::string& text);
	void writeCString(const std::string & text);
	void writeEventTable();
	void writeObjectDefTable();
	void writeMemberNameTable();
	void writeGlobalFuncTable();
	void writeHeader();

	void killNodes();

	CObject* getObject(int id);
	TMemberRec* getObjectMember(CObject& obj, std::string membName);

	static void funcMode(bool onOff);

	bool objectHasMember(int objId, int memberId);
	void logLocalMemberCheck(int objId, int memberId);
	void logGlobalMemberCheck(int lineNum, int fileNum, int memberId);
	void logFlagNameCheck(int lineNum, int fileNum, std::string flagName);
	void logObjDeclarationCheck(int lineNum, int fileNum, std::string objName);
	std::string getMemberName(int memberId);

	void setCodeDestination(TCodeDest dest);

	void mergeInheritedFlags();

	int getFlagBitmask(std::string flagName);

	std::vector<CSyntaxNode*> operands;

	int sourceLine; ///<source code line from which this node was spawned.
	int sourceFile; ///<filename index of source code from which this node was spawned.

	static std::ofstream fnByteCode;
	static std::ofstream globalByteCode;
	static std::ofstream* outputFile;

	static std::map<std::string, int> eventIds;
	static int nextEventId;

	static std::vector<std::string> localVarIds; ///<Local variable names.
	static std::map<std::string,int> localVarIdsPermanent; ///<Local variable names, permanent list.

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
	static std::vector<int> arrayInitCount; 

	static std::vector<CSyntaxNode*> nodeList;

	static int globalCodeAddr; ///<Where the global code starts, if any.

	static std::map<int,int> parentList; //ids of current parent objects at each tree level
	static int childLevel;

	static bool global; ///<True if we're encoding global code, false inside function definitions.

	static char lastOp; ///<Most recent op code written;

	static int currentObj; ///<Current object being defined, if any.

	static std::vector<int>* parentClassList;
	//static std::map<std::string, TGlobalFn> globalFuncIds; ///<Global function names and their ids.
	//static int nextGlobalFuncId;

	static std::vector<unsigned char> paramCount;
	static bool paramDeclarationMode;
	static std::vector<TMemberCheck> globalMembersToCheck;

	static TCodeDest codeDestination;
	static bool tron;

	static std::set<int> globalVarIds; ///<Set of member ids that reperesent global variables.

	static std::vector<int> continueAddr; ///<Address to use for loop continue statements;
	static std::vector<int> breakAddr; ///<Address to use for loop break statements;
	 
	static std::vector<std::string> flagNamesTmp; ///<Stores flag names as we meet them
	static std::vector<std::string> flagStack; ///<Permanent list of all flag names.
	static std::vector<TNameCheck> flagNamesToCheck; ///<Flag name expressions encountered with no current declaration.
	static std::vector<TNameCheck> objNamesToCheck; ///<object names encountered with no current declaration.

	static std::vector<int> newInitialisationMembers; ///<Temporary list of members in a new object initialisation list.
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
	COpNode(TOpCode code, CSyntaxNode* operand1, CSyntaxNode* operand2, CSyntaxNode* operand3);
	COpNode(TOpCode code, CSyntaxNode* operand1, CSyntaxNode* operand2, CSyntaxNode* operand3, CSyntaxNode* operand4);
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
	~CVarAssigneeNode();
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
	std::string name;
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
	int getId();
	std::string& getText();

	int varId;
	std::string name; 
	TIdentType identType;
	int id;
};


class CArrayInitListNode;
class CMemberIdNode;
class CInitNode : public CSyntaxNode {
public:
	CInitNode(std::string* parsedString);
	CInitNode(int parsedInt);
	CInitNode(CSyntaxNode* codeBlock);
	CInitNode(CMemberIdNode* membIdent);
	CInitNode(CObjIdentNode* objIdent);//
	CInitNode(CArrayInitListNode * arrayInitList);
	CInitNode();
	void encode();

	CTigVar value;
};


class ClassIdentNode : public CSyntaxNode {
public:
	ClassIdentNode(std::string * parsedString);
	int getId();
	void encode();

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
	CHotTextNode(CSyntaxNode* hotText, CSyntaxNode* object, CSyntaxNode* member, CSyntaxNode* params);
	void encode();

	std::string text;
	int memberId;
};

class CArrayInitConstNode : public CInitNode {
public:
	using CInitNode::CInitNode;
	void encode();
};

class CArrayDynInitNode : public CSyntaxNode {
public:
	CArrayDynInitNode(CSyntaxNode* initList);
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
	CFunctionDefNode(CSyntaxNode* params,CSyntaxNode* codeBlock);
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


class CMemberCallNode : public CSyntaxNode{
public:
	CMemberCallNode(CSyntaxNode* object, CSyntaxNode* funcName, CSyntaxNode* params);
	void encode();

	int memberId;
	//bool isFnCall;
};

class CMemberCallDerefNode : public CSyntaxNode {
public:
	CMemberCallDerefNode(CSyntaxNode* object, CSyntaxNode* ref, CSyntaxNode* params);
	void encode();

	
};

class CForEachNode : public CSyntaxNode {
public:
	CForEachNode(CSyntaxNode* variable, CSyntaxNode* containerObj, CSyntaxNode* code);
	void encode();

};

class CForEachElementNode : public CSyntaxNode {
public:
	CForEachElementNode(CSyntaxNode* variable, CSyntaxNode* containerObj, CSyntaxNode* code);
	void encode();

};


class CSelfExprNode : public CSyntaxNode {
public:
	CSelfExprNode() {};
	void encode();
};

class COpAssignNode : public CSyntaxNode {
public:
	COpAssignNode(TOpCode code, CSyntaxNode* assignee, CSyntaxNode* expr);
	void encode();

	TOpCode opCode;
};

class CGlobalFuncDeclNode : public CSyntaxNode {
public: 
	CGlobalFuncDeclNode(CSyntaxNode* ident, CSyntaxNode* params, CSyntaxNode* code);
	void encode();

	std::string name;
	int id;
};

class CParamDeclNode : public CSyntaxNode {
public:
	CParamDeclNode(std::string* ident);
	void encode();

	std::string name;
};

class CParamExprNode : public CSyntaxNode {
public:
	CParamExprNode(CSyntaxNode* param);
	void encode();
};
/*
class CGlobalFnIdentNode : public CSyntaxNode {
public:
	CGlobalFnIdentNode(std::string* ident);
	std::string& getText();

	std::string name;
	int id;
};
*/

class CFuncIdentNode : public CSyntaxNode {
public:
	CFuncIdentNode(std::string* ident, CSyntaxNode* deref);
	std::string& getText();
	void encode();

	std::string name;
	int id;
};

class CNothingNode : public CSyntaxNode {
public:
	void encode();

};

class CTronNode : public CSyntaxNode {
public:
	CTronNode(bool onOff) { mTron = onOff;}
	void encode() { tron = mTron;}

	bool mTron;
};

class CSuperCallNode : public CSyntaxNode {
public:
	CSuperCallNode(CSyntaxNode* super, CSyntaxNode* funcName, CSyntaxNode * params);
	void encode();

	int memberId;
};

class CMemberIdNode : public CSyntaxNode {
public:
	CMemberIdNode(std::string* membName);
	int getId();
	void encode();

	std::string name;
};

class CDerefMemberCallNode : public CSyntaxNode {
public:
	CDerefMemberCallNode(CSyntaxNode* pointer, CSyntaxNode* params);
	void encode();
};

class CDerefVarNode : public CSyntaxNode {
public:
	CDerefVarNode(CSyntaxNode* var);
	void encode();

};

class CVarIdNode : public CSyntaxNode {
public:
	CVarIdNode(std::string * ident);
	void encode();

	std::string name;
};

class CArrayDynInitElem : public CSyntaxNode {
public:
	CArrayDynInitElem(CSyntaxNode* element);
	void encode();
};

class CMsgNode : public CSyntaxNode {
public:
	CMsgNode(CSyntaxNode* params);
	void encode();
};

class CContinueNode :public CSyntaxNode {
public:
	void encode();
};

class CLoopBreakNode :public CSyntaxNode {
public:
	void encode();
};


class CMakeHotNode : public CSyntaxNode {
public:
	CMakeHotNode(CSyntaxNode* text, CSyntaxNode* fn, CSyntaxNode* obj,
		CSyntaxNode* params);
	void encode();
};


class CFlagDeclNode : public CSyntaxNode {
public:
	CFlagDeclNode();
	void encode();

	std::vector<std::string> flagNames;
};

class CFlagExprNode : public CSyntaxNode {
public:
	CFlagExprNode(std::string* flagName);
	void encode();
	std::string& getText() { return flagName; }

	std::string flagName;
};

class CSetFlagNode : public CSyntaxNode {
public:
	CSetFlagNode(CSyntaxNode* object, CSyntaxNode* flagExpr);
	void encode();
};

class CNewNode : public CSyntaxNode {
public:
	CNewNode(CSyntaxNode* className, CSyntaxNode* initialisation);

	void encode();

	int classId;
};

class CNewInitialiserListNode : public CSyntaxNode {
public:
	CNewInitialiserListNode(CSyntaxNode* initList);

	void encode();
};

class CNewInitialiserNode : public CSyntaxNode {
public:
	CNewInitialiserNode(std::string* memberName, CSyntaxNode* initCode);

	void encode();

	int memberId;
};

class CFinalLoopNode : public CSyntaxNode {
public:
	void encode();

};

class CRollNode : public CSyntaxNode {
public:
	CRollNode(int die);
	void encode();

	int sides;
};