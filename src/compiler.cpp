
#include "compiler.h"
#include "lineRec.h"

#include <cstdio>
#include <fstream>

#include <iostream>

#include <algorithm>

using namespace std;

extern FILE* yyin;
extern  int yyparse();

extern int yydebug ;

extern CTigCompiler* tigC;
extern vector<string> filenames;

extern string homeDir;

extern std::vector<TLineRec> lineRecs;

CTigCompiler::CTigCompiler() {
	CSyntaxNode::nameBase = &nameBase;
	CSyntaxNode::compiler = this;
}


/** Compile the given Tig file. */
void CTigCompiler::compile(std::string filename) {
	yyin = NULL;
	yyin = fopen(filename.c_str(), "rt"); //attemp to open the given file
	if (yyin == NULL) {
		std::cout << "\nFile not found";
		return;
	}
	outputFileName = "output.tig";
	filenames.push_back(filename);
	TLineRec file1;
	lineRecs.push_back({ 1,0 }); //so source line tracking starts on line 1, source file 0
	homeDir = filename.substr(0, filename.find_last_of('\\') + 1);


	tigC = this;

	yyparse();

	cout << "\n" << outputFileName << " compiled successfully!";

	fclose(yyin);

	if (homeDir.size() > 0)
		std::getchar();
}


/** Convert the given syntax tree into bytecode, and write it to a file. */
void CTigCompiler::encode(CSyntaxNode * node) {
	objects[""] = CObject();
	tron = false;// true;
	node->fnByteCode.open("fnCode.tmp", ios::binary | ios::out );
	node->globalByteCode.open("globalCode.tmp", ios::binary | ios::out );
	
	//node->setOutputFile(node->globalByteCode); cerr << "\n[Global]";
	node->codeDestination = destNone;
	node->setCodeDestination(globalDest);
	//outputFile = node->outputFile; //TO DO: bring setCodeDestinaton into compiler to avoid this
	node->encode();

	if (!globalMemberChecksResolve(node))
		exit(1);

	if (!flagNameChecksResolve(node))
		exit(1);

	if (!objNameChecksResolve(node))
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

	tron = false;
	//add events table
	setOutputFile(fullCode); if (tron) cout << "\n\n[Tables]\n";
	

	node->writeEventTable();
	
	node->mergeInheritedFlags();

	node->writeObjectDefTable();
	writeObjectNameTable();
	writeConstNameTable();
	node->writeMemberNameTable();
	node->writeFlagNameTable();
	//node->writeGlobalFuncTable();
	fullCode.close();

	//write header
	ofstream main(outputFileName, ios::ate | ios::binary | ios::out);
	setOutputFile(main); if (tron) cout << "\n\n[Header]\n";
	node->writeHeader();
	main.close();

	//stitch together
	main.open(outputFileName, ios::binary | ios::out | ios::app);
	ifstream tempFile("fnCode.tmp", ios::binary | ios::in);

	main << tempFile.rdbuf();
	main.close();



	tempFile.close();
//	node->killNodes();

	for (auto killNode : nodeList)
		 delete killNode;

	remove("fnCode.tmp");
	remove("globalCode.tmp");

}

bool CTigCompiler::globalMemberChecksResolve(CSyntaxNode * node) {
	bool resolve = true;
	for (auto check : node->globalMembersToCheck) {
		bool found = false;
		//if (check.objId != 0)
			for (auto obj : objects) { //1. check if this member was ever defined in an object
				for (auto objMember : obj.second.members) {
					if (objMember.memberId == check.memberId && 
						(obj.second.objectId == check.objId || obj.second.objectId == 0) ) {
						found = true;
						break;
					}
				}
				if (found)
					break;
			}
		for (auto globalVar : node->globalVarIds) {
			if (globalVar == check.memberId) {
				found = true;
				break;
			}
		}
		
		if (!found) {
			resolve = false;
			cerr << "\nError! Identifier \"" << node->getMemberName(check.memberId) << "\" used in file "
				<< filenames[check.fileNum] <<  " at line " << check.lineNum << " but never defined.";
		}
	}
	return resolve;
}

/** Return false if there are still flag names that were used but never declared. */
bool CTigCompiler::flagNameChecksResolve(CSyntaxNode * node) {
	if (node->flagNamesToCheck.size() == 0)
		return true;
	for (auto failName : node->flagNamesToCheck) {
		cerr << "\nError! Flag \"" << failName.name << "\"  used in file " <<
			filenames[failName.fileNum] << " at line " << failName.lineNum <<
			" but never declared.";
	}
	return false;
}

/** Return false if there are still object names that were used but never declared. */
bool CTigCompiler::objNameChecksResolve(CSyntaxNode * node) {
	if (node->objNamesToCheck.size() == 0)
		return true;
	for (auto failName : node->objNamesToCheck) {
		cerr << "\nError! Object \"" << failName.name << "\"  used in file " <<
			filenames[failName.fileNum] << " at line " << failName.lineNum <<
			" but never declared.";
	}
	return false;
}

void CTigCompiler::setOutputFile(std::ofstream& file) {
	outputFile = &file;
	CSyntaxNode::outputFile = &file;
}

void CTigCompiler::writeString(const std::string& text) {
	writeWord(text.size());
	*outputFile << text.c_str();
	if (tron) {
		std::string trim = text;
		trim.erase(trim.begin(), find_if_not(trim.begin(), trim.end(), [](int c) {return isspace(c); }));
		cout << " " << trim.substr(0, 20);
	}
}

void CTigCompiler::writeCString(const std::string& text) {
	*outputFile << text.c_str() << '\0';
}

void CTigCompiler::writeWord(unsigned int word) {
	outputFile->write((char*)&word, 4);
	if (tron)
		cout << " " << word;
}

void CTigCompiler::writeObjectNameTable() {
	writeWord(objects.size());
	for (auto object : objects) {
		writeCString(object.first);
		writeWord(object.second.objectId);
	}
}

void CTigCompiler::writeConstNameTable() {
	writeWord(nameBase.constRecs.size());

	sort(nameBase.constRecs.begin(), nameBase.constRecs.end(),
		[&](CNameRec& const1, CNameRec& const2) {return const1.identifier < const2.identifier; });


	for (auto constRec : nameBase.constRecs) {
		writeCString(constRec.identifier);
		writeWord(constRec.intValue);
	}
}



CTigCompiler::~CTigCompiler() {
	remove("fnCode.tmp");
	remove("globalCode.tmp");

}
