#include coreObj.tpp

/** The basic weapon class . */

CItem CMedpack has name "medpack", initial "A small medpack lies here.", 
description "A compact bundle of automated diagnostic devices and drug distribution systems.",
healing = 10,


listObjectOptions() {
	CItem::listObjectOptions();
	msg = "You activate the medpack";
	makeHot("Use",self,&use,msg);
},

use() {
	". Stabbing you with hollow needles, the device shoots drugs into your bloodstream then falls away.";
	player.hitPoints += healing;
	if (player.hitPoints > player.maxHitPoints)
		player.hitPoints = player.maxHitPoints;
	destroy();
};

