/* Core game objects. */

CGameObj has parent = 0, child = 0, sibling = 0,  initial, click, turn, name, description,
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
	createMenu();
	setWindow(mainWindow);
	
},

/** Create the options provided by this object in the form of hot text calls. */
createMenu() {
	if (self not in player && !self inherits CStatic)
			print makeHot("Take",self,&take) + "\n";
	if (self in player)
			print makeHot("Drop",self,&drop) + "\n";
	makeHot("Examine",self,&examine);	
},

/** An empty default method to prevent tiresome warnings in room descriptions.*/
search() {},

/** Returns the shorthand version of this thing's name, if any.*/
shortName() {
	return name;
}

;


/**	The basic room template. */
CGameObj CRoom has shortName, //TO DO: what does this do? Investigate

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

/** List the objects in the room. */
listRoomContents() {
	//describe any robots first
	for each item of self {
		if (item inherits CRobot && item is not inCombat) {
			robots[] += item;	
		}
	}
	
	if (robots > 0) {
		"\n\n";
		
		//TO DO: lazily assuming if one robot is a short way off they all are!
		//when I implement long distance, group robots by short and long.
		if (robots[0].distance > meleeDistance)
			"A little way off, ";
		for each robot of robots {
			robot.initial;
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
},

createMenu() {
	CGameObj::createMenu();
	if (self.open)
		makeHot("\nClose",self,&closeSub);
	else
		makeHot("\nOpen",self,&openSub);
};



CGameObj CombatantClass player has onObject, backDirection, name "player", hitPoints 15, armour,
weapon,
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

/** Do any preparation for round of combat. */
initialiseCombatRound() {
	combatActionFn = 0;
},

/** Queue an attack on the given opponent. */
queueHit(target) {
	"\n\nYou choose to attack...\n";
	opponent = target;
	combatActionFn = &bash;
},

/** Queue an attempted block on the given opponent's attack. */
queueBlock(target) {
	"\n\nYou choose to block...\n";
	opponent = target;
	combatActionFn = &block;
},

/** Queue an attempt to dodge the given opponent's attack. */
queueDodge(target) {
	"\n\nYou choose to dodge...\n";
	opponent = target;
	combatActionFn = &dodge;
},

/** Queue a decision to do nothing this round.*/
queueNothing(target) {
	"\n\nYou choose to wait...\n";
	opponent = target;
	combatActionFn = &doNothing;
},

/** Queue an attempt to fire a gun this round.*/
queueShot(target) {
	"\n\nYou level your gun for a shot...\n";
	opponent = target;
	combatActionFn = &shoot;
},

/** Carry out whatever combat move the player has lined up.*/
combatAction() {
	log "\n[" + self.name + " acts on " + opponent.name + "]";
	<combatActionFn>(opponent);
	combatActionFn = 0;
},

/** Roll for initiative! This value will help the combatAssistant determine battle order.*/
rollInitiative() {
	initiative = d10;
	if (self is stumbling)
		initiative += 5;
	//TO DO: modify with dexterity, etc
},

/** Use the player's basic physical attack on the given target. */
bash(target) {
	weapon.bash(target);
	
},


block(target) {
	log "\n" + self.name + ": [Silent block action.]";
	if (target.combatActionFn == &block || target.combatActionFn == &dodge)
		"You make a defensive move, but so does the " + target.name + ".";
},

dodge(target) {
	log "\n" + self.name + ": [Silent dodge action.]";
	
	if (target.combatActionFn == &block || target.combatActionFn == &dodge)
		"You make a defensive move, but so does the " + target.name + ".";
},

doNothing(target) {
	"You bide your time";
	if (target.combatActionFn == &charge)
		" as the " + target.name + " gets rapidly closer";
	". ";
},

shoot(target) {
	weapon.shoot(target);
	
},

/** Handle a bash attack. */
receiveBash(attacker,damage) {
	if (combatActionFn == &block && opponent == attacker && self is not stumbling) {
		if (weapon.doesBlock(damage) == true) {
			", but you block its attack.";
			return;
		} else { 
			", too fast for you to block";
		
		}
	}
	
	if (combatActionFn == &dodge && opponent == attacker && self is not stumbling) {
		", but you dodge its attack";
		if (d3 == 1) {
			", causing it to stumble slightly.";
			flag attacker stumbling;
		} 
		else
			".";
		return;
	}
	
	if (self is stumbling) {
		" as you flounder";
		damage += 2;
	}
	unflag self stumbling;
	
	damageAfterArmour = armour.getReduction(damage);
	
	", doing " + damageAfterArmour + " damage. ";
	
	if (damageAfterArmour < damage) {
		if (armour is broken)
			"Your armour is wrecked in the process.";
		
	}
	
	hitPoints -= damageAfterArmour;
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


