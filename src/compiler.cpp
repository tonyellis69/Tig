
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
	//open an output file
	ofstream byteCode("tempFile.tig", ios::binary | ios::out);
	node->setOutputFile(byteCode);

	node->encode();
	cout << "\nend of encoding run";

	//add events table
	node->writeEventTable();
	byteCode.close();

	//write header
	ofstream header("output.tig", ios::ate | ios::binary | ios::out);
	node->setOutputFile(header);
	node->writeHeader();
	header.close();

	//stitch together
	ofstream final("output.tig", ios::binary | ios::out | ios::app);
	ifstream tempFile("tempFile.tig", ios::binary | ios::in);

	final << tempFile.rdbuf();
	final.close();
	tempFile.close();
	remove("tempFile.tig");
}




CTigCompiler::~CTigCompiler() {
	

}
