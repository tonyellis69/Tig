//#include global.tpp


/** Defines the object embodying a map at the highest level. The thing that 
	owns the hubs. */
CMap has hubs,

/** Each map will subclass this to create a unique style of map.*/
createMap() {
	
},

/** Work through the hubs, creating the hub room of each.*/
createHubRooms() {
	for each hub of hubs {
		hub.createHubRoom();
	}
},

/**	Work through the hubs, connecting each hub room via a corridor. */
connectHubRooms() {
	visitedHubs = 0;
	for each hub of hubs {
		for each neighbour of hub.neighbourHubs {
			if (neighbour in visitedHubs) {
				continue;
			}		
			randomDirection = directionIds[d8 -1];	
			oppositeDirection = calcBackDirection(randomDirection);
			
			linkingCorridor = new CCorridor with (name "Long corridor", description "A long passageway.");

			hub.hubRoom.<randomDirection> = linkingCorridor;
			linkingCorridor.<oppositeDirection> = hub.hubRoom;
			
			linkingCorridor.<randomDirection> = neighbour.hubRoom;
			neighbour.hubRoom.<oppositeDirection> = linkingCorridor;		
		}
		visitedHubs[] += hub;	
	}
},

/** Work through the hubs, asking them to create their non-hub rooms.*/
createOtherRooms() {
	for each hub of hubs {
		hub.createOtherRooms();
	}
};






