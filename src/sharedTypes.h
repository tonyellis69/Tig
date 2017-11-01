#pragma once

enum TOpCode { opNop, opPrint, opGiveOptions, opOption, opJumpEvent, opEnd, opAssign, opPushStr, opPushInt, 
	opPushVar, opGetString, opAdd,  opStartTimer, opTimedEvent,
	opExpressVar, opPushObj
};

static char* opCode[] = { "opNop\0",
	"opPrint\0",
	"opGiveOptions\0",
	"opOption\0",
	"opJumpEvent\0",
	"opEnd\0", 
	"opAssign\0", 
	"opPushStr\0",
	"opPushInt\0", 
	"opPushVar\0",
	"opGetString\0",
	"opAdd\0",
	"opStartTimer\0",
	"opTimedEvent\0",
	"opExpressVar\0",
	"opPushObj\0"};

const int memberIdStart = 1000;

enum TigVarType { tigUndefined, tigString, tigInt, tigFloat, tigObj };
