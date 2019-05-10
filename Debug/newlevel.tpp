/* Code describing level. */


#include global.tpp
#include combatAssistant.tpp
#include coreObj.tpp
#include weapons.tpp
#include robot.tpp



/** Initialisation code.*/
init() {
	//start player in the right room:
	move player to arena;
	move wrench to player;
	move pipe to player;
	player.weapon = wrench;
	updateInventory();


	player.parent.look();
	gameTurn();

};


CRoom arena has name "Bare room",  description {
"This is a plain, unremarkable room.";
},  flag bare ;

-> CRobot robot has name "rectangular robot", initial "A rectangular robot watches you.",
description "A collection of hard, metallic edges and surfaces.",
weapon = metalArm;

CWrench wrench;
CPipe pipe;


