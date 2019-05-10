#include map.tpp
#include hub.tpp


/** A geothermal power plant map.*/
CMap powerPlant has

/** The 'recipe' for creating power plant maps. */
createMap() {
	entranceHub = new CPowerEntranceHub;
	puzzleHub = new CPowerPuzzleHub;
	setbackHub = new CPowerSetbackHub;
	fightHub = new CPowerFightHub;
	rewardHub = new CPowerRewardHub;
	
	hubs = [entranceHub,puzzleHub,setbackHub,fightHub,rewardHub];

	entranceHub.attach(puzzleHub);
	puzzleHub.attach(setbackHub);
	puzzleHub.attach(fightHub);
	fightHub.attach(rewardHub);
	

	createHubRooms();
	connectHubRooms();
	createOtherRooms();
	
	return entranceHub;
}
;



/** A selection of hubs suitable for a geothermal power plant.*/
CHub CPowerEntranceHub has name "Entrance", 
uniqueRooms = [pipeRoom1,pipeRoom2,pipeRoom3],


/** Create and attach the default pipe hall.*/
createHubRoom() {
	hubRoom = new pipeHall;
}
;


CRoom pipeHall has name "Pipe hall", description "A vast, humid space filled with criss-crossing pipes of all shapes 
and sizes.";

CRoom pipeRoom1 has name "Pipe room 1", description "A small room full of twisty pipes.";
CRoom pipeRoom2 has name "Pipe room 2", description "A small room full of twisty pipes.";
CRoom pipeRoom3 has name "Pipe room 3", description "A small room full of twisty pipes.";



CHub CPowerPuzzleHub has name "Puzzle",

/** Create and attach default hub room.*/
createHubRoom() {
	hubRoom = new innerHall;
};

CRoom innerHall has name "Inner hall", description "A large, pale-walled space.";


CHub CPowerSetbackHub has name "Setback",

createHubRoom() {
	hubRoom = new concourse;
};

CRoom concourse has name "Concourse", description "An open area with a number of exits.";



CHub CPowerFightHub has name "Fight",

createHubRoom() {
	hubRoom = new office;
};

CRoom office has name "Open-plan office", description "A wasteland of desks and chairs.";



CHub CPowerRewardHub has name "Reward", 

createHubRoom() {
	hubRoom = new controlRoom;
};

CRoom controlRoom has name "Old control room", description "Banks of electronic machinery line the walls.";



