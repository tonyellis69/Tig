/* Core game objects. */

CGameObj has parent = 0, child = 0, sibling = 0, shortName,  initial, moved, click, 
take {
	oldParent = self.parent;
	purge click, self; 
	tron;
	"\n\nYou pick up the " + makeHot(name,&click,self,42) + ". ";
	troff;
	move self to player;
	moved = true;
	updateInventory();
	oldParent.taken();
}, 
drop {
	purge click, self;
	"\n\nYou drop the " + makeHot(name,&click,self) + ". ";
	move self to player.parent;
	updateInventory();
}, 
examine {
	openWindow self;
	setWindow(self);
	print style("smallHeader") + cap(name) + style("small") + "\n";
	description();
	setWindow(mainWindow);
},
click {
	//tell ui to open a menu window
	openWindow(menuWindow);
	setWindow(menuWindow);
	if (self not in player && !self inherits CStatic)
			print makeHot("Take",&take,self) + "\n";
	if (self is in player)
			print makeHot("Drop",&drop,self) + "\n";
	if (self inherits CContainer) 
		if (self.open)
			print makeHot("Close",&closeSub,self) + "\n";
		else
			print makeHot("Open",&openSub,self) + "\n";
	//iterate through possible actions 
	count = 0;
	for each actionId in actionIds {
		if (self has actionId) {
			if (count > 0)
				"\n";
			print makeHot(cap(actionNames[count]),actionId,self) ;

		}
		count += 1;
		
	}
	setWindow(mainWindow);
	
};


CGameObj CRoom has 
registerHotText {
	x = 0; //local 0
	for each directionId in directionIds { 
		if (self.<directionId>)  {
			hot directionNames[x], directionId, self;
		}
		x += 1;
	}

	//register hot text for any room objects
	for each item of self {  
			hot item.name, &click, item;
	}

},
listUndescribedExits() {
	directionNum = 0; backDirectionUsed = -1;
	//TO DO: psuedorandomly turn off backDirection, it's too prevalent
	for each directionId in directionIds {
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
			doorList[] = directionNum;
		else if (destination inherits CCorridor)
			corridorList[] = directionNum;
		else 
			exitList[] = directionNum;	

		 
		directionNum += 1;
	}
	
	//doors	
	doorCount = 0;
	for each doorDir in doorList {
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
		for each directionIndex in corridorList {
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
		for each exitDir in exitList {
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
listObjects() {
	//provide any initial descriptions
	for each item of self {
		if (item != player && !item inherits CScenery) {
			if (!item.moved) {
				"\n\n" + item.initial();
				item.search();
			}
			else
				movedItems[] = item;	
		}		
	}
	
	//describe any other objects
	if (movedItems > 0)
		"\n\nYou can also see " + listElements(movedItems) + " here. ";
	
},
look {
	print style("mainHeader") + cap(name) + style("mainBody") + "\n";
	registerHotText();
	description(); //TO DO: should really be called describe.
	listUndescribedExits();
	listObjects();

	
	hot clear;
},northTo,neTo,eastTo,seTo,southTo,swTo,westTo,nwTo,upTo,downTo,inTo,outTo;


CRoom CCorridor has shortName "corridor";
CGameObj CStatic;
CStatic CScenery;


CSupporter has search {
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
};


CGameObj CContainer has 
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
};



CGameObj player has onObject, backDirection,
moveTo (direction) {
	setWindow(mainWindow);
	"\n";
	destination = parent.<direction>;
	
	if (destination inherits CDoor) {
		if (destination.open == false) {
			destination.blockedMsg();
			return;
		}
		destination.passThrough();
		destination = destination.<direction>;
		backDirection = 0;
	} else
		backDirection = calcBackDirection(direction);


	"\nYou go " + getDirectionName(direction) + ".\n";

	teleport(destination);
	
	
};

CGameObj CDoor has open, name "door", passThrough,
blockedMsg() {
	"\nThe " + name + " blocks your way.";
};


