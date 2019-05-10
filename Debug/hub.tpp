#include coreObj.tpp



/** The base class defining level hubs. */


commonRooms = [storeRoom, controlRoom, washRoom, smallOffice];

CGameObj CHub has neighbourHubs, roomTypes, hubRoom, roomList, uniqueRooms,


/** Connect the given hub to this hub.*/
attach(hub) {
	neighbourHubs[] += hub;
	hub.neighbourHubs[] += self;
	
},


/**	Create this hub's hub room.*/
createHubRoom() {
	/* Just a virtual function for now. */
},


/** Create and attach a selection of rooms to the hub room. */
createOtherRooms() {
	numRooms =  d4 + 2;
	numHubUniqueRooms = 0;
	for each roomNo of (1 to numRooms) {
		directionId = getUnusedDirection();
		oppositeDir = calcBackDirection(directionId);
		
		if (roomNo <= numHubUniqueRooms) {
			roomClass = random uniqueRooms[];	
		} else {
			roomClass = random commonRooms[];	
		}
		
		newRoom = new roomClass;
		hubRoom.<directionId> = newRoom;
		newRoom.<oppositeDir> = hubRoom;
		roomList[] += newRoom;
	}
	
},

/** Return a direction from the hub room that hasn't been used yet. */
getUnusedDirection() {
	randomDir = directionIds[d8-1];
	tries = 0;
	while (hubRoom.<randomDir> != 0) {
		randomDir = directionIds[d8-1];
		tries += 1;
		if (tries == 8) {
			"\nRan out of rooms!";
			break;
		}
	}
	return randomDir;
}
; 

CRoom storeRoom has name "Store room", description "A room lined with shelves.";

CRoom controlRoom has name "Control room", description "Banks of electronics line the walls.";

CRoom washRoom has name "Wash room", description "A pristine and perhaps never used unisex toilet facility.";

CRoom smallOffice has name "Small office", description "This cramped space has just enough room for its
	solitary desk and chair.";
	
