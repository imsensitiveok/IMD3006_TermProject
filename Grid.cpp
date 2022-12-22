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

	gameNum = rand() % 3;
	
}

Grid::~Grid() {

}

void Grid::setupGrid() {

	//letter[i][j]
	//i = column
	//j = row
	
	//GAME 0:
	if (gameNum == 0) {

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
	else if (gameNum == 1) {

		wordToFind[0].word = "BASEBALL";
			letter[2][2].letter = 'B';
			letter[2][2].word = 0;
			letter[3][2].letter = 'A';
			letter[3][2].word = 0;
			letter[4][2].letter = 'S';
			letter[4][2].word = 0;
			letter[5][2].letter = 'E';
			letter[5][2].word = 0;
			letter[6][2].letter = 'B';
			letter[6][2].word = 0;
			letter[7][2].letter = 'A';
			letter[7][2].word = 0;
			letter[8][2].letter = 'L';
			letter[8][2].word = 0;
			letter[9][2].letter = 'L';
			letter[9][2].word = 0;
			wordToFind[0].numLetters = 8;

		wordToFind[1].word = "RUGBY";
			letter[3][5].letter = 'R';
			letter[3][5].word = 1;
			letter[3][6].letter = 'U';
			letter[3][6].word = 1;
			letter[3][7].letter = 'G';
			letter[3][7].word = 1;
			letter[3][8].letter = 'B';
			letter[3][8].word = 1;
			letter[3][9].letter = 'Y';
			letter[3][9].word = 1;
			wordToFind[1].numLetters = 5;

		wordToFind[2].word = "SOCCER";
			letter[1][14].letter = 'S';
			letter[1][14].word = 2;
			letter[2][14].letter = 'O';
			letter[2][14].word = 2;
			letter[3][14].letter = 'C';
			letter[3][14].word = 2;
			letter[4][14].letter = 'C';
			letter[4][14].word = 2;
			letter[5][14].letter = 'E';
			letter[5][14].word = 2;
			letter[6][14].letter = 'R';
			letter[6][14].word = 2;
			wordToFind[2].numLetters = 6;

		wordToFind[3].word = "VOLLEYBALL";
			letter[2][0].letter = 'V';
			letter[2][0].word = 3;
			letter[3][0].letter = 'O';
			letter[3][0].word = 3;
			letter[4][0].letter = 'L';
			letter[4][0].word = 3;
			letter[5][0].letter = 'L';
			letter[5][0].word = 3;
			letter[6][0].letter = 'E';
			letter[6][0].word = 3;
			letter[7][0].letter = 'Y';
			letter[7][0].word = 3;
			letter[8][0].letter = 'B';
			letter[8][0].word = 3;
			letter[9][0].letter = 'A';
			letter[9][0].word = 3;
			letter[10][0].letter = 'L';
			letter[10][0].word = 3;
			letter[11][0].letter = 'L';
			letter[11][0].word = 3;
			wordToFind[3].numLetters = 10;

		wordToFind[4].word = "HOCKEY";
			letter[7][6].letter = 'H';
			letter[7][6].word = 4;
			letter[8][6].letter = 'O';
			letter[8][6].word = 4;
			letter[9][6].letter = 'C';
			letter[9][6].word = 4;
			letter[10][6].letter = 'K';
			letter[10][6].word = 4;
			letter[11][6].letter = 'E';
			letter[11][6].word = 4;
			letter[12][6].letter = 'Y';
			letter[12][6].word = 4;
			wordToFind[4].numLetters = 6;

		wordToFind[5].word = "FRISBEE";
			letter[7][4].letter = 'F';
			letter[7][4].word = 5;
			letter[8][4].letter = 'R';
			letter[8][4].word = 5;
			letter[9][4].letter = 'I';
			letter[9][4].word = 5;
			letter[10][4].letter = 'S';
			letter[10][4].word = 5;
			letter[11][4].letter = 'B';
			letter[11][4].word = 5;
			letter[12][4].letter = 'E';
			letter[12][4].word = 5;
			letter[13][4].letter = 'E';
			letter[13][4].word = 5;
			wordToFind[5].numLetters = 7;

		wordToFind[6].word = "GOLF";
			letter[11][2].letter = 'G';
			letter[11][2].word = 6;
			letter[12][2].letter = 'O';
			letter[12][2].word = 6;
			letter[13][2].letter = 'L';
			letter[13][2].word = 6;
			letter[14][2].letter = 'F';
			letter[14][2].word = 6;
			wordToFind[6].numLetters = 4;

		wordToFind[7].word = "SWIMMING";
			letter[14][7].letter = 'S';
			letter[14][7].word = 7;
			letter[14][8].letter = 'W';
			letter[14][8].word = 7;
			letter[14][9].letter = 'I';
			letter[14][9].word = 7;
			letter[14][10].letter = 'M';
			letter[14][10].word = 7;
			letter[14][11].letter = 'M';
			letter[14][11].word = 7;
			letter[14][12].letter = 'I';
			letter[14][12].word = 7;
			letter[14][13].letter = 'N';
			letter[14][13].word = 7;
			letter[14][14].letter = 'G';
			letter[14][14].word = 7;
			wordToFind[7].numLetters = 8;

		wordToFind[8].word = "BASKETBALL";
			letter[3][12].letter = 'B';
			letter[3][12].word = 8;
			letter[4][12].letter = 'A';
			letter[4][12].word = 8;
			letter[5][12].letter = 'S';
			letter[5][12].word = 8;
			letter[6][12].letter = 'K';
			letter[6][12].word = 8;
			letter[7][12].letter = 'E';
			letter[7][12].word = 8;
			letter[8][12].letter = 'T';
			letter[8][12].word = 8;
			letter[9][12].letter = 'B';
			letter[9][12].word = 8;
			letter[10][12].letter = 'A';
			letter[10][12].word = 8;
			letter[11][12].letter = 'L';
			letter[11][12].word = 8;
			letter[12][12].letter = 'L';
			letter[12][12].word = 8;
			wordToFind[8].numLetters = 10;

		wordToFind[9].word = "CYCLING";
			letter[1][5].letter = 'C';
			letter[1][5].word = 9;
			letter[1][6].letter = 'Y';
			letter[1][6].word = 9;
			letter[1][7].letter = 'C';
			letter[1][7].word = 9;
			letter[1][8].letter = 'L';
			letter[1][8].word = 9;
			letter[1][9].letter = 'I';
			letter[1][9].word = 9;
			letter[1][10].letter = 'N';
			letter[1][10].word = 9;
			letter[1][11].letter = 'G';
			letter[1][11].word = 9;
			wordToFind[9].numLetters = 7;
	}
	else if (gameNum == 2) {
			wordToFind[0].word = "MAGIC";
			letter[5][2].letter = 'M';
			letter[5][2].word = 0;
			letter[5][3].letter = 'A';
			letter[5][3].word = 0;
			letter[5][4].letter = 'G';
			letter[5][4].word = 0;
			letter[5][5].letter = 'I';
			letter[5][5].word = 0;
			letter[5][6].letter = 'C';
			letter[5][6].word = 0;
			wordToFind[0].numLetters = 5;

			wordToFind[1].word = "BROOMSTICK";
			letter[3][5].letter = 'B';
			letter[3][5].word = 1;
			letter[3][6].letter = 'R';
			letter[3][6].word = 1;
			letter[3][7].letter = 'O';
			letter[3][7].word = 1;
			letter[3][8].letter = 'O';
			letter[3][8].word = 1;
			letter[3][9].letter = 'M';
			letter[3][9].word = 1;
			letter[3][10].letter = 'S';
			letter[3][10].word = 1;
			letter[3][11].letter = 'T';
			letter[3][11].word = 1;
			letter[3][12].letter = 'I';
			letter[3][12].word = 1;
			letter[3][13].letter = 'C';
			letter[3][13].word = 1;
			letter[3][14].letter = 'K';
			letter[3][14].word = 1;
			wordToFind[1].numLetters = 10;

			wordToFind[2].word = "POTION";
			letter[1][1].letter = 'P';
			letter[1][1].word = 2;
			letter[2][1].letter = 'O';
			letter[2][1].word = 2;
			letter[3][1].letter = 'T';
			letter[3][1].word = 2;
			letter[4][1].letter = 'I';
			letter[4][1].word = 2;
			letter[5][1].letter = 'O';
			letter[5][1].word = 2;
			letter[6][1].letter = 'N';
			letter[6][1].word = 2;
			wordToFind[2].numLetters = 6;

			wordToFind[3].word = "CAULDRON";
			letter[2][0].letter = 'C';
			letter[2][0].word = 3;
			letter[3][0].letter = 'A';
			letter[3][0].word = 3;
			letter[4][0].letter = 'U';
			letter[4][0].word = 3;
			letter[5][0].letter = 'L';
			letter[5][0].word = 3;
			letter[6][0].letter = 'D';
			letter[6][0].word = 3;
			letter[7][0].letter = 'R';
			letter[7][0].word = 3;
			letter[8][0].letter = 'O';
			letter[8][0].word = 3;
			letter[9][0].letter = 'N';
			letter[9][0].word = 3;
			wordToFind[3].numLetters = 8;

			wordToFind[4].word = "HERBS";
			letter[7][6].letter = 'H';
			letter[7][6].word = 4;
			letter[8][6].letter = 'E';
			letter[8][6].word = 4;
			letter[9][6].letter = 'R';
			letter[9][6].word = 4;
			letter[10][6].letter = 'B';
			letter[10][6].word = 4;
			letter[11][6].letter = 'S';
			letter[11][6].word = 4;
			wordToFind[4].numLetters = 5;

			wordToFind[5].word = "CRYSTAL";
			letter[7][4].letter = 'C';
			letter[7][4].word = 5;
			letter[8][4].letter = 'R';
			letter[8][4].word = 5;
			letter[9][4].letter = 'Y';
			letter[9][4].word = 5;
			letter[10][4].letter = 'S';
			letter[10][4].word = 5;
			letter[11][4].letter = 'T';
			letter[11][4].word = 5;
			letter[12][4].letter = 'A';
			letter[12][4].word = 5;
			letter[13][4].letter = 'L';
			letter[13][4].word = 5;
			wordToFind[5].numLetters = 7;

			wordToFind[6].word = "SPELL";
			letter[10][2].letter = 'S';
			letter[10][2].word = 6;
			letter[11][2].letter = 'P';
			letter[11][2].word = 6;
			letter[12][2].letter = 'E';
			letter[12][2].word = 6;
			letter[13][2].letter = 'L';
			letter[13][2].word = 6;
			letter[14][2].letter = 'L';
			letter[14][2].word = 6;
			wordToFind[6].numLetters = 5;

			wordToFind[7].word = "GRIMOIRE";
			letter[14][7].letter = 'G';
			letter[14][7].word = 7;
			letter[14][8].letter = 'R';
			letter[14][8].word = 7;
			letter[14][9].letter = 'I';
			letter[14][9].word = 7;
			letter[14][10].letter = 'M';
			letter[14][10].word = 7;
			letter[14][11].letter = 'O';
			letter[14][11].word = 7;
			letter[14][12].letter = 'I';
			letter[14][12].word = 7;
			letter[14][13].letter = 'R';
			letter[14][13].word = 7;
			letter[14][14].letter = 'E';
			letter[14][14].word = 7;
			wordToFind[7].numLetters = 8;

			wordToFind[8].word = "FAIRYDUST";
			letter[4][12].letter = 'F';
			letter[4][12].word = 8;
			letter[5][12].letter = 'A';
			letter[5][12].word = 8;
			letter[6][12].letter = 'I';
			letter[6][12].word = 8;
			letter[7][12].letter = 'R';
			letter[7][12].word = 8;
			letter[8][12].letter = 'Y';
			letter[8][12].word = 8;
			letter[9][12].letter = 'D';
			letter[9][12].word = 8;
			letter[10][12].letter = 'U';
			letter[10][12].word = 8;
			letter[11][12].letter = 'S';
			letter[11][12].word = 8;
			letter[12][12].letter = 'T';
			letter[12][12].word = 8;
			wordToFind[8].numLetters = 9;

			wordToFind[9].word = "RITUAL";
			letter[1][5].letter = 'R';
			letter[1][5].word = 9;
			letter[1][6].letter = 'I';
			letter[1][6].word = 9;
			letter[1][7].letter = 'T';
			letter[1][7].word = 9;
			letter[1][8].letter = 'U';
			letter[1][8].word = 9;
			letter[1][9].letter = 'A';
			letter[1][9].word = 9;
			letter[1][10].letter = 'L';
			letter[1][10].word = 9;
			wordToFind[9].numLetters = 6;
	}

}