/* Code describing level. */


#include global.tpp
#include combatAssistant.tpp
#include coreObj.tpp
#include player.tpp
#include weapons.tpp
#include robot.tpp
#include powerPlant.tpp


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


	//entranceHub = powerPlant.createMap();

	//move player to entranceHub.hubRoom;

	player.parent.look();
	gameTurn();
};


CRoom arena has name "Bare room",  description {
"This is a plain, unremarkable room.";
}, southTo testRoomSouth, swTo testRoomSouthWest;

/*


-> CRobot cleaningBot has name "cleaning bot", initialText "a cleaning bot polishes the floor", 
description "A low, four-legged machine with orange brushes for feet.",
weapon = brushArm, armour = lightRoboArmour, distance = 5
;
*/


CRoom testRoomSouth has name "Test room south",  description {
"This is a test room.";
},
northTo arena; 

-> CRobot robot has name "rectangular servobot", shortName "servobot", initialText "A rectangular servobot stands here",
description "A collection of hard, metallic edges and surfaces.",
weapon = metalArm, armour = lightRoboArmour, distance = 1 //was 5
;


CRoom testRoomSouthWest has name "Test room southwest",  description {
"This is a test room.";
},
neTo arena; 

CWrench wrench;
CPipe pipe;
CAblat ablat;
CBlaster blaster;
