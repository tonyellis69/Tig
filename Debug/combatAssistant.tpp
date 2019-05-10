
//some combat state consts
const notInCombat = 0;
const initiatingCombat = 10;
const inCombat = 20;
const chasingPlayer = 30;

CombatantClass has hitPoints,  opponent, initiative, combatActionFn, initialiseCombatRound, chooseCombatAction, combatState = notInCombat; 


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
	
		
	combatants = [];

	
},


/** Make it clear to the player that they're in a fight. */
warningMsg() {
	enemyTEMP = combatants[0];
	//TO DO: this is temp! Fix!
	
	
	"\n\nYou're being attacked. You should probably " 
	+ makeHot("do something", combatAssistant,&showPlayerOptions,enemyTEMP) + ". ";
},



/** Display the player's options for attacking this enemy.*/
showPlayerOptions(attacker) {
	//purge showPlayerOptions, self;
	openWindow(menuWindow);
	setWindow(menuWindow);
	if (attacker.distance > meleeDistance && player.weapon is not ranged) {
		makeHot("Do nothing",player,&queueNothing,attacker);	
		setWindow(mainWindow);
		return;
	}
	
	narrative = player.weapon.attackMsg(attacker);
	if (player.weapon is ranged) {
		
		makeHot("Fire " + player.weapon.name,player,&queueShot,attacker,narrative);
		//makeHotAlt("Test",player,&queueTest,"This is narrative text 1");
		//makeHotAlt("Test",player,&queueTest,"This is narrative text 2");
		//makeHotAlt("Test",player,&queueTest,"This is narrative text 3");
	}
	else {
		makeHot("Hit\n",player,&queueHit,attacker,narrative);	
		makeHot("Block\n",player,&queueBlock,attacker,narrative);
		makeHot("Dodge",player,&queueDodge,attacker,narrative);

	}
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


