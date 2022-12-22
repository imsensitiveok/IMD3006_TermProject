#include "Main.h"

Letters::Letters() {
	colour = ofColor(255, 255, 255);
	square.width = SIZE;
	square.height = SIZE;
	letter = '_';
	word = -1;
	clicked = false;
}

Letters::~Letters() {

}