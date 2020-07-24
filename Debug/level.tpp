/* Code describing level. */


#include global.tpp
#include combatClass.tpp
#include coreObj.tpp
#include player.tpp
#include weapons.tpp
#include items.tpp
#include gear.tpp
#include robot.tpp
#include powerPlant.tpp


export IHexWorld, action, player, onChooseTurnAction,onHitPlayer,onReceiveDamage,
	isNeighbour, botA, botB, onMouseOver, msgFn, popupWin, getStatus,
	isLineOfSight;


const smallMap, mediumMap, largeMap;

const actSerial = 0x8000, actNone = 0x0, actChasePlayer = 0x1, actAttackPlayer = 0x8002,
actCombatPassive = 0x3, actTrackPlayer = 0x4, actPlayerMeleeAttack = 0x8005,
actPlayerTurnToAttack = 0x8006, actDead = 0x7, actDither = 0x8, 
actShootPlayer =0x8009, actTurnToTarget = 0x0A, actTurnToTargetDest = 0x0B,
actPlayerMove = 0x0C, actPlayerShoot = 0x800D, actWander = 0x0E, actMoveTo = 0x0F;

const goalWander, goalKillPlayer;

testRoom has size mediumMap;

CRobot2 has name, hitPoints, action = actNone,
onReceiveDamage(attacker,damage) {
	if (action == actDead) {
		IHexWorld.msgFn("\nYou're flogging a dead robot");
		return;
	}

	hitPoints -= damage;

	if (hitPoints <= 0) {
		IHexWorld.msgFn("\nYou trash " + name + "!");
		action = actDead;
		return;
	}

	IHexWorld.msgFn("You hit " + name);
},
onChooseTurnAction() {
	if (action == actDead)
			return; //TO DO never seem to get here!!!!

	action = actWander;
	return;

	result = isNeighbour(player);

	 if (result == 1)
	 		action = attackOrNot();
		else {
			result = isLineOfSight(player);
			if (result == 1)
				action = actShootPlayer;
			else
				action = actChasePlayer;
	
			


			// roll = d4;
			// if (roll == 1)
			// 	action = actShootPlayer;
			// else
			// 	action = actChasePlayer;

		}
},
onHitPlayer() {
		IHexWorld.msgFn("\n" + name + " hits you!");
},
onMouseOver() {
		str = name + "\nA servobot in a bronze-metallic casing.";
		str += "\nStatus: ";
		if (action == actChasePlayer)
			str += "rushing toward you!";
		if (action == actAttackPlayer)
			str += "about to hit you!";
		if (action == actDither)
				str += "shifting uncertainly.";

		IHexWorld.popupWin(str);
},

getStatus() {
	str = name + "\nA servobot in a bronze-metallic casing.";
	str += "\nStatus: ";
	if (action == actChasePlayer)
		str += "rushing toward you!";
	if (action == actAttackPlayer)
		str += "about to hit you!";
	if (action == actShootPlayer)
		str += "about to shoot you!";
	if (action == actDither)
			str += "shifting uncertainly.";
		return str;
},

attackOrNot() {
	roll = d2;
	if (roll == 1) {
		return  actDither;
	}
	return actAttackPlayer;
},
isNeighbour(obj) {},
isLineOfSight(obj) {};




CRobot2 botA has name "Robot A", hitPoints 3;
CRobot2 botB has name "Robot B", hitPoints 3;


IHexWorld has msgFn() { },
popupWin(text) { };

/** Basic template for portable items. */
CItem has name;

CItem CWeapon has damage,
equip() {
	player.equippedWeapon = self;
	IHexWorld.msgFn("\nEquipped " + name + "!");
},
getDamage() {
	return damage;
};

CItem CShield has
equip() {
	player.equippedShield = self;
	IHexWorld.msgFn("\nEquipped " + name + "!");
};

CWeapon monkeyWrench has name "monkey wrench", damage = 1;
CShield shield has name "shield";
CWeapon blaster has name "blaster", damage = 2;

CGroupItem has name;

CScenery has name;
CScenery desk;

CDoor has name "door";

export monkeyWrench, shield, blaster, name, inventory, onTake, onInventory,
	onDrop, onEquip, CItem, CGroupItem, getWeaponDamage, equippedShield,
	desk, CDoor, CRobot2;
/** Initialisation code.*/
init() {





	//start player in the right room:
	move player to arena;
	move wrench to player;
	//move pipe to player;
	move ablat to player;
	//move blaster to player;
	//move medpack to player;
	move smallPowerCell to player;
	move basicConverter to player;
	move basicAccumulator to player;
	move basicDistributor to player;
	move basicShieldGen to player;
	move basicSuit to player;
	//move robot to testRoomSouth;
	player.weapon = wrench;
	player.armour = ablat;
	updateInventory();

	basicConverter.attachCell(smallPowerCell);
	basicConverter.attachAccumulator(basicAccumulator);
	basicDistributor.attachAccumulator(basicAccumulator);
	basicShieldGen.attachDistributor(basicDistributor);
	basicSuit.attachDistributor(basicDistributor);


	player.converter = basicConverter;
	player.distributor = basicDistributor;
	player.suit = basicSuit;
	player.shieldGen = basicShieldGen;

	//TO DO: handle automatically!



	//entranceHub = powerPlant.createMap();

	//move player to entranceHub.hubRoom;

	"A short first line.";

	"\nZhis is a longer second line, about three times as long at least, definitely.";
	"\nAnother short line.";
	"\nAnd another long line, are we seeing any kind of pattern yet in all of this?";
	"\n\nThat was a line gap, did it make a difference?";
	"\n\n\nAnd that was a double line gap.";

	"\nNow here is a section of text that is going to run on for some lines, on and on
	and on in the interest of seeing what difference that makes. Of the trail of ink
	there is no end, as the man said. How many lines is this, I wonder. Enough to
	make a difference? We shall see.";

	"\n\nAnother line gap. Done.";
	"\nline one";
	"\nline two ";
	makeHot("Test1",IHexWorld,&msgFn);
	" space text ";
	makeHot("Test2",IHexWorld,&msgFn);
	"\nline three";
///	"\nline six";
	//"\nline seven";
//	"\nline eight";
	//"\none more line to cause a scroll...";
	//"\n...this one";

/*
	"\n\nAnother line gap. Done. x";

	"\nline one x";
	"\nline twox";
	"\nline three x";
	"\nline five x";
	"\nline six x";
	"\nline seven x";
	"\nline eight x";
	"\none more line to cause a scroll... @";
	"\n...this one x";
*/
/*
	"\n111111111111111111111111";
	"\n222222222222222222222222";
	"\n333333333333333333333333";
	"\n444444444444444444444444";
	"\n555555555555555555555555";
	"\n666666666666666666666666666666666666666666666666666";
	"\n777777777777777777777777777777777777777777777777777";
	"\n888888888888888888888888888";
	"\n999999999999999999999999999";
	"\nAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	"\nBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
	"\nCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
	"\nDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDX";
	"\nEEEEEEEEEEEEEEEEEEEEEEE";
	"\nFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";
*/


	liveList[] += basicConverter;

	globalLook();

	gameTurn();


};


CRoom arena has name "Bare room", description {
"This is a plain, unremarkable room.";
}, southTo testRoomSouth, swTo testRoomSouthWest;








CRoom testRoomSouth has name "Test room south",  description {
"This is a test room.";
},
northTo arena;


-> CServobot robot;

/*
-> CRobot cleaningBot has name "cleaning bot", initialText "a cleaning bot polishes the floor",
description "A low, four-legged machine with orange brushes for feet.",
weapon = brushArm, armour = lightRoboArmour, distance = 1, //was 5
armourClass = 10
;
*/


CRoom testRoomSouthWest has name "Test room southwest",  description {
"This is a test room.";
},
neTo arena;

CWrench wrench;
CPipe pipe;
CAblat ablat;
CBlaster blaster;
CMedpack medpack;

CPowerCell smallPowerCell has name "small powercell",
description() {
	"A small but weighty white plastic octagon.";
};

CConverter basicConverter has name "basic power converter",
description	"A rectangular device with a prominent slot."
;

CAccumulator basicAccumulator has name "basic power accumulator",
description "A cylindrical device with a number of flashing lights.";

CDistributor basicDistributor has name "basic power distributor",
description "A flatish, dark plastic device.";

CShieldGen basicShieldGen has name "basic shield generator",
description	"A hemispherical device.";

CSuit basicSuit has name "basic actuator suit",
description "A light, one-piece outfit with a network of tiny motors and support struts woven into it.";
