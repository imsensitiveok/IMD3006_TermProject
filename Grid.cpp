#include "Main.h"

Grid::Grid() {

	//SETUP LETTER POSITIONS:
	for (int i = 0; i < NUM_LETTERS; i++) {
		for (int j = 0; j < NUM_LETTERS; j++) {
			letter[i][j].square.x = GRID_X + SIZE * i + BUFFER * i;
			letter[i][j].square.y = GRID_Y + SIZE * j + BUFFER * j;
		}
	}

	//SETUP RANDOM LETTERS:
	for (int i = 0; i < NUM_LETTERS; i++) {
		for (int j = 0; j < NUM_LETTERS; j++) {
			letter[i][j].letter = 65 + (rand() % 26); //65 - 90
		}
	}
	
}

Grid::~Grid() {

}

void Grid::setupGrid(int gameNumber) {

	//letter[i][j]
	//i = column
	//j = row

	if (gameNumber == 0) {

		wordToFind[0].word = "CAT";
			letter[4][1].letter = 'C';
			letter[4][1].word = 0;

			letter[5][1].letter = 'A';
			letter[5][1].word = 0;

			letter[6][1].letter = 'T';
			letter[6][1].word = 0;

			wordToFind[0].numLetters = 3;


		wordToFind[1].word = "SQUIRREL";

			letter[3][14].letter = 'S';
			letter[3][14].word = 1;

			letter[4][14].letter = 'Q';
			letter[4][14].word = 1;

			letter[5][14].letter = 'U';
			letter[5][14].word = 1;

			letter[6][14].letter = 'I';
			letter[6][14].word = 1;

			letter[7][14].letter = 'R';
			letter[7][14].word = 1;

			letter[8][14].letter = 'R';
			letter[8][14].word = 1;

			letter[9][14].letter = 'E';
			letter[9][14].word = 1;

			letter[10][14].letter = 'L';
			letter[10][14].word = 1;

			wordToFind[1].numLetters = 8;


		wordToFind[2].word = "DOG";
			letter[8][1].letter = 'D';
			letter[8][1].word = 2;

			letter[9][1].letter = 'O';
			letter[9][1].word = 2;

			letter[10][1].letter = 'G';
			letter[10][1].word = 2;

			wordToFind[2].numLetters = 3;


		wordToFind[3].word = "KOALA";
			letter[12][3].letter = 'K';
			letter[12][3].word = 3;

			letter[12][4].letter = 'O';
			letter[12][4].word = 3;

			letter[12][5].letter = 'A';
			letter[12][5].word = 3;

			letter[12][6].letter = 'L';
			letter[12][6].word = 3;

			letter[12][7].letter = 'A';
			letter[12][7].word = 3;

			wordToFind[3].numLetters = 5;


		wordToFind[4].word = "ELEPHANT";
			letter[0][3].letter = 'E';
			letter[0][3].word = 4;

			letter[0][4].letter = 'L';
			letter[0][4].word = 4;

			letter[0][5].letter = 'E';
			letter[0][5].word = 4;

			letter[0][6].letter = 'P';
			letter[0][6].word = 4;

			letter[0][7].letter = 'H';
			letter[0][7].word = 4;

			letter[0][8].letter = 'A';
			letter[0][8].word = 4;

			letter[0][9].letter = 'N';
			letter[0][9].word = 4;

			letter[0][10].letter = 'T';
			letter[0][10].word = 4;

			wordToFind[4].numLetters = 8;


		wordToFind[5].word = "HEDGEHOG";
			letter[5][4].letter = 'H';
			letter[5][4].word = 5;

			letter[5][5].letter = 'E';
			letter[5][5].word = 5;

			letter[5][6].letter = 'D';
			letter[5][6].word = 5;

			letter[5][7].letter = 'G';
			letter[5][7].word = 5;

			letter[5][8].letter = 'E';
			letter[5][8].word = 5;

			letter[5][9].letter = 'H';
			letter[5][9].word = 5;

			letter[5][10].letter = 'O';
			letter[5][10].word = 5;

			letter[5][11].letter = 'G';
			letter[5][11].word = 5;

			wordToFind[5].numLetters = 8;


		wordToFind[6].word = "DEER";
			letter[7][6].letter = 'D';
			letter[7][6].word = 6;

			letter[8][6].letter = 'E';
			letter[8][6].word = 6;

			letter[9][6].letter = 'E';
			letter[9][6].word = 6;

			letter[10][6].letter = 'R';
			letter[10][6].word = 6;

			wordToFind[6].numLetters = 4;


		wordToFind[7].word = "HORSE";
			letter[7][10].letter = 'H';
			letter[7][10].word = 7;

			letter[8][10].letter = 'O';
			letter[8][10].word = 7;

			letter[9][10].letter = 'R';
			letter[9][10].word = 7;

			letter[10][10].letter = 'S';
			letter[10][10].word = 7;

			letter[11][10].letter = 'E';
			letter[11][10].word = 7;

			wordToFind[7].numLetters = 5;


		wordToFind[8].word = "OTTER";
			letter[1][13].letter = 'O';
			letter[1][13].word = 8;

			letter[2][13].letter = 'T';
			letter[2][13].word = 8;

			letter[3][13].letter = 'T';
			letter[3][13].word = 8;

			letter[4][13].letter = 'E';
			letter[4][13].word = 8;

			letter[5][13].letter = 'R';
			letter[5][13].word = 8;

			wordToFind[8].numLetters = 5;


		wordToFind[9].word = "MONKEY";
			letter[14][9].letter = 'M';
			letter[14][9].word = 9;

			letter[14][10].letter = 'O';
			letter[14][10].word = 9;

			letter[14][11].letter = 'N';
			letter[14][11].word = 9;

			letter[14][12].letter = 'K';
			letter[14][12].word = 9;

			letter[14][13].letter = 'E';
			letter[14][13].word = 9;

			letter[14][14].letter = 'Y';
			letter[14][14].word = 9;

			wordToFind[9].numLetters = 6;
			
	}

}