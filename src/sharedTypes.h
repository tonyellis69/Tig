#pragma once

enum TOpCode { opNop, opPrint, opOption, opEnd, opAssign, opPushStr, opPushInt, opPushVar, opGetString };

static char* opCode[] = { "opNop\0",
	"opPrint\0", 
	"opOption\0",
	"opEnd\0", 
	"opAssign\0", 
	"opPushStr\0",
	"opPushInt\0", 
	"opPushVar\0",
	"opGetString\0" };
