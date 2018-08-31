/* Code describing level. */

#include global.tpp
#include coreObj.tpp


/** Initialisation code.*/
init() {
	//start player in the right room:
	move player to gallery; //turbineHall;
};


CRoom foyer has name "Decayed foyer",  description {
"It must have looked pretty impressive about a hundred years ago. Now a layer of dust shrouds everything in grey. Beneath it, expensive-looking couches moulder, and stylish chairs and tables age. Only the long, elaborately contoured reception desk still dominates the room."; 
}, 	
northTo = octHall;

-> CGameObj box has name "pale plastic box", initial "A pale plastic box lies discarded here.",
description "It isn't really any kind of colour, just pale.";
-> CGameObj box2 has name "dark plastic box", initial "Someone has left a dark plastic box here.",
description "Made from a dull, black-but-not-really-black plastic.";
-> CGameObj fromitz has name "fromitz board", initial "An old fromitz board gathers dust on the floor.",
description "It looks like every other fromitz board you've ever seen.";

-> CScenery  CSupporter desk has name "reception desk", pushed = 0, initial { text = "This formidable reception desk stretches almost the length of the room. ";
if (pushed == 1)
	text = text + " It has recently been pushed.";
return text;
}
,  description "An imposing block of moulded plastic, now as 
dusty as everything else.", 
push {  
	pushed = 1;
	"\n\nStraining your back, you manage to push the desk a few centimetres.";
	
};

-> -> CGameObj doll has name "Russian doll", initial "Somewhat incongrously, a painted Russian doll sat on the floor.",
description "Carved from wood and painted in bright, patterned colours.";
-> -> CGameObj bug has name "tiny microphone", description "About the size of my littlest thumb-nail.";



CRoom octHall has name "Octagonal hall", description "A large, octagonal junction, as dead and dusty as
everywhere else.", 
westTo = pipeRoom, neTo = nePassage, southTo = foyer, northTo = rustyDoor;


CRoom pipeRoom has name "Pipe room", description "A large, dark room dominated by inumerable outsized pipes emerging from the shadows, walls, floor and ceiling to converge
in a large, central piece of machinery.",
eastTo octHall;

CCorridor nePassage has name "Angular passageway", description "A featureless passageway running
northeast - southwest.",
swTo octHall, neTo junction;

CRoom junction has name "Small junction", description "The passage from the southwest ends here.",
westTo turbineHall, eastTo maintenance, swTo nePassage;

CRoom turbineHall has name "Turbine hall", description {
"The bottom of a vertical chamber that must fill most of the remaining space of the building.
Enormous cyclindrical machines rise into the dark, towering over you and the rusty metal crates 
lying discarded nearby. Giant pipes snake among the machines, as does a maintenance gantry just a 
few metres overhead.";},
eastTo junction;


-> CScenery gantry has name "maintenance gantry", description "Slightly too high to reach, it 
leads off tantalisingly into the dark.",
climb {
	if (player.onObject != crate) {
		"\n\nThe gantry is too high to reach.";
	}
	if (player.onObject == crate) {
		if (crate.pushed == true) {
			player.onObject = nothing;
			"\n\nStanding on the crate, you are able to climb onto the gantry.\n";
			teleport(onGantry);
			
		} else { 
			"\n\nAlthough you're higher, the crate is nowhere near the gantry.";
		}
	}
};

-> CScenery crate has name "crates", pushed = false, description {
	result = "Nearly as big as you, but empty. ";
	if (pushed == false)
		result += "You can just about move one or two of them if you put your back into it.";
	else 
		result += "You've managed to push one under the catwalk.";
	return result;
},
climb {  
	purge click, self;
	if (player.onObject == self) {
		player.onObject = nothing;
		"\n\nYou climb off the " + clickableName(self);
	} else {
		player.onObject = self;
		"\n\nYou climb onto one of the " + makeHot("crates",&click,self) + ".";
	}
},
push {
	if (pushed == false) {
		if (player.onObject == self) {
			"\n\nThat's never going to happen while you're standing on it.";
			return;
		}
		pushed = true;
		purge click, self;
		"\n\nWith a lot of swearing, you push one of the " + makeHot("crates",&click,self) + " under the catwalk.";
	} else { 
		 "\n\nThere is no point pushing the crates any further.";
	}
	
};

CRoom maintenance has name "Maintenance room", description "Full of old, corroded machinery and 
rusty tools.",
westTo junction;

CRoom onGantry has name "On gantry", description "This metal walkway creaks ominously beneath your feet. 
To the east, it streches off some distance into the dark, if you're feeling brave.",
eastTo gantryEnd, downTo turbineHall;

CRoom gantryEnd has name "End of walkway", description "The long walkway from the west ends here. A ladder descends
to the darkness below.",
westTo onGantry, downTo gallery;

CRoom gallery has name "Gallery", description "A large and airy, empty space. A ladder leads up into the dark." ,
southTo rustyDoor;

-> CStatic CContainer panel has name "maintenance panel", open = false,
initial "Some kind of maintenance panel is set in the wall by the door.";

->-> CStatic crank has name "rusty crank", subject = rustyDoor, 
description "Some kind of mechanical handle you can turn.",
turnSub() {
	if (subject.open == false) {
		"\n\nComplaining loudly, the rusty door scrapes open as you turn the crank.";
		subject.open = true;
	} else
		"\n\nThe crank won't turn any further.";
};

CDoor rustyDoor has name "rusty door", northTo gallery, southTo octHall, open = false;




