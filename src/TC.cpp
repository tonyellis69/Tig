
#include <string>

#include <Windows.h>

#if defined(_DEBUG)
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW 
#endif


#include "compiler.h"

std::string getHomeDirectory() {
	wchar_t path[512];
	GetModuleFileName(NULL, path, 512);
	std::wstring convert(path);
	std::string homeDir(convert.begin(), convert.end());
	int n = homeDir.find_last_of('\\');
	homeDir = homeDir.substr(0, n + 1);
	return homeDir;
}


int main(void) {
	//_CrtSetDbgFlag( );
	CTigCompiler* tig = new CTigCompiler();

	std::string homeDir = getHomeDirectory();
#ifdef _DEBUG
	//homeDir += "..\\";
#endif

	tig->compile(homeDir + "test.txt");

	std::getchar();

	delete tig;
	//_CrtSetBreakAlloc(120); // set breakpoint on a specific allocation number
	_CrtDumpMemoryLeaks();
}