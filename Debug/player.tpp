


CGameObj CombatantClass player has onObject, backDirection, name "player", hitPoints 3, maxHitPoints 25, armour,
weapon, distributor, suit, shieldGen, converter, action,


onReceiveDamage(attacker,damage) {

	CConsole.msgFn("\n" + attacker.name + " swings at you!");

	hitPoints -= damage;

	if (hitPoints <= 0) {
		CConsole.msgFn("\nOh no, you're dead!");
		action = actDead;
		return;
	}


},

/** An attempt by the player to move in the given direction to a new location.*/
attemptMove (direction) {
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

	moveTo(destination);
},

/** Move the player to the destination, displaying the room description and triggering
	any necessary messages. */
moveTo(destination) {
	for each obj of player.parent
		obj.onPlayerExit();

	move player to destination;

	purge all;

	message "roomChange", destination;
	destination.look();

	for each obj of destination
		obj.onPlayerEntry();
},



/** Handle receiving damage, applying reductions where applicable and deducting what's left from hit points. */
receiveDamage(attacker,damage) {
	//reduce damage by any modifiers

	"\n\nThe " + attacker.name() + " swings at you for " + damage + " points!";


	hitPoints -= damage;
	hitPoints = max(hitPoints,0);

	message "HPchange", hitPoints;

	if (hitPoints == 0) {
		"\n\nThe blow kills you!";
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
	moveTo(arena);

},

queueTest(item) {
	"\n\nYour perform test option " + item;

},

/** Write a hot text for attacking the given target with current weapon configuration. */
writeAttackOption(target) {
	choiceTxt = "You swing at the " + target.name() + " with your " + weapon.name() + " ";
	makeHot("Hit",self,&hit,target,choiceTxt);
},

/** Attempt to hit the target with the current weapon. */
hit(target) {
	damage = suit.getDamage();
	defence = target.getDefence();
	"damage " + damage + " defence " + defence;
	damage = damage - defence;
	if (damage < 1) {
		"...the blow glances harmlessly off the " + target.name() + "'s casing.";
		return;
	}
	target.receiveDamage(damage);
},

/** Return the player's current defence score based on shield generator etc. */
getDefence() {
	return shieldGen.getDefence();
},

/** Set the power levels of the player's current distributor. */
setDistributor(offencePower,defencePower) {
	log "\nPlayer offence " + offencePower + " defence " + defencePower;
	distributor.setPowerLevels(offencePower,defencePower);
}

;
