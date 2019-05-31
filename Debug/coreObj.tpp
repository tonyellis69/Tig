/* Core game objects. */

CGameObj has parent = 0, child = 0, sibling = 0,  initial, click, turn, name, description,
/*
take {
	oldParent = self.parent;
	purge click, self; 
	"\n\nYou pick up the " + makeHot(name,self,&click) + ". ";
	move self to player;
	flag self moved;
	updateInventory();
	oldParent.taken();
}, 
drop {
	purge click, self;
	"\n\nYou drop the " + makeHot(name,self,&click) + ". ";
	move self to player.parent;
	updateInventory();
}, */
examine {
	openWindow self;
	setWindow(self);
	print style("smallHeader") + cap(name) + style("small") + "\n";
	description();
	listObjectOptions();
	setWindow(mainWindow);
},

/** Player has clicked on this object. */
click() {
	examine();
},



/** Create the options provided by this object in the form of hot text calls. */
listObjectOptions() {
	//just a virtual func here in the base class.
},

/** Create the options provided by this object in the form of hot text calls. */
//createMenu() {
	/*if (self not in player && !self inherits CStatic)
			print makeHot("Take",self,&take) + "\n";
	if (self in player)
			print makeHot("Drop",self,&drop) + "\n";*/
//	makeHot("Examine",self,&examine);	
//},*/

/** An empty default method to prevent tiresome warnings in room descriptions.*/
search() {},

/** Returns the shorthand version of this thing's name, if any.*/
shortName() {
	return name;
},

/** Called on every object in the room when player enters. */
onPlayerEntry() {
},

/** Called on every object in the room when player exits. */
onPlayerExit() {
	
}

;

/** An item is a takeable game object. */
CGameObj CItem has
take {
	oldParent = self.parent;
	//purge click, self; 
	//"\n\nYou pick up the " + makeHot(name,self,&click) + ". ";
	move self to player;
	flag self moved;
	updateInventory();
	oldParent.taken();
}, 
drop {
	//purge click, self;
	//"\n\nYou drop the " + makeHot(name,self,&click) + ". ";
	move self to player.parent;
	updateInventory();
}, 

/** Create the options provided by this object in the form of hot text calls. */
listObjectOptions() {
	"\n";
	msg = makeHot(name,self,&click);
	if (self not in player && !self inherits CStatic) 
		makeHot("Take",self,&take,"You pick up the " + msg + ". ") + " ";
	if (self in player) {
		makeHot("Drop",self,&drop,"You drop the " + msg + ". ") + " ";
	}	
},

/** Remove this object from the game world. */
destroy() {
	delete self;
	updateInventory();
}
;






/**	The basic room template. */
CGameObj CRoom has shortName, //TO DO: what does this do? Investigate

/** Register each exit and every object as something to hot text. */
registerHotText {
	x = 0; //local 0
	for each directionId of directionIds { 
		if (self.<directionId>)  {
			hot directionNames[x], player, &moveTo, directionId, "You go " + directionNames[x] ;
		}
		x += 1;
	}

	//register hot text for any room objects
	for each item of self {  
			hot item.name, item, &click;
	}

},


listUndescribedExits() {
	directionNum = 0; backDirectionUsed = -1;
	doorList = [];
	corridorList = [];
	//TO DO: psuedorandomly turn off backDirection, it's too prevalent
	for each directionId of directionIds {
		destination = self.<directionId>;
		if (destination == nothing ||  hot directionNames[directionNum] used) {
			directionNum += 1;
			continue;
		}
					
		if (directionId == player.backDirection) {
			backDirectionUsed = directionNum;
			directionNum += 1;
			continue;
		}
			
		if (destination inherits CDoor) 
			doorList[] += directionNum;
		else if (destination inherits CCorridor)
			corridorList[] += directionNum;
		else 
			exitList[] += directionNum;	

		 
		directionNum += 1;
	}
	
	//doors	
	doorCount = 0;
	for each doorDir of doorList {
		pDoor = self.<directionIds[doorDir]>;
		"a " + pDoor.name() + " leads " + directionNames[doorDir];
		doorCount += 1;
		if (doorCount < doorList -1)
			", ";
		if (doorCount == doorList -1)
			" and ";
	}
	print ". ";

	//corridors
	if (corridorList == 1) {
		"A corridor leads " + directionNames[corridorList[0]];
	}
	else if (corridorList > 1) {
		"Corridors lead "; count = 0;
		for each directionIndex of corridorList {
			print directionNames[directionIndex];
			count += 1;
			if (count < corridorList -1)
				", ";
			if (count == corridorList -1)
				" and ";	
		}
		
	}
	print ". ";

	//exits
	if (exitList == 1) {
		". An exit leads " + directionNames[exitList[0]];
	}
	else if (exitList > 1) {
		if (corridorList > 0 || doorList > 0)
			"Other exits lead ";
		else
			"Exits lead "; 
		count = 0;
		for each exitDir of exitList {
			print directionNames[exitDir];
			count += 1;
			if (count < exitList -1)
				", ";
			if (count == exitList -1)
				" and ";	
		}

	}
	
	if (backDirectionUsed > -1) {
		if (exitList > 0 || corridorList > 0)
			", or you can go back "  + directionNames[backDirectionUsed];
		else
			"The way back leads "  + directionNames[backDirectionUsed];
	}
	print ". ";	
	
},

/** List the objects in the room. */
listRoomContents() {
	//describe any live robots first

	robots = [];
	for each item of self {
		if (item inherits CRobot /*&& item is not inCombat*/) {
			robots[] += item;	
		}
	}
	
	
	if (robots > 0) {
		"\n\n";
		
		
		//TO DO: lazily assuming if one robot is a short way off they all are!
		//when I implement long distance, group robots by short and long.
		capitalise next;
		if (robots[0].distance > meleeDistance)
			"A little way off, ";
		for each robot of robots {
			robot.initial();
			if (first && robots > 1)
				", while ";
			else
				". ";
		
		}
		"\n";
	}
	
	

	
	//provide initial descriptions for untouched objects
	for each item of self {
		if (item != player && !item inherits CScenery && !item inherits CRobot) {
			if (item is not moved) {
				/////////////////////////////////
				"\n\n" + item.initial();
					
				item.search();
			}
			else
				movedItems[] += item;	
		}		
	}

	//describe any other objects
	if (movedItems > 0)
		"\n\nYou can also see " + listElements(movedItems) + " here. ";
	
	
	
},
look {
	purge all;
	print "\n\n" + style("mainHeader") + cap(name) + style("mainBody") + "\n";
	registerHotText();
	description(); //TO DO: should really be called describe.
	listUndescribedExits();
	listRoomContents();

	//"\n"; //start any post-description text on a new line.
	
	hot clear;
},northTo,neTo,eastTo,seTo,southTo,swTo,westTo,nwTo,upTo,downTo,inTo,outTo;


CRoom CCorridor has shortName "corridor";
CGameObj CStatic;
CStatic CScenery;


CGameObj CSupporter has search {
	result = listChildren(self);
	if (result != "") {
		"On it you can see " + result + ".";
	}
},
examine {
	CGameObj::examine();
	setWindow(self);
	search();
	setWindow(mainWindow);
},
taken {
	setWindow(self);
	clearWindow;
	examine();
	setWindow(mainWindow);
}


;


CGameObj CContainer has open,
search() {
	if (open) { //don't tell the player it's openable unless it's examined.
		"The " + name + " is open";
		result = listChildren(self);
		if (result != "") 
			", and inside it you can see " + result;
		". ";
	}
},
examine {
	CGameObj::examine();
	setWindow(self);
	search();
	if (!open)
		"The " + name + " is closed.";
	setWindow(mainWindow);
},

openSub() {
	open = true;
	"\n\nYou open the " + clickableName(self); 
	result = listChildren(self);
	if (result != "") {
		", revealing " + result;
	}
	print ".";
},
closeSub() {
	open = false;
	"\n\nYou close the " + clickableName(self) + ". ";
},

createMenu() {
	CGameObj::createMenu();
	if (self.open)
		makeHot("\nClose",self,&closeSub);
	else
		makeHot("\nOpen",self,&openSub);
};








CGameObj CDoor has open, name "door", passThrough,
blockedMsg() {
	"\nThe " + name + " blocks your way.";
};


