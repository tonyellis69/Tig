#include coreObj.tpp

/** The basic weapon class . */
//CGameObj CWeapon has defence,
CItem CWeapon has  tier = 1,

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
getDamage(points) {
	return resultTable(tier,points);
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

};



/** Prototype melee weapon. */
CWeapon CMeleeWeapon;

CMeleeWeapon CClub;


CClub CWrench has name "adjustable wrench", description "Almost two feet long and satisfyingly
	heavy.", initial "A large adjustable wrench lies here.";

CClub CPipe has name "length of pipe", description "This weighty length of metal
	makes a decent club.", defence 10, initial "A length of pipe lies on the floor.";

CMeleeWeapon fists has name "fists, ",

bash(target) {
	damage = getDamage();

	"You punch the ";



	target.combatName();

	", ";

	//target.receiveBash(target,damage);
};


/** Basic gun class. */
CWeapon CGun has flag ranged;

CGun CBlaster has name "MK1 blaster", description "A standard Mark I blaster pistol.";


//////////////Robot weapons////////////////////////////////////////

CClub metalArm has name "metal arm", description "A hard metal arm,";

CClub brushArm has name "whirling brush arm", description "An arm ending in a whirling brush,";


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
