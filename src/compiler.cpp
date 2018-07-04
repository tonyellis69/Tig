
#include "compiler.h"

#include <cstdio>
#include <fstream>

#include <iostream>
using namespace std;

extern FILE* yyin;
extern  int yyparse();

extern int yydebug ;

extern CTigCompiler* tigC;


CTigCompiler::CTigCompiler() {
	
}


/** Compile the given Tig file. */
void CTigCompiler::compile(std::string filename) {
	yyin = NULL;
	yyin = fopen(filename.c_str(), "rt"); //attemp to open the given file
	if (yyin == NULL) {
		std::cout << "\nFile not found";
		return;
	}
	

	tigC = this;
	//yydebug = 1;
	yyparse();
	fclose(yyin);
}




/** Create an operator node for the given op code and return a pointer to it. */
COpNode * CTigCompiler::opNode(TOpCode opCode, CSyntaxNode* operand) {
	return new COpNode(opCode, operand);
}

/** Convert the given syntax tree into bytecode, and write it to a file. */
void CTigCompiler::encode(CSyntaxNode * node) {
	node->fnByteCode.open("fnCode.tmp", ios::binary | ios::out );
	node->globalByteCode.open("globalCode.tmp", ios::binary | ios::out );
	
	node->setOutputFile(node->globalByteCode);
	node->encode();
	cout << "\nend of encoding run";

	node->fnByteCode.close();
	node->globalByteCode.close();

	ofstream fullCode("fnCode.tmp", ios::ate | ios::binary | ios::out | ios::app);
	node->globalCodeAddr = fullCode.tellp();
	//node->globalCodeAddr++;

	//append global code to function code
	int tmp = fullCode.tellp();
	ifstream globalCode("globalCode.tmp",  ios::binary | ios::in);
	int tmp2 = globalCode.tellg();
	fullCode << globalCode.rdbuf();
	tmp = fullCode.tellp();
	globalCode.close();

	fullCode.close();
	fullCode.open("fnCode.tmp", ios::ate | ios::binary | ios::out | ios::app);

	//fullCode.seekp(0, ios::end);
	tmp = fullCode.tellp();

	//add events table
	node->setOutputFile(fullCode);
	node->writeEventTable();
	node->writeGlobalVarTable();
	node->writeObjectDefTable();
	node->writeMemberNameTable();
	node->writeGlobalFuncTable();
	fullCode.close();

	//write header
	ofstream header("output.tig", ios::ate | ios::binary | ios::out);
	node->setOutputFile(header);
	node->writeHeader();
	header.close();

	//stitch together
	ofstream final("output.tig", ios::binary | ios::out | ios::app);
	ifstream tempFile("fnCode.tmp", ios::binary | ios::in);

	final << tempFile.rdbuf();
	final.close();
	tempFile.close();
	node->killNodes();
	remove("fnCode.tmp");
	remove("globalCode.tmp");
}




CTigCompiler::~CTigCompiler() {
	

}
