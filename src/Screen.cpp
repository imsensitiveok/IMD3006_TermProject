#include "Main.h"

//--------------------------------------------------------------
Screen::Screen() {
	//background:
	background.x = 0;
	background.y = 0;
	background.width = WINDOW_W;
	background.height = WINDOW_H;

	//button:
	button.x = WINDOW_W / 2 - BUTTON_W / 2;
	button.y = 3 * WINDOW_H / 4;
	button.width = BUTTON_W;
	button.height = BUTTON_H;

	backgroundColor = ofColor(0, 0, 0, 200);
	buttonText = "__";
	text = "__";
	open = false;
}

//--------------------------------------------------------------
Screen::~Screen() {

}