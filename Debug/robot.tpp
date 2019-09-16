

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
		combatAction();

	//do non-combat stuff
},

/** Perform the requisite combat action. */
combatAction() {
	if (combatState == chasingPlayer) {
		followPlayer();
		return;
	}

	if (combatState == initiatingCombat) {
		print style("markOn");
		"\nThe " + self.name + " rushes to attack you!";
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
	points = 10; //TEMP
	damage = weapon.getDamage(points);
	defence = player.getDefence();
	damage = damage - defence;
	if (damage < 1) {
		"\n\nThe " + name + " takes a wild swing at you and misses!";
		return;
	}

	player.receiveDamage(self,damage);
},



/** Follow the player when they leave the room, because we're in combat. */
followPlayer() {
	move self to player.parent;
	"\n\nThe " + self.name + " follows you!";
	combatState = inCombat;
},


receiveDamage(damage) {
		"...the blow connects with the " + name() +", causing " +  damage + " points of damage.";
},

death() {
	"\n\nFatally damaged, the " + self.name + " falls lifelessly to the floor.";
	flag self dead;
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

/** Report combat activity, damage etc.*/
currentStatus() {
	if (combatState == inCombat) {
		print "[put combat hint here]";
	}
	if (combatState == initiatingCombat)
		"\nThe robot is rushing to attack you!";
	if (hitPoints < maxHitPoints)
		"\nHit points: " + hitPoints;
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
