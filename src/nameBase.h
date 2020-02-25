#pragma once

#include <string>
#include <vector>

#include "inameBase.h"

/** A database class for storing all identifier names,
	their types, and where they were found. Also provides
	checks for clashes. */
enum TIdentifierType { identNone, identConst, identLocalVar, identMember };
class CNameRec;
class CNamebase : public INameBase {
public:
	void storeConst(const std::string& ident, int value, TSrcLoc srcLoc);
	void storeLocalVar(const std::string& ident, TSrcLoc srcLoc);
	void storeMember(const std::string& ident, int memberId, TSrcLoc sourceLoc);
	void storeExport(const std::string& ident);

	bool isConst(const std::string& ident);
	bool isLocalVar(const std::string& ident);
	bool isMember(const std::string& ident);

	int getConstValue(const std::string& ident);

	TSrcLoc getSrcLocationConst(const std::string& ident);
	TSrcLoc getSrcLocationLocalVar(const std::string& ident);

	std::vector<CNameRec> constRecs;
	std::vector<CNameRec> localVarRecs;
	std::vector<CNameRec> memberRecs;
	std::vector<std::string> exportNames;

private:
	bool isFound(const std::string& ident, TIdentifierType identType);



};


/** Record used by CNameBase for internal storage. */
class CNameRec {
public:
	CNameRec();
	std::string identifier;
	TIdentifierType identType = identNone;
	int intValue = -1;
	TSrcLoc srcLoc = { -1 };
};