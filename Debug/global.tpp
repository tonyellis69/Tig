/* Global variables and functions. */


mainWindow = 0;
invWindow = 1;
menuWindow = 2;
combatWindow = 3;

//Constants for messaging the user
msgRoomChange = 5000;

//max distance constants, in metres
meleeDistance = 4;
mediumDistance = 10;

directionIds = [&northTo,&neTo,&eastTo,&seTo,&southTo,&swTo,&westTo,&nwTo,&upTo,&downTo,&inTo,&outTo];
directionNames = ["north","northeast","east","southeast","south","southwest","west","northwest","up","down","in","out"]; 


playerObj = player;

liveList = []; //Active objects that get their turn() function called every turn.

updateInventory() {
	setWindow(invWindow);
	clearWindow;
	print style("smallHeader") + "Inventory:\n" + style("small");
	for each possession of player {
		print makeHot(cap(aAn(possession)),possession,&click) + "\n"; 
	}
	setWindow(mainWindow);
};


getDirectionName(directionId) {
	index = 0; 
	for each dir of directionIds {
		if (dir == directionId) {
			//break;
			return directionNames[index];
		}
		index += 1;
	}
	//return directionNames[index];
};


calcBackDirection(direction) {
	index = 0; dirNo = 12;
	for each dir of directionIds {
		if (dir == direction)
			dirNo = index;
		index += 1;
	}
	if (dirNo < 8) {
		dirNo += 4;
		dirNo = dirNo % 8;
		return directionIds[dirNo];
	} else {
		if (dirNo == 8) return directionIds[9];
		if (dirNo == 9) return directionIds[8];
		if (dirNo == 10) return directionIds[11];
		if (dirNo == 11) return directionIds[10];
	}
};



listChildren(parentObj) {
	count = 0; result = "";
	numChildren = children(parentObj); 
	for each childObj of parentObj { 
		result += makeHot(aAn(childObj),childObj,&click); 
		count += 1;
		if (count < numChildren -2) //probably needs to be -1
			result = result + ",";
		if (count == numChildren -1)
			result = result + " and ";
	}
	return result;
};


listElements(array) {
	count = 0; result = "";
	for each element of array { 
		result += "a " + makeHot(element.name,element,&click); 
		count += 1;
		if (count < array -1)
			result = result + ",";
		if (count == array -1)
			result = result + " and ";
	}
	return result;
};

clickableName(obj) {
	purge click, self; //remove any existing hot text for this name.
	return makeHot(obj.name,obj,&click);
};

teleport(destination) {
	for each obj of player.parent 
		obj.onPlayerExit();
	
	move player to destination;
	
	unflag combatAssistant active;
	
	purge all;

	message msgRoomChange, destination;
	destination.look();
	
	for each obj of destination
		obj.onPlayerEntry();
};

/** Return the object name correctly prefixed with 'a' or 'an'.*/
aAn(obj) {
	if (obj is nonCount)
		return obj.name;
	if (obj.name[0] matches "aieouAIEOU" >= 0)
		return "an " + obj.name;
	return "a " + obj.name;
	
};


/** After the player has acted, the rest of the game world gets a chance to act. */
gameTurn() {	
	
	for each liveObject of liveList {
		liveObject.turn();	
	}
	
	if (combatAssistant is active)
		combatAssistant.doCombatRound();
};


/** Display the shortcut menu for the player. */
shortcutMenu() {
	if (player is dead)
		return;
	//tell ui to open a menu window
	openWindow(menuWindow);
	setWindow(menuWindow);
	makeHot("Look",player.parent, &look);
	
	//loop through exits of player location
	idx = 0;
	for each exit of directionIds {
		//if (!first)
	
		if (player.parent.<exit> != 0) {
			name = directionNames[idx];
			makeHot("\nGo " + name,player, &moveTo, exit);
		}
		idx += 1;
		
	}
	setWindow(mainWindow);
};


playerPresent() {
	if (self in player.parent)
		return true;
	return false;
	
};



