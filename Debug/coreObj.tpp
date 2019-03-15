/* Core game objects. */

CGameObj has parent = 0, child = 0, sibling = 0, shortName,  initial, moved, click, turn,
take {
	oldParent = self.parent;
	purge click, self; 
	"\n\nYou pick up the " + makeHot(name,self,&click) + ". ";
	move self to player;
	moved = true;
	updateInventory();
	oldParent.taken();
}, 
drop {
	purge click, self;
	"\n\nYou drop the " + makeHot(name,self,&click) + ". ";
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
			print makeHot("Take",self,&take) + "\n";
	if (self in player)
			print makeHot("Drop",self,&drop) + "\n";
	if (self inherits CContainer) 
		if (self.open)
			print makeHot("Close",self,&closeSub) + "\n";
		else
			print makeHot("Open",self,&openSub) + "\n";
	//iterate through possible actions 
	count = 0;
	for each actionId of actionIds {
		if (self has actionId) {
			if (count > 0)
				"\n";
			print makeHot(cap(actionNames[count]),self,actionId) ;

		}
		count += 1;
		
	}
	setWindow(mainWindow);
	
},

/** An empty default method to prevent tiresome warnings in room descriptions.*/
search() {}

;


/**	The basic room template. */
CGameObj CRoom has 

/** Register each exit and every object as something to hot text. */
registerHotText {
	x = 0; //local 0
	for each directionId of directionIds { 
		if (self.<directionId>)  {
			hot directionNames[x], player, &moveTo, directionId;
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
listObjects() {
	//provide any initial descriptions
	for each item of self {
		if (item != player && !item inherits CScenery) {
			if (!item.moved) {
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



CGameObj player has onObject, backDirection, name "player", hitPoints 15, opponent, initiative,
combatActionFn,
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
	
	
},

/** Queue an attack on the given opponent. */
queueHit(target) {
	//"\n\nYou aim a blow at the " + target.name + "...";
	opponent = target;
	tron;
	combatActionFn = bash;
	troff;
},


/** Queue an attempted block on the given opponent's attack. */
queueBlock(target) {
	opponent = target;
	combatActionFn = block;
},

/** Carry out whatever combat move the player has lined up.*/
combatAction() {
	log "\n[" + self.name + " acts on " + opponent.name + "]";
	combatActionFn(opponent);
},

/** Roll for initiative! This value will help the combatAssistant determine battle order.*/
rollInitiative() {
	initiative = d10;
	//TO DO: modify with dexterity, etc
},

/** Use the player's basic physical attack on the given target. */
bash(target) {
	target.receiveBash(self,d10);
		
},


block(target) {
	log "\n[Silent block action.]";
},

/** Handle a bash attack. */
receiveBash(attacker,damage) {
	"\nThe " + attacker.name + " swings at you, ";
	if (combatActionFn == block) {
		"but you block its attack.";
		return;
	}
	
	"doing " + damage + " damage.";
	
	hitPoints -= damage;
	log "\nplayer hitpoints " + hitPoints;
	
	if (hitPoints <= 0) {
			"\n\nThe " + attacker.name + " kills you!";
	}
}

;





CGameObj CDoor has open, name "door", passThrough,
blockedMsg() {
	"\nThe " + name + " blocks your way.";
};


