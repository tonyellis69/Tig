#pragma once

struct TSrcLoc {
	int srcFile;
	int srcLine;
};

/** Interface class for using namebase. */
class INameBase {
public:
	virtual void storeConst(const std::string& ident, int value, TSrcLoc srcLoc) = 0;
	virtual void storeLocalVar(const std::string& ident, TSrcLoc sourceLoc) = 0;
	virtual void storeMember(const std::string& ident, int memberId, TSrcLoc sourceLoc) = 0;
	virtual void storeExport(const std::string& ident) = 0;

	virtual bool isConst(const std::string& ident) = 0;
	virtual bool isLocalVar(const std::string& ident) = 0;
	virtual bool isMember(const std::string& ident) = 0;
	virtual int getConstValue(const std::string& ident) = 0;
	virtual TSrcLoc getSrcLocationConst(const std::string& ident) = 0;
	virtual TSrcLoc getSrcLocationLocalVar(const std::string& ident) = 0;

};