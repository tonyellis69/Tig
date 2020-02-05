#include "nameBase.h"

#include <iostream>

void CNamebase::storeConst(const std::string& ident, int value, TSrcLoc srcLoc) {
	CNameRec nameRec;
	nameRec.identifier = ident;
	nameRec.identType = identConst;
	nameRec.intValue = value;
	constRecs.push_back(nameRec);
}

void CNamebase::storeLocalVar(const std::string& ident, TSrcLoc sourceLoc) {
	if (isLocalVar(ident))
		return;

	CNameRec nameRec;
	nameRec.identifier = ident;
	nameRec.identType = identLocalVar;
	nameRec.srcLoc = sourceLoc;
	localVarRecs.push_back(nameRec);
}

/** Store the first declaration of this member name. */
void CNamebase::storeMember(const std::string& ident, int memberId, TSrcLoc sourceLoc) {
	if (isMember(ident))
		return;

	CNameRec nameRec;
	nameRec.identifier = ident;
	nameRec.identType = identMember;
	nameRec.intValue = memberId;
	nameRec.srcLoc = sourceLoc;
	memberRecs.push_back(nameRec);

}

bool CNamebase::isConst(const std::string& ident) {
	return isFound(ident, identConst);
}

bool CNamebase::isLocalVar(const std::string& ident) {
	return isFound(ident, identLocalVar);
}

bool CNamebase::isMember(const std::string& ident) {
	return isFound(ident, identMember);
}

int CNamebase::getConstValue(const std::string& ident) {
	for (auto nameRec : constRecs) {
		if (nameRec.identifier == ident && nameRec.identType == identConst)
			return nameRec.intValue;
	}
	std::cerr << "\nError! Value for const " << ident << " not found.";
	exit(1);
}

TSrcLoc CNamebase::getSrcLocationConst(const std::string& ident) {
	for (auto constRec : constRecs) {
		if (constRec.identifier == ident)
			return constRec.srcLoc;
	}
}

TSrcLoc CNamebase::getSrcLocationLocalVar(const std::string& ident){
	for (auto localVarRec : localVarRecs) {
		if (localVarRec.identifier == ident)
			return localVarRec.srcLoc;
	}
}






//private functions

bool CNamebase::isFound(const std::string& ident, TIdentifierType identType) {
	if (identType == identConst) {
		for (auto constRec : constRecs) {
			if (constRec.identifier == ident)
				return true;
		}
	}
	else if (identType == identLocalVar) {
		for (auto localVarRec : localVarRecs) {
			if (localVarRec.identifier == ident)
				return true;
		}

	} else if (identType == identMember) {
		for (auto memberRec : memberRecs) {
			if (memberRec.identifier == ident)
				return true;
		}

	}



	return false;
}






CNameRec::CNameRec() {
	
}
