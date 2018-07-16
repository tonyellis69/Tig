
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
	outputFile = "output.tig";

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
	node->objects[""] = CObject();
	node->tron = false;// true;
	node->fnByteCode.open("fnCode.tmp", ios::binary | ios::out );
	node->globalByteCode.open("globalCode.tmp", ios::binary | ios::out );
	
	//node->setOutputFile(node->globalByteCode); cerr << "\n[Global]";
	node->codeDestination = destNone;
	node->setCodeDestination(globalDest);
	node->encode();

	if (!globalMemberChecksResolve(node))
		exit(1);

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

	node->tron = false;
	//add events table
	node->setOutputFile(fullCode); if (node->tron) cout << "\n\n[Tables]\n";
	node->writeEventTable();
	//node->writeGlobalVarTable();
	node->writeObjectDefTable();
	node->writeMemberNameTable();
	//node->writeGlobalFuncTable();
	fullCode.close();

	//write header
	ofstream main(outputFile, ios::ate | ios::binary | ios::out);
	node->setOutputFile(main); if (node->tron) cout << "\n\n[Header]\n";
	node->writeHeader();
	main.close();

	//stitch together
	main.open(outputFile, ios::binary | ios::out | ios::app);
	ifstream tempFile("fnCode.tmp", ios::binary | ios::in);

	main << tempFile.rdbuf();
	main.close();

	cout  << "\n" << outputFile << " compiled successfully!";

	tempFile.close();
	node->killNodes();
	remove("fnCode.tmp");
	remove("globalCode.tmp");

}

bool CTigCompiler::globalMemberChecksResolve(CSyntaxNode * node) {
	bool resolve = true;
	for (auto check : node->globalMembersToCheck) {
		bool found = false;
		for (auto obj : node->objects) { //1. check if this member was ever defined in an object
			for (auto objMember : obj.second.members) {
				if (objMember.memberId == check.memberId) {
					found = true;
					break;
				}
			}
			if (found)
				break;
		}
		
		if (!found) {
			resolve = false;
			cerr << "\nError!!!! Identifier \"" << node->getMemberName(check.memberId) << "\" used at line "
				<< check.lineNum << " but never defined.";
		}
	}
	return resolve;
}



CTigCompiler::~CTigCompiler() {
	

}
