#pragma once

#include <vector>
#include <string>

#include "syntaxNode.h"
#include "nameBase.h"

/** The CTigCompiler class wraps the entire parser into self-contained object
	for parsing and compiling Tig programs. */



class CTigCompiler {
public:
	CTigCompiler();
	~CTigCompiler();
	void compile(std::string filename);
	//COpNode* opNode(TOpCode opCode, CSyntaxNode* operand);
	void encode(CSyntaxNode* node);
	bool globalMemberChecksResolve(CSyntaxNode* node);
	bool flagNameChecksResolve(CSyntaxNode * node);
	bool objNameChecksResolve(CSyntaxNode * node);

	std::string outputFile;

	CNamebase nameBase; ///<Database of all identifiers.
};