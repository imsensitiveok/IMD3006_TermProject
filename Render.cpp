#include "Main.h"

Render::Render() {
	buffer = 10;
}

Render::~Render() {

}

void Render::drawGrid(Grid* grid) {
	//GRID:
	for (int i = 0; i < NUM_LETTERS; i++) {
		for (int j = 0; j < NUM_LETTERS; j++) {
			//draw square:
			ofSetColor(grid->letter[i][j].colour);
			ofDrawRectangle(grid->letter[i][j].square);

			//draw letter:
			ofSetColor(7, 55, 99);
			ofDrawBitmapString(grid->letter[i][j].letter, GRID_X + SIZE * i + BUFFER * i + SIZE / 2, GRID_Y + SIZE * j + BUFFER * j + SIZE / 2);
		}
	}

	//WORD LIST:
	ofSetColor(255, 255, 255);
	ofDrawBitmapString("WORDS TO FIND:", 850, 150);
	for (int i = 0; i < NUM_WORDS; i++) {
		ofSetColor(255, 255, 255);
		if (grid->wordToFind[i].isFound == true) {
			ofSetColor(61, 133, 198);
		}
		ofDrawBitmapString(grid->wordToFind[i].word, 870, 175 + i * 20);
	}
}

void Render::displayScreen(Screen* screen) {
	if (screen->open == true) {

		//play sound effect:


		//draw background:
		ofSetColor(screen->backgroundColor);
		ofDrawRectangle(screen->background);

		//draw text:
		ofSetColor(255, 255, 255);
		ofDrawBitmapString(screen->text, WINDOW_W / 2 - 40, WINDOW_H / 2);
		
		//draw button:
		ofDrawRectangle(screen->button);
		ofSetColor(7, 55, 99);
		ofDrawBitmapString(screen->buttonText, screen->button.x + BUTTON_W / 4, screen->button.y + BUTTON_H / 2);

	}
}

//void playSoundEffect(ofSoundPlayer* sound) {
//	sound->play();
//}

void Render::drawButton(ofRectangle* button, string text) {
	ofSetColor(255, 255, 255);
	ofDrawRectangle(*button);
	ofSetColor(7, 55, 99);
	ofDrawBitmapString(text, button->x + BUTTON_W / 4, button->y + BUTTON_H / 2);
}

void Render::drawImage(ofImage* img, int x, int y) {
	ofSetColor(255, 255, 255);
	ofImage image = *img;
	image.draw(x, y);
}

void Render::drawText(string txt, int x, int y) {
	ofSetColor(255, 255, 255);
	ofDrawBitmapString(txt, x, y);
}