#pragma once

#include <vector>
#include <string>

#include "syntaxNode.h"
#include "nameBase.h"
#include  "ICompiler.h"

/** The CTigCompiler class wraps the entire parser into self-contained object
	for parsing and compiling Tig programs. */



class CTigCompiler : public ICompiler {
public:
	CTigCompiler();
	~CTigCompiler();
	void compile(std::string filename);
	//COpNode* opNode(TOpCode opCode, CSyntaxNode* operand);
	void encode(CSyntaxNode* node);
	bool globalMemberChecksResolve(CSyntaxNode* node);
	bool flagNameChecksResolve(CSyntaxNode * node);
	bool objNameChecksResolve(CSyntaxNode * node);

	void setOutputFile(std::ofstream& file);
	void writeString(const std::string& text);
	void writeCString(const std::string& text);
	void writeWord(unsigned int word);

	void writeObjectNameTable();

	std::string outputFileName;

	CNamebase nameBase; ///<Database of all identifiers.

	std::ofstream* outputFile;
	
};