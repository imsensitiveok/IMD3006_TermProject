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
			ofSetColor(0, 0, 0);
			ofDrawBitmapString(grid->letter[i][j].letter, GRID_X + SIZE * i + BUFFER * i + SIZE / 2, GRID_Y + SIZE * j + BUFFER * j + SIZE / 2);
		}
	}

	//WORD LIST:
	ofSetColor(255, 255, 255);
	ofDrawBitmapString("WORDS TO FIND:", 850, 150);
	for (int i = 0; i < NUM_WORDS; i++) {
		ofSetColor(255, 255, 255);
		ofSetColor(255, 255, 255);
		if (grid->wordToFind[i].isFound == true) {
			ofSetColor(100, 100, 100);
		}
		ofDrawBitmapString(grid->wordToFind[i].word, 870, 175 + i * 20);
	}
}

void Render::displayScreen(Screen* screen) {
	if (screen->open == true) {

		//play sound effect:


		//draw background:
		ofSetColor(screen->themeColor);
		ofDrawRectangle(screen->background);

		//draw text:
		ofSetColor(255, 255, 255);
		ofDrawBitmapString(screen->text, WINDOW_W / 2 - 40, WINDOW_H / 2);
		
		//draw button:
		ofDrawRectangle(screen->button);
		ofSetColor(0, 0, 0);
		ofDrawBitmapString(screen->buttonText, screen->button.x + BUTTON_W / 4, screen->button.y + BUTTON_H / 2);

	}
}

void Render::drawButton(ofRectangle* button, string text) {
	ofSetColor(255, 255, 255);
	ofDrawRectangle(*button);
	ofSetColor(0, 0, 0);
	ofDrawBitmapString(text, button->x + BUTTON_W / 4, button->y + BUTTON_H / 2);
}

void drawImage(ofImage* img, int x, int y) {
	ofImage image = *img;
	image.draw(x, y);
}

void drawText(string text, int x, int y) {
	ofDrawBitmapString(text, x, y);
}