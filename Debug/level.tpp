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
	
	/*"A short first line.";
	"\nThis is a longer second line, about three times as long at least, definitely.";
	"\nAnother short line.";
	"\nAnd another long line, are we seeing any kind of pattern yet in all of this?";
	"\n\nThat was a line gap, did it make a difference?";
	"\n\n\nAnd that was a double line gap.";
	"\nNow here is a section of text that is going to run on for some lines, on and on 
	and on in the interest of seeing what difference that makes. Of the trail of ink 
	there is no end, as the man said. How many lines is this, I wonder. Enough to 
	make a difference? We shall see.";
	"\n\nAnother line gap. Done.";
	
	*/
	globalLook();

	gameTurn();
	

};


CRoom arena has name "Bare room",  description {
"This is a plain, unremarkable room.";
}, southTo testRoomSouth, swTo testRoomSouthWest;








CRoom testRoomSouth has name "Test room south",  description {
"This is a test room.";
},
northTo arena; 


-> CServobot robot;

/*
-> CRobot cleaningBot has name "cleaning bot", initialText "a cleaning bot polishes the floor", 
description "A low, four-legged machine with orange brushes for feet.",
weapon = brushArm, armour = lightRoboArmour, distance = 1, //was 5
armourClass = 10
;
*/


CRoom testRoomSouthWest has name "Test room southwest",  description {
"This is a test room.";
},
neTo arena; 

CWrench wrench;
CPipe pipe;
CAblat ablat;
CBlaster blaster;
CMedpack medpack;

