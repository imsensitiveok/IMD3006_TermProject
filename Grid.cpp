#include "Main.h"

Grid::Grid() {

	totalLetters = 1;

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

void Grid::setupGame(int gameNumber) {

	//letter[i][j]
	//i = column
	//j = row

	if (gameNumber == 0) {

		//SETUP WORDS:

		wordToFind[0].word = "CAT";				//3
			letter[4][1].letter = 'C';
			letter[4][1].word = 0;

			letter[5][1].letter = 'A';
			letter[5][1].word = 0;

			letter[6][1].letter = 'T';
			letter[6][1].word = 0;


		wordToFind[1].word = "SQUIRREL";		//8

			letter[3][14].letter = 'S';
			letter[3][14].word = 0;

			letter[4][14].letter = 'Q';
			letter[4][14].word = 0;

			letter[5][14].letter = 'U';
			letter[5][14].word = 0;

			letter[6][14].letter = 'I';
			letter[6][14].word = 0;

			letter[7][14].letter = 'R';
			letter[7][14].word = 0;

			letter[8][14].letter = 'R';
			letter[8][14].word = 0;

			letter[9][14].letter = 'E';
			letter[9][14].word = 0;

			letter[10][14].letter = 'L';
			letter[10][14].word = 0;


		wordToFind[2].word = "DOG";				//3
			letter[8][1].letter = 'D';
			letter[8][1].word = 0;

			letter[9][1].letter = 'O';
			letter[9][1].word = 0;

			letter[10][1].letter = 'G';
			letter[10][1].word = 0;


		wordToFind[3].word = "KOALA";			//5
			letter[12][3].letter = 'K';
			letter[12][3].word = 0;

			letter[12][4].letter = 'O';
			letter[12][4].word = 0;

			letter[12][5].letter = 'A';
			letter[12][5].word = 0;

			letter[12][6].letter = 'L';
			letter[12][6].word = 0;

			letter[12][7].letter = 'A';
			letter[12][7].word = 0;


		wordToFind[4].word = "ELEPHANT";		//8
			letter[0][3].letter = 'E';
			letter[0][3].word = 0;

			letter[0][4].letter = 'L';
			letter[0][4].word = 0;

			letter[0][5].letter = 'E';
			letter[0][5].word = 0;

			letter[0][6].letter = 'P';
			letter[0][6].word = 0;

			letter[0][7].letter = 'H';
			letter[0][7].word = 0;

			letter[0][8].letter = 'A';
			letter[0][8].word = 0;

			letter[0][9].letter = 'N';
			letter[0][9].word = 0;

			letter[0][10].letter = 'T';
			letter[0][10].word = 0;


		wordToFind[5].word = "HEDGEHOG";		//8
			letter[5][4].letter = 'H';
			letter[5][4].word = 0;

			letter[5][5].letter = 'E';
			letter[5][5].word = 0;

			letter[5][6].letter = 'D';
			letter[5][6].word = 0;

			letter[5][7].letter = 'G';
			letter[5][7].word = 0;

			letter[5][8].letter = 'E';
			letter[5][8].word = 0;

			letter[5][9].letter = 'H';
			letter[5][9].word = 0;

			letter[5][10].letter = 'O';
			letter[5][10].word = 0;

			letter[5][11].letter = 'G';
			letter[5][11].word = 0;


		wordToFind[6].word = "DEER";			//4
			letter[7][6].letter = 'D';
			letter[7][6].word = 0;

			letter[8][6].letter = 'E';
			letter[8][6].word = 0;

			letter[9][6].letter = 'E';
			letter[9][6].word = 0;

			letter[10][6].letter = 'R';
			letter[10][6].word = 0;


		wordToFind[7].word = "HORSE";			//5
			letter[7][10].letter = 'H';
			letter[7][10].word = 0;

			letter[8][10].letter = 'O';
			letter[8][10].word = 0;

			letter[9][10].letter = 'R';
			letter[9][10].word = 0;

			letter[10][10].letter = 'S';
			letter[10][10].word = 0;

			letter[11][10].letter = 'E';
			letter[11][10].word = 0;


		wordToFind[8].word = "OTTER";			//5
			letter[1][13].letter = 'O';
			letter[1][13].word = 0;

			letter[2][13].letter = 'T';
			letter[2][13].word = 0;

			letter[3][13].letter = 'T';
			letter[3][13].word = 0;

			letter[4][13].letter = 'E';
			letter[4][13].word = 0;

			letter[5][13].letter = 'R';
			letter[5][13].word = 0;



		wordToFind[9].word = "MONKEY";			//6
			letter[14][9].letter = 'M';
			letter[14][9].word = 0;

			letter[14][10].letter = 'O';
			letter[14][10].word = 0;

			letter[14][11].letter = 'N';
			letter[14][11].word = 0;

			letter[14][12].letter = 'K';
			letter[14][12].word = 0;

			letter[14][13].letter = 'E';
			letter[14][13].word = 0;

			letter[14][14].letter = 'Y';
			letter[14][14].word = 0;


		//SETUP NUM LETTERS:
		totalLetters = 55;						//55
			
		
	}

}