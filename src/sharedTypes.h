#pragma once

enum TOpCode { opNop, opPrint, opGiveOptions, opOption, opJumpEvent, opEnd,
	opAssign,  opPushStr, opPushInt, 
	opPushVar, opGetString, opAdd, opSub, opStartTimer, opTimedEvent,
	opExpressVar, opPushObj, opCall, opCallFn, opReturn, opReturnTrue, opHot, opInitArray,
	opPushElem, opAssignElem, opPop, opEq, opLT, opLE, opGT, opGE,
	opJumpFalse, opJump, opChild, opSibling, opGetVar, opChildren, opMakeHot
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
	"opSub\0",
	"opStartTimer\0",
	"opTimedEvent\0",
	"opExpressVar\0",
	"opPushObj\0",
	"opCall\0",
	"opCallFn\0",
	"opReturn\0",
	"opReturnTrue\0",
	"opHot\0",
	"opInitArray\0",
	"opPushElem\0",
	"opAssignElem\0",
	"opPop\0",
	"opEq\0",
	"opLT\0",
	"opLE\0",
	"opGT\0",
	"opGE\0",
	"opJumpFalse\0",
	"opJump\0",
	"opChild\0",
	"opSibling\0",
	"opGetVar\0",
	"opChildren\0",
	"opMakeHot\0"

};

const int memberIdStart = 1000;
const int globalVarStart = 100;
const int selfObjId = 0; ///<The object id that stands for 'this current object.'

enum TigVarType { tigUndefined, tigString, tigInt, tigFloat, tigObj, tigFunc, tigArray };
