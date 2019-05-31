


CGameObj CombatantClass player has onObject, backDirection, name "player", hitPoints 25, maxHitPoints 25, armour,
weapon, armourClass = 10,

/** An attempt by the player to move in the given direction to a new location.*/
moveTo (direction) {
	setWindow(mainWindow);
	
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

	teleport(destination);
},




/** Queue the given action, to be executed later in the combat round. */
queueCombatAction(action,target) {
	combatActionFn = action;
	opponent = target;
	combatAssistant.register(self);
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
	//"You bide your time";
	if (target.combatActionFn == &charge)
		" as the " + target.name + " gets rapidly closer";
	". ";
},


/** Attempt a fast hit on the target. */
fastHit(target) {
	ACmodifier += weapon.getFastACmodifier();
	hitRoll = rollToHit();
	log "\nPlayer rolls a " + hitRoll;
	
	hitRoll += weapon.getFastHitModifier(target);
	log "\nplus weapon mod = " + hitRoll;
	targetAC = target.getModifiedAC(weapon);
	log "\nTarget AC " + targetAC;
		
	if (hitRoll < targetAC) {
		meleeMissMsg();
		return;
	}
	
	damage = weapon.getLightDamage(target);
	//add any player damage mods
	target.receiveDamage(weapon,damage);
},

/** Attempt a heavy hit on the target.*/
heavyHit(target) {
	ACmodifier += weapon.getHeavyACmodifier();
	hitRoll = rollToHit();
	log "\nPlayer rolls a " + hitRoll;
	hitRoll += weapon.getHeavyHitModifier(target);
	log "\nplus weapon mod = " + hitRoll;
	targetAC = target.getModifiedAC(weapon);
	
	log "\nTarget AC " + targetAC;
	
	if (hitRoll < targetAC) {
		meleeMissMsg();
		return;
	}
	
	damage = weapon.getHeavyDamage(target);
	//add any player damage mods
	target.receiveDamage(weapon,damage);
},

meleeMissMsg() {
	roll = d8;
	if (roll == 1)
		", but miss.";
	if (roll == 2)
		", but your blow goes wide.";
	if (roll == 3)
		", but you're a moment too late.";
	if (roll == 4)
		" - slicing the space it occupied a moment before.";
	if (roll == 5)
		" - but land only a glancing blow.";
	if (roll == 6)
		", but your opponent is a half-second ahead of you.";
	if (roll == 7)
		", but your opponent eels out of the way.";
	if (roll == 8)
		" - just wide of the mark.";
},

/** Attempt a fast shot on the target. */
fastShot(target) {
	ACmodifier += weapon.getFastACmodifier();
	hitRoll = rollToHit();
	log "\nPlayer rolls a " + hitRoll;
	hitRoll += weapon.getFastHitModifier(target);
	log "\nplus weapon mod = " + hitRoll;
	targetAC = target.getModifiedAC(weapon);
	log "\nTarget AC " + targetAC;
	
	if (hitRoll < targetAC) {
		", but miss.";
		return;
	}
	
	damage = weapon.getLightDamage(target);
	//add any player damage mods
	target.receiveDamage(weapon,damage);
},

carefulShot(target) {
	ACmodifier += weapon.getHeavyACmodifier();
	hitRoll = rollToHit();
	log "\nPlayer rolls a " + hitRoll;
	hitRoll += weapon.getHeavyHitModifier(target);
	log "\nplus weapon mod = " + hitRoll;
	targetAC = target.getModifiedAC(weapon);
	log "\nTarget AC " + targetAC;
		
	if (hitRoll < targetAC) {
		", but miss.";
		return;
	}
	
	damage = weapon.getHeavyDamage(target);
	//add any player damage mods
	target.receiveDamage(weapon,damage);
},

/** The player's basic roll to hit. */
rollToHit() {
	return d20;
},

/** Return the player's AC, modified by any personal mods and weaknesses etc to the given weapon. */
getModifiedAC(weapon) {
	//add mods here
	//TO DO: add mod for armour!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return armourClass;
},

/** Handle receiving damage, applying reductions where applicable and deducting what's left from hit points. */
receiveDamage(weapon,damage) {
	//reduce damage by any modifiers
	
	damage = armour.onHit(damage);

	if (damage < 1)
		damage = 1;
	
	", hitting for " + damage + " damage.";
	hitPoints -= damage;
	
	if (hitPoints <= 0) {
		"\n\nThe blow kills you!";
		flag self dead;
		combatActionFn = 0;
		purge all;
		//TO DO: deactivate inventory
		"\nDo you want to be " + makeHot("resurrected?",self,&resurrect);
			
	}
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
		//if (armour is broken)
	//		"Your armour is wrecked in the process.";
		
	}
	
	hitPoints -= damageAfterArmour;
	log "\nplayer hitpoints " + hitPoints;
	
	if (hitPoints <= 0) {
		"\n\nThe " + attacker.name + " kills you!";
		flag self dead;
		combatActionFn = 0;
		purge all;
		//TO DO: deactivate inventory
		"\nDo you want to be " + makeHot("resurrected?",self,&resurrect);
			
	}
},

/** Revive the dead player, and return them to the starting room.*/
resurrect() {
	hitPoints = 15;
	unflag self dead;
	teleport(arena);
	
},

queueTest(item) {
	"\n\nYour perform test option " + item;
	
}
;




