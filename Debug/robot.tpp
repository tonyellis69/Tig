

/** The base robot class. */
CItem CombatantClass CRobot has opponent, hitPoints 15, initiative, combatActionFn, weapon, armour, initialText,
distance = 1,

initial() {
	if (self is not dead) 
		print initialText;
	else
		"The wreckage of a " + name + " litters the floor.";
	
},

take() {
	"\nThe lifeless robot is too heavy.";
	
},

createMenu() {
	if (self not in player && self is dead)
			print makeHot("Take",self,&take) + "\n";
	makeHot("Examine",self,&examine);	
},

/** Return a prefixed name to provide context in combat. */
combatName() {
	if (self is stumbling)
		return "off-balance " + name;

	if (self.combatActionFn == &charge)
		return	"fast approaching " + name;
	
	return name;
},

/** Called every round the robot is activated, determines what action the robot will perform.*/
turn {
	if (combatState == chasingPlayer) {
		followPlayer();
		return;
	}
		
	
	
	if (playerPresent())
		fight(player);
	else
		liveList[] -= self;
},

/** Follow the player when they leave the room, because we're in combat. */
followPlayer() {
	move self to player.parent;
	"\n\nThe " + self.name + " follows you!";
	combatState = inCombat;
	fight(player);
},

/** Initiate a round of combat with the target. */
fight(target) {
	opponent = target;
	rollInitiative();
	if (combatState ==  notInCombat) {
		combatState = initiatingCombat;
		combatActionFn = &initiatingCombatMsg;
	} else {
		chooseCombatAction();	
	}
	
	combatAssistant.register(self);
},

/** Describe what the robot is doing, combat-wise. */
combatMsg() {
	if (combatState == initiatingCombat) {
		initiatingCombatMsg();
		return;
	}
	continuingCombatMsg();
},

/** Deliver a one-off message announcing that this robot is starting combat. */
initiatingCombatMsg() {
	"Seeing you, the " + shortName + " ";
	roll = d3;
	if (roll == 1)
		msg = "charges, metal arms whirling!";
	if (roll == 2)
		msg = "speeds toward you, looking hostile!";
	if (roll == 3)
		msg = "rushes at you!";
	print msg;

	combatState = inCombat;
},

/** Describe what the robot seems to be doing this combat round. Attacking, evading, etc. */
continuingCombatMsg() {
	"The " + shortName + " ";
	/*roll = d3;
	if (roll == 1)
		msg = "swipes at you with a metal arm";
	if (roll == 2)
		msg = "swings its arm at you like a club";
	if (roll == 3)
		msg = "raises a clawed hand to gouge you";	*/
	
	"looms menacingly.";
	return;
	
	///////////////////////////////
	
	msg = "is poised to strike";
	
	makeHot(msg, combatAssistant,&showPlayerOptions,self) + ". ";
},




/** Robot chooses its action for this round of combat.*/
chooseCombatAction() {
	log self.name + " choosing combat action.";
	
	
	
	if (distance > meleeDistance) {
		combatActionFn = &charge;
		return;
	}
	
	choice = d6;
	if (choice == 1) {
		combatActionFn = &block;
	} else if (choice == 2) {
		combatActionFn = &dodge;
	}
	else {
		combatActionFn = &bash;	
	}
},


/** Do any preparation for round of combat. */
initialiseCombatRound() {
	combatActionFn = 0;//?
},

/** Carry out whatever combat move the robot has previously announced.*/
combatAction() {
	<combatActionFn>(opponent);
},


/** Roll for initiative! This value will help the combatAssistant determine battle order.*/
rollInitiative() {
	initiative = d10;
	if (self is stumbling)
		initiative += 5;
	//TO DO: modify with dexterity, etc
},


/** Use the robot's basic physical attack on the given target. */
bash(target) {
	damage = weapon.getDamage();
	
	qualifier = "The ";
	if (player.opponent == self)
		qualifier = "Moving fast, the ";
	
	roll = d3;
	if (roll == 1)
		print qualifier + self.name + " swings its " + weapon.name + " at you";
	if (roll == 2)
		"Whoosh! " + qualifier + self.name + " swipes at you with its " + weapon.name;
	if (roll == 3)
		print qualifier + self.name + " lashes at you with its " + weapon.name;
	
	target.receiveBash(self,damage);	
},

/** Passive block action. Do nothing. */
block(target) {
	//evadingMsg();

	log "\n" + self.name + ": [Silent block action.]";
},

/** Passive dodge action. Do nothing. */
dodge(target) {
	//evadingMsg();
	log "\n" + self.name + ": [Silent dodge action.]";
},

/**	If defending and not the player's opponent, simply mention what this robot is doing.*/
evadingMsg() {
	if (player.opponent != self) {
		if  (combatActionFn == &block || combatActionFn == &dodge) {

		roll = d4;
		if (roll == 1)
			"The " + self.name + " just shifts evasively.";
		if (roll == 2)
			"The " + self.name + " edges around you, looking for an opening.";
		if (roll == 3)
			"Feinting left, the " + self.name + " dodges right.";
		if (roll == 4)
			"Feinting right, the " + self.name + " dodges left.";
		}
	}
},


/** Rush at the player to get into melee range. */
charge() {
	log "\n" + self.name + ": charging.";
	distance = meleeDistance;
},

/** Handle a bash attack. */
receiveBash(attacker,damage) {
	
	if (combatActionFn == &block && self is not stumbling) {
		"but it blocks the attack with a " + weapon.name + ".";
		return;
	}
	
	if (combatActionFn == &dodge && self is not stumbling) {
		"but it slips out of the way";
		if (d3 == 1) {
			", causing you to stumble slightly.";
			flag attacker stumbling;
		}
		else
			". ";
		return;
	}
	
	unflag self stumbling;
	
	reducedDamage = armour.getReduction(damage);
	
	"for " + reducedDamage + " damage";
	
	if (reducedDamage < damage && armour is broken)
		", wrecking its armour in the process";
	
	".";
	
	hitPoints -= reducedDamage;
	log "\nrobot hitpoints " + hitPoints;
	
	if (hitPoints <= 0) {
			"\n\nThe " + self.name + " dies!";
			flag self dead;
	}
},

/** Handle being shot. */
receiveShot(attacker,damage) {
	if (combatActionFn == &dodge && self is not stumbling) {
		", but it slips out of the way. ";
		return;
	}
	
	
	reducedDamage = armour.getReduction(damage);
	
	" for " + reducedDamage + " damage";
	
	if (reducedDamage < damage && armour is broken)
		", wrecking its armour in the process";
	
	".";
	
	hitPoints -= reducedDamage;
	log "\nrobot hitpoints " + hitPoints;
	
	if (hitPoints <= 0) {
			"\n\nThe " + self.name + " dies!";
			flag self dead;
			combatAssistant.unregister(self);
			liveList[] -= self;
	}
},

/** Respond to the player attempting to leave the room. */
onPlayerExit() {
	//if we let the player go:
	//combatState = notInCombat;
	//combatAssistant.unregister(self);
	
	if (combatState != notInCombat) {
		combatState = chasingPlayer;
	}
},

/** Respond to player entering room. */
onPlayerEntry() {
	if (self is dead)
		return;
	if (self not in liveList) //only wake up if we're not awake already
		liveList[] += self;
	
}
;






