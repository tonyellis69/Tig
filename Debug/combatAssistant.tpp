
//some combat state consts
const notInCombat = 0;
const initiatingCombat = 10;
const inCombat = 20;
const chasingPlayer = 30;

CombatantClass has hitPoints, maxHitPoints, opponent, initiative, combatActionFn, chooseCombatAction, combatState = notInCombat, ACmodifier, armourClass, toHitModifier, blockTarget,

/** Reset stuff for a new round of combat. */
initialiseCombatRound() {
	ACmodifier = 0;
	toHitModifier = 0;
	blockTarget = 0;
},

/** Return this combatant's modified AC, including any weakness/resistance to the given weapon.*/
getModifiedAC(attackerWeapon) {
	if (blockTarget == player) { //TO DO: more accurate to check if blockTarget is sender
		log "\nblockTarget is player";
		ACmodifier += getBlockMod(attackerWeapon);
	}
	
	return armourClass + ACmodifier;
},

/** Return this combatant's block modifier. */
getBlockMod(attackerWeapon) {
	return self.weapon.blockMod;
}
; 


/** An object for keeping track of fights and the combatants involved.*/
combatAssistant has combatants, robots, 

/** Add the given combatant to the list of those whole will fight later in the turn */
register(combatant) {
	flag self active;
	combatants[] += combatant;
},

/** Remove this combatant from the current fight. */
unregister(combatant) {
	combatants[] -= combatant;
},

/** All combatants perform their chosen combat action for this turn in initiative order.*/
doCombatRound() {
	player.initialiseCombatRound();
	
	sort> combatants by &initiative;
	
	//Do player first, for now...
	player.combatAction();
	combatants[] -= player;
	
	for each combatant of combatants {
		combatant.combatAction();
		if (player is dead) {
			playerDeath();
			return;
		}
	}
	
	//set up next round
	combatants[] -= player;
	
	//ask opponents to choose next round's action now
	for each combatant of combatants {
		combatant.initialiseCombatRound();
		combatant.chooseCombatAction();
	}
	
	if (combatants > 0) 
		warningMsg();
	
	robots = combatants;
	combatants = [];
},


/** Make it clear to the player that they're in a fight. */
warningMsg() {
	//TO DO: this is temp! Fix!
	
	purge showPlayerOptions, self;
	
	print style("markOn") +
	"\n\n[You're being attacked. You should probably " 
	+ makeHot("do something", combatAssistant,&showPlayerOptions) + ".]" + style("markOff");
	//"\n\nYou're being " + makeHot("attacked", combatAssistant,&showPlayerOptions,enemyTEMP) + ".";
},



/** Display the player's options for attacking this enemy.*/
showPlayerOptions() {
	//purge showPlayerOptions, self;


	openWindow menuWindow modal;
	setWindow(menuWindow);
	if (robots[0].distance > meleeDistance && player.weapon is not ranged) {
		makeHot("Do nothing",player,&queueCombatAction,&doNothing,0,"You wait to see what happens");	
		setWindow(mainWindow);
		return;
	}
	
	roll = d100;
	
	for each robot of robots {
		if (player.weapon is ranged) {
			makeHotAlt("Quick shot",player,&queueCombatAction,&fastShot,robot,"You aim a quick shot at the " + robot.name());
			makeHotAlt("\nCareful shot",player,&queueCombatAction,&carefulShot,robot,"You aim carefully and fire at the " + robot.name());

		}
		else {

			fastRoll = roll % 6 + 1;
			if (fastRoll == 1)
				fastMsg = "You aim a quick strike at the " + robot.name();
			if (fastRoll == 2)
				fastMsg = "Hastily, you swing your " + player.weapon.name() + " at the " + robot.name();
			if (fastRoll == 3)
				fastMsg = "Trying to keep your distance, you jab at the " + robot.name();
			if (fastRoll == 4)
				fastMsg = "Moving fast, you aim a quick strike at the " + robot.name();
			if (fastRoll == 5)
				fastMsg = "Keeping your guard up, you aim a hasty swing at the " + robot.name();
			if (fastRoll == 6)
				fastMsg = "Weaving defensively, you chance a swift strike at the " + robot.name();
			
			heavyRoll = roll % 6 + 1;
			if (heavyRoll == 1)
				heavyMsg = "You swing a heavy blow at the " + robot.name();
			if (heavyRoll == 2)
				heavyMsg = "Taking your time, you swing at the " + robot.name() + " as hard as you can";	
			if (heavyRoll == 3)
				heavyMsg = "Standing your ground, you swing your " + player.weapon.name() + " at the " + robot.name();	
			if (heavyRoll == 4)
				heavyMsg = "Keeping your cool, you heave a solid blow at the " + robot.name();
			if (heavyRoll == 5)
				heavyMsg = "Focusing on damage over defence, you swing at the " + robot.name();
			if (heavyRoll == 6)
				heavyMsg = "Moving with strength, not speed, you hammer at the " + robot.name();
			
			if (player.stamina < player.weapon.staminaHeavyReq) {
				heavyMsg = "You try a heavy swing at the " + robot.name() + " but you don't quite have the strength";	
			}
			
		
			makeHotAlt("Fast hit",player,&queueCombatAction,&fastHit,robot,fastMsg);
			makeHotAlt("\nHeavy hit",player,&queueCombatAction,&heavyHit,robot,heavyMsg);	

			
			blockMsg = "You raise your " + player.weapon.name() + " to fend off the " + robot.name() + "'s attack";
			makeHotAlt("Block",player,&queueCombatAction,&block,robot,blockMsg);
			
			

		}
	}
	
	makeHot("\nDo nothing",player,&queueCombatAction,&doNothing,0,"You wait to see what happens");
	setWindow(mainWindow);
},


/** The player has died so wrap up this combat gracefully.*/
playerDeath() {
	//for each combatant of combatants 
	//	unflag combatant inCombat;
	combatants = 0;
	unflag self active;
},

/** When the player clicks 'Continue' clear the screen and refresh.*/
continueSub() {
	unpause;
	
	clearWindow;
	player.parent.look();
	gameTurn();
}

;


