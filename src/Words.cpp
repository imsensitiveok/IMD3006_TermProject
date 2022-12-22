#include "Main.h"

//--------------------------------------------------------------
Words::Words() {
	word = "__";
	numLetters = 0;
	foundLetters = 0;
	isFound = false;
}

//--------------------------------------------------------------
Words::~Words() {

}

//--------------------------------------------------------------
void Words::check() {
	if (numLetters == foundLetters) {
		isFound = true;
	}
}