#pragma once

#include <map>
#include <string>
#include <vector>

#include "..\..\VMtest\src\var.h"

/** An interface class for using the compiler. */
class CObject;
class ICompiler {
public:
	virtual void writeWord(unsigned int word) = 0;
	virtual void writeString(const std::string& text) = 0;
	virtual void writeCString(const std::string& text) = 0;

	virtual void setOutputFile(std::ofstream& file) = 0;

	std::map<std::string, CObject> objects; ///<Objects names and their details.
	bool tron;
};


struct TMemberRec {
	int memberId;
	CTigVar value;
	std::vector<CTigVar> arrayInitList;
	std::vector<std::string> unrecogniseArrayInitIds;
};

struct TMemberCheck {
	int lineNum;
	int fileNum;
	int memberId;
	int objId;
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