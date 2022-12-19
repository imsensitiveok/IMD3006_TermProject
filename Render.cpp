#include "Main.h"

Render::Render() {
	buffer = 10;
}

Render::~Render() {

}

void Render::drawGrid(Grid* grid) {
	for (int i = 0; i < NUM_LETTERS; i++) {
		for (int j = 0; j < NUM_LETTERS; j++) {
			ofDrawRectangle(grid->letter[i][j].square);
			char let = grid->letter[i][j].letter;
		}
	}
}

void Render::displayScreen(Screen* screen) {

}

void Render::playSoundEffect(ofSoundPlayer* sound) {

}

void Render::drawText(string text, int x, int y) {

}