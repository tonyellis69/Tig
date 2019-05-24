
//some combat state consts
const notInCombat = 0;
const initiatingCombat = 10;
const inCombat = 20;
const chasingPlayer = 30;

CombatantClass has hitPoints,  opponent, initiative, combatActionFn, chooseCombatAction, combatState = notInCombat, ACmodifier, armourClass, toHitModifier,

/** Reset stuff for a new round of combat. */
initialiseCombat() {
	ACmodifier = 0;
	toHitModifier = 0;
},

/** Return this combatant's modified AC, including any weakness/resistance to the given weapon.*/
getModifiedAC(weapon) {
	return armourClass + ACmodifier;
}; 


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
	player.initialiseCombat();
	
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


	openWindow(menuWindow);
	setWindow(menuWindow);
	if (robots[0].distance > meleeDistance && player.weapon is not ranged) {
		makeHot("Do nothing",player,&queueDoNothing,"You wait to see what happens");	
		setWindow(mainWindow);
		return;
	}
	
	for each robot of robots {
		if (player.weapon is ranged) {
			if (first) {
				makeHot("Quick shot",player,&queueFastShot,robot,"You aim a quick shot at the " + robot.name());
				makeHot("Careful shot",player,&queueCarefulShot,robot,"You aim carefully and fire at the " + robot.name());
			}
			else {
				makeHotAlt("Quick shot",player,&queueFastShot,robot,"You aim a quick shot at the " + robot.name());
				makeHotAlt("Careful shot",player,&queueCarefulShot,robot,"You aim carefully and fire at the " + robot.name());
			}
		}
		else {
			
			//makeHot("Hit\n",player,&queueHit,attacker,narrative);	
			//makeHot("Block\n",player,&queueBlock,attacker,narrative);
			//makeHot("Dodge",player,&queueDodge,attacker,narrative);
			if (first) {
				makeHot("Fast hit",player,&queueFastHit,robot,"You aim a quick strike at the " + robot.name());
				makeHot("Heavy hit",player,&queueHeavyHit,robot,"You swing a heavy blow at the " + robot.name());
			} else { 
				makeHotAlt("Fast hit",player,&queueFastHit,robot,"You aim a quick strike at the " + robot.name());
				makeHotAlt("Heavy hit",player,&queueHeavyHit,robot,"You swing a heavy blow at the " + robot.name());
				
			}

		}
	}
	
	makeHot("Do nothing",player,&queueDoNothing,"You wait to see what happens");
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


