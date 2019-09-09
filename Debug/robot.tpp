

/** The base robot class. */
CGameObj CombatantClass CRobot has opponent, hitPoints 15, maxHitPoints 15, initiative, combatActionFn, weapon, armour, initialText,
distance = 1,

initial() {
	if (combatState == inCombat) { ///test!!!!!! don't keep
	 "a rectangular servobot is attacking you!";
	 return;
	}
	
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
	//if (self is stumbling)
	//	return "off-balance " + name;

	if (self.combatActionFn == &charge)
		return	"fast approaching " + name;
	
	return name;
},

/** Called every round the robot is live, determines what action the robot will perform.*/
turn {
	//For now, entering combat is automatic	
	if (combatState == notInCombat) 
		combatState = initiatingCombat;
	
	
	if (combatState != notInCombat)
		combatAction2();

	//do non-combat stuff
},

/** Perform the requisite combat action. */
combatAction2() {
	if (combatState == chasingPlayer) {
		followPlayer();
		return;
	}
	
	if (combatState == initiatingCombat) {
		print style("markOn");
		"\n\nThe " + self.name + " rushes to attack you!";
		combatState = inCombat;
		flag gameState tidyMode;
		return;
	}
	
	if (combatState == inCombat) {
		hit(player);
		//TO DO: target should not automatically be the player. Set up an 'opponent' variable.
	}
	
},

/** Attempt to hit the given target. */
hit(target) {
	"\n\nThe " + name + " takes a wild swing at you!";
	
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

	rollInitiative();
	if (combatState ==  notInCombat) { //TO DO, prob shift all this to end of doCombatRound
		initialiseCombatRound();
		opponent = target;
		combatState = initiatingCombat;
		
		examine();
		
		//combatActionFn = &initiatingCombatMsg;
		initiatingCombatMsg();
	} //else {
	//	chooseCombatAction();	
	//}
	
	combatAssistant.register(self);
},



/** Deliver a one-off message announcing that this robot is starting combat. */
initiatingCombatMsg() {
	log " initiatingCombatMsg";
	"Seeing you, the " + shortName + " ";
	roll = d3;
	if (roll == 1)
		msg = "charges in your direction, metal arms whirling!";
	if (roll == 2)
		msg = "speeds toward you, looking hostile!";
	if (roll == 3)
		msg = "rushes at you!";
	print msg;

	combatState = inCombat;
},



/** Robot chooses its action for this round of combat.*/
chooseCombatAction() {
	log self.name + " choosing combat action.";
	
	if (distance > meleeDistance) {
		combatActionFn = &charge;
		return;
	}
	
	choice = d3;
	if (choice == 1) {
		combatActionFn = &bash;
		log "\nchose to bash.";
	} else {
		combatActionFn = &block;
		blockTarget = opponent;
		log "\nchose to block.";
	}
},


/** Carry out whatever combat move the robot has previously announced.*/
combatAction() {
	log "\nRobot combat fn: "  + combatActionFn;
	<combatActionFn>(opponent);
},


/** Roll for initiative! This value will help the combatAssistant determine battle order.*/
rollInitiative() {
	initiative = d10;
	//TO DO: modify with dexterity, etc
},


/** Use the robot's basic physical attack on the given target. */
bash(target) {
	ACmodifier += weapon.getFastACmodifier();
	hitRoll = rollToHit();
	hitRoll += weapon.getFastHitModifier(target);
	targetAC = target.getModifiedAC(weapon);
	
	if (target.blockTarget == self) { //is the target trying to block me?
		targetAC += target.getBlockMod(weapon);
	}
	
	log "\nRobot ACmodifier: " + ACmodifier + " hit roll + mod: " + hitRoll + 
	" vs player AC: " + targetAC;
	
	if (hitRoll < targetAC) {
		if (target.blockTarget == self) {
			", and the blow glances off.";
			return;
		}
		
		
		roll = d8;
		if (roll == 1)
			"The " + name() + " swipes at you ineffectually.";
		if (roll == 2)
			"The " + name() + "'s " + weapon.name() + " cleaves the air an inch in front of your face.";
		if (roll == 3)
			"The " + name() + " swings at you but misses.";
		if (roll == 4)
			"You sidestep just in time as the " + name() + " swings at you.";
		if (roll == 5)
			"The " + name() + " lashes at you but you're just too fast.";
		if (roll == 6)
			"Yod dodge the " + name() + "'s attack.";
		if (roll == 7)
			"The " + name() + " swings viciously, but misses.";
		if (roll == 1)
			"The " + name() + " slashes at you but fails to connect.";
		return;
	}
	
	if (target.blockTarget == self) {
		", but not quite fast enough. ";
	}
	
	
	damage = weapon.getLightDamage(target);
	
	qualifier = "The ";
	roll = d3;
	if (roll == 1)
		print qualifier + self.name + " bludgeons you with a " + weapon.name;
	if (roll == 2)
		print qualifier + self.name + " strikes you with a " + weapon.name;
	if (roll == 3)
		print qualifier + self.name + " lashes at you with a " + weapon.name;
	

	target.receiveDamage(weapon,damage);

},

/** The robot's basic roll to hit. */
rollToHit() {
	return d20;
},

/** Passive block action. Do nothing. */
block(target) {
	//blockTarget = target;
	//as long as actions are in initiative order, there's no point doing anything here
},


/** Rush at the player to get into melee range. */
charge() {
	log "\n" + self.name + ": charging.";
	distance = meleeDistance;
},





receiveDamage(weapon,damage) {
	//reduce damage by any modifiers

	damage = armour.onHit(damage);

	if (damage < 1)
		damage = 1;
	if (blockTarget == player)
		", which the " + name() + " unsuccessfully tries to block";
	", hitting it for " + damage + " damage.";
	hitPoints -= damage;
},

death() {
	"\n\nFatally damaged, the " + self.name + " falls lifelessly to the floor.";
	flag self dead;
	combatAssistant.unregister(self);
	liveList[] -= self;
	
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

},

/** Subclass examine to include robot status. */
/*
examine {
	openWindow self;
	setWindow(self);
	clearWindow;
	print style("smallHeader") + cap(name) + style("small") + "\n";
	description();
	robotStatus();
	listObjectOptions();
	setWindow(mainWindow);
},*/



/** Report combat activity, damage etc.*/
currentStatus() {
	if (combatState == inCombat) {
		print combatHint();
	}
	if (combatState == initiatingCombat)
		"\nThe robot is rushing to attack you!";
	if (hitPoints < maxHitPoints)
		"\nHit points: " + hitPoints;
},



/** Return a string hinting at what this robot is gearing up to do next combat round. */
combatHint() {
	attackResponses = ["The " + name() + " is poised to strike you.",
					"The " + name() + " seems about to strike you.",
					"The " + name() + " may be about strike you.",
					"The " + name() + " is hard to read, but may be about strike you.",
					"The " + name() + "'s body language is impossible to read."];
	defenceResponses = ["The " + name() + " has raised its arms defensively",
						"The " + name() + " seems about to block you",
						"The " + name() + " may be about to block you",
						"The " + name() + " is hard to read, but it may be about to block you",
						"The " + name() + "'s body language is impossible to read."];
						
	readingRoll = d20;
	if (readingRoll > 10) {  //success!
		if (combatActionFn == &block)
			return defenceResponses[0];
		else
			return attackResponses[0];	
	}
	
	certainty =  d4;
	accuracy = d6; 
	swap = false;
	if (certainty == 1)
		if (accuracy < 2)
			swap = true;
		
	if (certainty == 2)
		if (accuracy < 3)
			swap = true;
		
	if (certainty == 3)
		if (accuracy < 4)
			swap = true;
		
	if (combatActionFn == &block) {
		if (swap)
			return attackResponses[certainty];
		else
			return defenceResponses[certainty];
	}
	else {
		if (swap)
			return defenceResponses[certainty];
		else
			return attackResponses[certainty];
	}
	
},


/** Create the options provided by this robot in the form of hot text calls. */
listObjectOptions() {
	"\n";
	player.writeAttackOption(self);
	
}

;

CRobot CServobot has name "rectangular servobot", shortName "servobot", initialText "a rectangular servobot is stalking about here",
description "A collection of hard, metallic edges and surfaces.",
weapon = metalArm, armour = lightRoboArmour, distance = 1, //was 5
armourClass = 10
;






