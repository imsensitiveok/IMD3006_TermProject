#include "Main.h"

Grid::Grid() {
	
	gameNum = 0;

	//SETUP LETTER POSITIONS:
	for (int i = 0; i < NUM_LETTERS; i++) {
		for (int j = 0; j < NUM_LETTERS; j++) {
			letter[i][j].square.x = GRID_X + SIZE * i + BUFFER * i;
			letter[i][j].square.y = GRID_Y + SIZE * j + BUFFER * j;
		}
	}

}

Grid::~Grid() {

}