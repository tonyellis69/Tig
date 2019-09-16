
//some combat state consts
const notInCombat = 0;
const initiatingCombat = 10;
const inCombat = 20;
const chasingPlayer = 30;

CombatantClass has hitPoints, maxHitPoints, opponent, initiative, combatState = notInCombat, defenceTier = 1, defencePoints = 7,

/** Return this combatant's current defence score. */
getDefence() {
	return resultTable(defenceTier,defencePoints);
}
;
