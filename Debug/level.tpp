/* Code describing level. */

#include global.tpp
#include coreObj.tpp
#include robot.tpp



/** Initialisation code.*/
init() {
	//start player in the right room:
	move player to arena;
	move wrench to player;
	updateInventory();
	tron;
	x = new arena;
	if (x is bare)
		"\n new object called " + x.name;
	troff;
	
};


CRoom arena has name "Bare room",  description {
"This is a plain, unremarkable room.";
},  flag bare ;

-> CRobot robot has name "rectangular robot", initial "A rectangular robot watches you.",
description "A collection of hard, metallic edges and surfaces.";

CGameObj wrench has name "adjustable wrench", description "Almost two feet long and satisfyingly
	heavy.";



