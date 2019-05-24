


CGameObj CombatantClass player has onObject, backDirection, name "player", hitPoints 25, armour,
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



/** Queue an attack on the given opponent. */
queueFastHit(target) {
	opponent = target;
	combatActionFn = &fastHit;
	combatAssistant.register(self);
},

queueHeavyHit(target) {
	opponent = target;
	combatActionFn = &heavyHit;
	combatAssistant.register(self);
},

queueFastShot(target) {
	opponent = target;
	combatActionFn = &fastShot;
	combatAssistant.register(self);
},

queueCarefulShot(target) {
	opponent = target;
	combatActionFn = &carefulShot;
	combatAssistant.register(self);
},



/** Queue an attempted block on the given opponent's attack. */
queueBlock(target) {
	"\n\nYou choose to block...\n";
	opponent = target;
	combatActionFn = &block;
	combatAssistant.register(self);
},

/** Queue an attempt to dodge the given opponent's attack. */
queueDodge(target) {
	"\n\nYou choose to dodge...\n";
	opponent = target;
	combatActionFn = &dodge;
	combatAssistant.register(self);
},

/** Queue a decision to do nothing this round.*/
queueDoNothing() {
	combatActionFn = &doNothing;
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
	
	hitRoll += weapon.getFastHitModifier(target);
	targetAC = target.getModifiedAC(weapon);
	
	log "\nPlayer ACmodifier: " + ACmodifier + " hit roll + mod: " + hitRoll + 
	" vs robot AC: " + targetAC;
		
	if (hitRoll < targetAC) {
		", but miss.";
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
	hitRoll += weapon.getHeavyHitModifier(target);
	targetAC = target.getModifiedAC(weapon);
	
	log "\nPlayer ACmodifier: " + ACmodifier + " hit roll + mod: " + hitRoll + 
	" vs robot AC: " + targetAC;
	
	if (hitRoll < targetAC) {
		", but miss.";
		return;
	}
	
	damage = weapon.getHeavyDamage(target);
	//add any player damage mods
	target.receiveDamage(weapon,damage);
},

/** Attempt a fast shot on the target. */
fastShot(target) {
	ACmodifier += weapon.getFastACmodifier();
	hitRoll = rollToHit();
	
	hitRoll += weapon.getFastHitModifier(target);
	targetAC = target.getModifiedAC(weapon);
		
	if (hitRoll < targetAC) {
		", but miss.";
		return;
	}
	
	damage = weapon.getLightDamage(target);
	//add any player damage mods
	target.receiveDamage(weapon,damage);
},

carefulShot(target) {
	ACmodifier += weapon.getFastACmodifier();
	hitRoll = rollToHit();
	
	hitRoll += weapon.getFastHitModifier(target);
	targetAC = target.getModifiedAC(weapon);
		
	if (hitRoll < targetAC) {
		", but miss.";
		return;
	}
	
	damage = weapon.getLightDamage(target);
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




