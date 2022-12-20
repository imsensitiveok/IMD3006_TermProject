#include "Main.h"

Render::Render() {
	buffer = 10;
}

Render::~Render() {

}

void Render::drawGrid(Grid* grid) {
	for (int i = 0; i < NUM_LETTERS; i++) {
		for (int j = 0; j < NUM_LETTERS; j++) {

			ofSetColor(grid->letter[i][j].colour);
			ofDrawRectangle(grid->letter[i][j].square);

			ofSetColor(0, 0, 0);
			ofDrawBitmapString(grid->letter[i][j].letter, GRID_X + SIZE * i + BUFFER * i + SIZE / 2, GRID_Y + SIZE * j + BUFFER * j + SIZE / 2);

		}
	}
}

void Render::displayScreen(Screen* screen) {

}

void Render::playSoundEffect(ofSoundPlayer* sound) {

}

void Render::drawText(string text, int x, int y) {

}