#pragma once

enum TOpCode {
	opNop, opPrint, opGiveOptions, opOption, opJumpEvent, opEnd,
	opAssign, opPushStr, opPushInt,
	opPushVar, opGetString, opAdd, opSub, opMod, opMinus, opStartTimer, opTimedEvent,
	opExpressVar, opPushObj, opPushSelf, opCall, opCallDeref, opSuperCall, opReturn, opReturnTrue, opHot,
	opPurge, opInitArray,
	opPushElem, opAssignElem, opPop, opEq, opNE, opLT, opLE, opGT, opGE,
	opJumpFalse, opJump, opChild, opSibling, opIn, opNotIn, opGetVar, opChildren, opMakeHot, opBrk,
	opMove, opOpenWin, opWin, opClr, opStyle, opCap, opInherits, opHotClr, opArrayIt,
	opHotCheck, opNot, opAnd, opOr, opArrayPush, opMsg, opHas, opMatch
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
	"opMod\0",
	"opMinus\0",
	"opStartTimer\0",
	"opTimedEvent\0",
	"opExpressVar\0",
	"opPushObj\0",
	"opPushSelf\0",
	"opCall\0",
	"opCallDeref\0",
	"opSuperCall\0",
	"opReturn\0",
	"opReturnTrue\0",
	"opHot\0",
	"opPurge\0",
	"opInitArray\0",
	"opPushElem\0",
	"opAssignElem\0",
	"opPop\0",
	"opEq\0",
	"opNE\0",
	"opLT\0",
	"opLE\0",
	"opGT\0",
	"opGE\0",
	"opJumpFalse\0",
	"opJump\0",
	"opChild\0",
	"opSibling\0",
	"opIn\0",
	"opNotIn\0",
	"opGetVar\0",
	"opChildren\0",
	"opMakeHot\0",
	"opBrk\0",
	"opMove\0",
	"opOpenWin\0",
	"opWin\0",
	"opClr\0",
	"opStyle\0",
	"opCap\0",
	"opInherits\0",
	"opHotClr\0",
	"opArrayIt\0",
	"opHotCheck\0",
	"opNot\0",
	"opAnd\0",
	"opOr\0",
	"opArrayPush\0",
	"opMsg\0",
	"opHas\0",
	"opMatch\0"

};

const int memberIdStart = 1000;
const int globalVarStart = 100;
const int selfObjId = 0; ///<The object id that stands for 'this current object.'
const int zeroObject = 0;

enum TigVarType { tigUndefined, tigString, tigInt, tigFloat, tigObj, tigFunc, tigArray };
