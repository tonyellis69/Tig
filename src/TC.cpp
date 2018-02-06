
#include <string>

//#include <Windows.h>

//#include "vld.h" //visual leak detector

/*
#if defined(_DEBUG)
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW 
#endif
*/

#include "compiler.h"




int main(int argc, char* argv[]) {
	//_CrtSetDbgFlag( );
	CTigCompiler* tig = new CTigCompiler();

	std::string homeDir(argv[0]);
	homeDir = homeDir.substr(0, homeDir.find_last_of('\\')+1);

#ifdef _DEBUG
	//homeDir += "..\\";
#endif

	tig->compile(homeDir + "test.txt");

	std::getchar();

	delete tig;
	//_CrtSetBreakAlloc(120); // set breakpoint on a specific allocation number
//	_CrtDumpMemoryLeaks();
}