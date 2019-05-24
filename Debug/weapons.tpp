#include coreObj.tpp

/** The basic weapon class . */
//CGameObj CWeapon has defence, 
CItem CWeapon has defence, fastHitModifier, heavyHitModifier, lightDamageModifier, heavyDamageModifier,
fastACmodifier, heavyACmodifier,

/** Make this the player's equipped weapon, or unequip it if it already is. */
equip() {
	if (player.weapon == self) {
		player.weapon = fists;
	}
	else {
		player.weapon = self;
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

listObjectOptions() {
	CItem::listObjectOptions();
	msg = makeHot(name,self,&click);
	if (player.weapon == self) {
		msg = "You unhand the " + msg + ".";
		makeHot("Unequip",self,&equip,msg);
	}
	else {
		msg = "You equip the " + msg + ". ";
		makeHot("Equip",self,&equip,msg);
	}
	
},

getFastHitModifier(target) {
	return fastHitModifier;
},

getHeavyHitModifier(target) {
	return heavyHitModifier;
},

getLightDamage(target) {
	return getDamage() + lightDamageModifier;
},

getHeavyDamage(target) {
	return getDamage() + heavyDamageModifier;
},

getFastACmodifier() {
	return fastACmodifier;
},

getHeavyACmodifier() {
	return heavyACmodifier;
};



/** Prototype melee weapon. */
CWeapon CMeleeWeapon has 

/** Returns false if the weapon fails to block the given damage. */ 
doesBlock(damage) {
	if (defence > damage)
		return true;
	return false;
};

CMeleeWeapon CClub has fastHitModifier = -2, heavyHitModifier = 2, lightDamageModifier =  -2, heavyDamageModifier = 2,
fastACmodifier = 2, heavyACmodifier = -2;


CClub CWrench has name "adjustable wrench", description "Almost two feet long and satisfyingly
	heavy.", defence 8, initial "A large adjustable wrench lies here.",
	
getDamage() {
	return d8;	
}
;

CClub CPipe has name "length of pipe", description "This weighty length of metal 
	makes a decent club.", defence 10, initial "A length of pipe lies on the floor.",
	
getDamage() {
	return d8;	
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
CWeapon CGun has flag ranged, fastHitModifier = -3, heavyHitModifier = 3, lightDamageModifier =  -3, heavyDamageModifier = 3,
fastACmodifier = 3, heavyACmodifier = -3;


CGun CBlaster has name "MK1 blaster", description "A standard Mark I blaster pistol.", 
getDamage() {
	return d8;
};


//////////////Robot weapons////////////////////////////////////////

CClub metalArm has name "metal arm", description "A hard metal arm,", defence 6,

getDamage() {
	return d8;
}
;

CClub brushArm has name "whirling brush arm", description "An arm ending in a whirling brush,", defence 8,

getDamage() {
	return d6;
}
;


//////////////////////////////Armour


/** The basic armour class, ho ho. */
CItem CArmour has protection, cover = 20, deterioration,

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
	//TO DO remove!!!!!!!!!!!!!!!!!!!!!
	return damage;
},


/** Respond to taking damage, returning the resultant damage.*/
onHit(damage) {
	roll = d20;
	log "\nCover: " + cover + " ";
	if (roll <= cover) {
		damage = damage - protection;
		log "Armour reduction: " + protection; 
	} else {
		log "Armour reduction: none. (roll: " + roll + ")";
	}
	cover = cover - deterioration;
	
	if (cover <= 0)
		"\n\n" + name + " falls apart!";
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

CArmour CAblat has protection = 1, deterioration = 3, flag nonCount, name "Ablat body armour", description "Basic polysteel-fibre body armour.";

CArmour noArmour has name "no armour", description "No armour at all.";

CArmour lightRoboArmour has protection = 3, deterioration = 3, name "light roboArmour", description "Light robot armour.";

