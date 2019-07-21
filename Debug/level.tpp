/* Code describing level. */


#include global.tpp
#include combatAssistant.tpp
#include coreObj.tpp
#include player.tpp
#include weapons.tpp
#include items.tpp
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
	move medpack to player;
	//move robot to testRoomSouth;
	player.weapon = wrench;
	player.armour = ablat;
	updateInventory();
	
	

	//entranceHub = powerPlant.createMap();

	//move player to entranceHub.hubRoom;

	player.parent.look();

	gameTurn();
	
	for each x of (1 to 1) {
		"\n\nThis is line " + x;
	}
};


CRoom arena has name "Bare room",  description {
"This is a plain, unremarkable room.";
}, southTo testRoomSouth, swTo testRoomSouthWest;








CRoom testRoomSouth has name "Test room south",  description {
"This is a test room.";
},
northTo arena; 


-> CServobot robot;


-> CRobot cleaningBot has name "cleaning bot", initialText "a cleaning bot polishes the floor", 
description "A low, four-legged machine with orange brushes for feet.",
weapon = brushArm, armour = lightRoboArmour, distance = 1, //was 5
armourClass = 10
;



CRoom testRoomSouthWest has name "Test room southwest",  description {
"This is a test room.";
},
neTo arena; 

CWrench wrench;
CPipe pipe;
CAblat ablat;
CBlaster blaster;
CMedpack medpack;

