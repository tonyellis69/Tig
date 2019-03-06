/* Global variables and functions. */


mainWindow = 0;
invWindow = 1;
menuWindow = 2;

//Constants for messaging the user
msgRoomChange = 5000;

directionIds = [&northTo,&neTo,&eastTo,&seTo,&southTo,&swTo,&westTo,&nwTo,&upTo,&downTo,&inTo,&outTo]; 
directionNames = ["north","northeast","east","southeast","south","southwest","west","northwest","up","down","in","out"]; 

actionIds = [&examine,&push,&turnSub,&climb];
actionNames = ["examine","push","turn","climb"];

playerObj = player;

updateInventory() {

	setWindow(invWindow);
	clearWindow;
	print style("smallHeader") + "Inventory:\n" + style("small");
	for each possession of player {
		print makeHot(cap(aAn(possession)),&click,possession) + "\n"; 
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
	for each x of parentObj { 
		result += makeHot(aAn(x) ,&click,x); 
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
	for each x of array { 
		result += "a " + makeHot(x.name,&click,x); 
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
	return makeHot(obj.name,&click,obj);
};

teleport(destination) {
	move player to destination;
	
	purge all;
	"\n";
	message msgRoomChange, destination;
	destination.look();
};

/** Return the object name correctly prefixed with 'a' or 'an'.*/
aAn(obj) {
	if (obj.name[0] matches "aieouAIEOU" >= 0)
		return "an " + obj.name;
	return "a " + obj.name;
	
};
