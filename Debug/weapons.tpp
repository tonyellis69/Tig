#include coreObj.tpp

/** The basic weapon class . */
//CGameObj CWeapon has defence, 
CItem CWeapon has defence, 

/** Make this the player's equipped weapon, or unequip it if it already is. */
equip() {
	if (player.weapon == self) {
		"\nYou unhand the " + self.name;
		player.weapon = fists;
	}
	else {
		player.weapon = self;
		"\nYou equip the " + self.name + ". ";
	}
},	

/** Dropping a weapon unequips it. */
drop() {
	CItem::drop();
	if (player.weapon == self) {
		player.weapon = fists;	
	}
},

/** The damage done by this weapon for a particular hit. */
getDamage() {
	return 1;
},

/** Overload the basic menu creator to offer equipping\uneqipping. */
createMenu() {
	CItem::createMenu();
	if (player.weapon == self)
		makeHot("Unequip",self,&equip);
	else
		makeHot("Equip",self,&equip);
	
}
;

/** Prototype melee weapon. */
CWeapon CMeleeWeapon has 

/** Returns false if the weapon fails to block the given damage. */ 
doesBlock(damage) {
	if (defence > damage)
		return true;
	return false;
},

bash(target) {
	damage = getDamage();
	
	//if (self == fists)
	//	"You punch the ";
	//else {
		roll = d3;
		if (roll == 1)
			"You swing the " + name + " at the ";
		if (roll == 2)
			"Hefting the " + name + ", you swing it at the ";
		if (roll == 3)
			"You strike with the " + name + " at the ";
	//}
	
	if (target is stumbling) {
		damage = damage + 2;
	}
	
	target.combatName(); 
	
	", ";
	
	target.receiveBash(target,damage);	
};


CMeleeWeapon CWrench has name "adjustable wrench", description "Almost two feet long and satisfyingly
	heavy.", defence 8, initial "A large adjustable wrench lies here.",
	
getDamage() {
	return d10;	
}
;

CMeleeWeapon CPipe has name "length of pipe", description "This weighty length of metal 
	makes a decent club.", defence 10, initial "A length of pipe lies on the floor.",
	
getDamage() {
	return d12;	
}
;

CMeleeWeapon fists has name "fists, ", defence 1,

bash(target) {
	damage = getDamage();
	
	"You punch the ";
	
	if (target is stumbling) {
		damage = damage + 2;
	}
	
	target.combatName(); 
	
	", ";
	
	target.receiveBash(target,damage);	
},

getDamage() {
	return 1;
};


/** Basic gun class. */
CWeapon CGun has flag ranged,

/** Returns a suitable message for choosing to attack with a gun.*/
attackMsg(target) {
	roll = d2;
	if (roll == 1)
		msg = "You fire at the ";
	if (roll == 2)
		msg = "You aim a shot at the ";
	
	return msg + target.name();
},

shoot(target) {
	damage = getDamage();
	
	/*roll = d3;
	if (roll == 1)
		"You fire your " + name + " at the ";
	if (roll == 2)
		"You fire your " + name + " at the ";
	if (roll == 3)
		"Zap! You fire the " + name + " at the ";
	
	if (target is stumbling) {
		damage = damage + 2;
	}
	
	print target.combatName() + ", ";
	*/
	
	target.receiveShot(target,damage);
};

CGun CBlaster has name "MK1 blaster", description "A standard Mark I blaster pistol.", 
getDamage() {
	return 5 + d5;
};


//////////////Robot weapons////////////////////////////////////////

CWeapon metalArm has name "metal arm", description "A hard metal arm,", defence 6,

getDamage() {
	return d8 + 4;
}
;

CWeapon brushArm has name "whirling brush arm", description "An arm ending in a whirling brush,", defence 8,

getDamage() {
	return d6;
}
;


//////////////////////////////Armour


/** The basic armour class, ho ho. */
CGameObj CArmour has absorb = 0, hitPoints = 0,

/** Make this the player's equipped armour, or unequip it if it already is. */
equip() {
	if (player.armour == self) {
		"\nYou take off the " + self.name;
		player.weapon = fists;
	}
	else {
		player.armour = self;
		"\nYou put on the " + self.name + ". ";
	}
},	

/** Dropping armour unequips it. */
drop() {
	CGameObj::drop();
	if (player.armour == self) {
		player.armour = noArmour;	
	}
},

/** Return the reduced damage after absorption. Broken armour absorbs nothing. */
getReduction(damage) {
	if (self is broken)
		return damage;
	damage = damage - absorb;
	hitPoints = hitPoints - 1;
	if (hitPoints < 0)
		flag self broken;
	if (damage < 1)
		return 1;
	return damage;
},



/** Overload the basic menu creator to offer equipping\uneqipping. */
createMenu() {
	CGameObj::createMenu();
	if (player.armour == self)
		makeHot("Unequip",self,&equip);
	else
		makeHot("Equip",self,&equip);
	
}
;

CArmour CAblat has absorb = 4, hitPoints = 4, flag nonCount, name "Ablat body armour", description "Basic polysteel-fibre body armour.";

CArmour noArmour has name "no armour", description "No armour at all.";

CArmour lightRoboArmour has absorb = 1, hitPoints = 2, name "light roboArmour", description "Light robot armour.";

