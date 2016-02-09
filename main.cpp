
#include "functions.h"
#include <iostream>

int main() {
	
	linebreak();

	std::cout << "Dynamite, by Taio Cruz (lyrics from RapGenius)" << std::endl;
	std::cout << "==============================================" << std::endl;

	chorus();

	sayAndRepeatFourTimes("I came to", "dance", ".");
	sayAndRepeatFourTimes("I hit the floor cause that's my", "plans", ".");
	sayAndRepeatFourTimes("I'm wearing all my favorite", "brands", ".");
	sayAndRepeatFourTimes("Give me space for both my", "hands", ".");

	transition();

	bigChorus();

	sayAndRepeatFourTimes("I came to", "move", ".");
	sayAndRepeatFourTimes("Get out the way me and my", "crew", ".");
	sayAndRepeatFourTimes("I'm in the club so I'm gonna", "do", ".");
	sayAndRepeatFourTimes("Just drop the phone, came here to", "do", ".");

	transition();

	bigChorus();

	gonna("take it all out."); linebreak();
	gonna("be the last one standing"); linebreak();
	std::cout << "I'm over it all and I..." << std::endl;
	gonna("be the last one standing"); linebreak();
	std::cout << "Cause I, I, I... believe it," << std::endl;
	std::cout << "And I, I, I... I just want it all..." << std::endl;
	std::cout << "I just want it all..." << std::endl;
	gonna("put my"); handsInAir();
	std::cout << "Hands,"; handsInAir();
	std::cout << "Put your"; handsInAir();

	linebreak();

	bigChorus();

}

void chorus() {

	try {
		
		std::cout << "I throw my hands up in the air sometimes," << std::endl;
		
		throw HandsUpInTheAir{"sometimes"}; 

		/**
		 * Throwing an exception is equivalent to throwing your hands up in the air.
		 *
		 * In both cases, you are passing issues on for someone else, or another part 
		 * of the program to fix.
		 */
	
	} catch (HandsUpInTheAir& error) {
		
		std::cerr << "Saying \"" << error.what() << " Gotta let go!\"" << std::endl;

	}

	try {
		
		std::cout << "I wanna celebrate and live my life," << std::endl;
		
		celebrateAndLiveMyLife(); 
		
		/**
		 * celebrateAndLiveMyLife throws an error, and if we didn't catch it
		 * here, the program would crash.
		 */

	} catch (HandsUpInTheAir& error) {

		std::cerr << "Saying \"" << error.what() << " Baby let's go!\"" << std::endl;

	}

	linebreak();
}

void bigChorus() {

	chorus();

	std::cout << "Cause "; weGon("rock this club.");
	weGon("go all night.", true);
	weGon("light this up,", true);
	like("dynamite");

	std::cout << "Cause "; toldYou("once");
	std::cout << "Now "; toldYou("twice");
	weGon("light this up,", true);
	like("dynamite");

	linebreak();

}

void celebrateAndLiveMyLife() {
	bool alive {true};
	int awesomeness {5};

	while (alive) {

		awesomeness = (awesomeness + 1) % 10;

		bool goingGood = awesomeness > 2;

		if (goingGood) continue;

		else throw HandsUpInTheAir{};
	}
}

void transition() {

	linebreak();

	std::cout << "Ye, ye" << std::endl;

	linebreak();

	std::cout << "Cause it goes"; onAndOn();

	std::cout << "And it goes"; onAndOn();

	linebreak();

	std::cout << "Yeah!" << std::endl;

	linebreak();
}

/**
 * Transition
 */

void onAndOn() {
	for (int i = 0; i != 3; ++i) {
		std::cout << " on";
		if (i != 2) std::cout << " and";
	}
	std::cout << "." << std::endl;
}

/**
 * Big Chorus
 */

void weGon(const std::string& s, bool caps) {
	std::cout << (caps ? "We" : "we") << " gon' " << s << std::endl;
}

void like(const std::string& s) {
	std::cout << "Like it's " << s << "!" << std::endl;
}

void toldYou(const std::string& s) {
	std::cout << "I've told you " << s << "," << std::endl;
}

/**
 * Ancillary
 */

void sayAndRepeatFourTimes(const std::string& single1, 
	const std::string& repeated, const std::string& single2) {
 	std::cout << single1;
 	repeatFourTimes(repeated);
 	std::cout << single2 << std::endl;  
}

void repeatFourTimes(const std::string& s) {
    for (int i = 0; i != 4; ++i) {
    	if (i != 0) std::cout << ",";
        std::cout << " " << s;
    }
}

void gonna(const std::string& s) {
	std::cout << "I'm gonna " << s;
}

void handsInAir() {
	std::cout << " hands in the air!" << std::endl;
}

void linebreak() { std::cout << std::endl; }