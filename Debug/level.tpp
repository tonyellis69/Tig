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
	move ablat to player;
	move blaster to player;
	player.weapon = blaster;
	player.armour = ablat;
	updateInventory();


	player.parent.look();
	gameTurn();

};


CRoom arena has name "Bare room",  description {
"This is a plain, unremarkable room.";
} ;

-> CRobot robot has name "rectangular servobot", shortName "servobot", initial "a rectangular servobot watches you with narrow, electronic eyes",
description "A collection of hard, metallic edges and surfaces.",
weapon = metalArm, armour = lightRoboArmour, distance = 5
;

-> CRobot cleaningBot has name "cleaning bot", initial "a cleaning bot polishes the floor", 
description "A low, four-legged machine with orange brushes for feet.",
weapon = brushArm, armour = lightRoboArmour, distance = 5
;

CWrench wrench;
CPipe pipe;
CAblat ablat;
CBlaster blaster;
