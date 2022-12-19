#include "Main.h"

Letters::Letters() {
	letter = '_';
	colour = ofColor(255, 255, 255);
	square.width = SIZE;
	square.height = SIZE;
	word = -1;
}

Letters::~Letters() {

}