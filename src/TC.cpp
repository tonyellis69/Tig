
#include <string>


//#include "vld.h" //visual leak detector

#include "compiler.h"




int main(int argc, char* argv[]) {

	//CTigCompiler* tig = new CTigCompiler();
	CTigCompiler tig;

	std::string homeDir(argv[0]);
	homeDir = homeDir.substr(0, homeDir.find_last_of('\\')+1);

#ifdef _DEBUG
	//homeDir += "..\\";
#endif

	tig.compile(homeDir + "test.txt");

	//std::getchar();

//	delete tig;

}