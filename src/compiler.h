#pragma once

#include <vector>
#include <string>

#include "syntaxNode.h"

/** The CTigCompiler class wraps the entire parser into self-contained object
	for parsing and compiling Tig programs. */



class CTigCompiler {
public:
	CTigCompiler();
	~CTigCompiler();
	void compile(std::string filename);
	CStrNode* stringNode(std::string* parsedString);
	char* getString(int index);
	COpNode* opNode(TOpCode opCode, CSyntaxNode* operand);
	CBranchNode* branchNode(CSyntaxNode* branch1, CSyntaxNode* branch2);

	void encode(CSyntaxNode* node);

	std::vector<std::string> stringList; ///<Preserves all the literal strings parsed from the source file.
};