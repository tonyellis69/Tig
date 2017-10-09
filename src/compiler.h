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
	COpNode* opNode(TOpCode opCode, CSyntaxNode* operand);


	void encode(CSyntaxNode* node);


};