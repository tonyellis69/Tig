
#include "compiler.h"

#include <cstdio>
#include <fstream>

#include <iostream>
using namespace std;

extern FILE* yyin;
extern  int yyparse();

extern CTigCompiler* tigC;


CTigCompiler::CTigCompiler() {
	CSyntaxNode::setStringList(&stringList);
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

	yyparse();
	fclose(yyin);
}

/** Create a string node for the given string and return a pointer to it. */
CStrNode * CTigCompiler::stringNode(std::string * parsedString) {
	int stringListIndex = stringList.size();
	stringList.push_back(*parsedString);
	return new CStrNode(stringListIndex);
}

/** Return the stringlist entry for the given index as C string. */
char * CTigCompiler::getString(int index) {
	return (char*)stringList[index].c_str();
}

/** Create an operator node for the given op code and return a pointer to it. */
COpNode * CTigCompiler::opNode(TOpCode opCode, CSyntaxNode* operand) {
	return new COpNode(opCode, operand);
}

CBranchNode * CTigCompiler::branchNode(CSyntaxNode * branch1, CSyntaxNode * branch2) {
	return new CBranchNode(branch1, branch2);
}

/** Convert the given syntax tree into bytecode, and write it to a file. */
void CTigCompiler::encode(CSyntaxNode * node) {
	//open an output file
	ofstream byteCode("output.tig", ofstream::binary);
	node->setOutputFile(byteCode);

	node->encode();
	cout << "\nend of encoding run";
	byteCode.close();
}




CTigCompiler::~CTigCompiler() {
	for (auto i : stringList) {
		i.clear();
	}

}
