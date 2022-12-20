#pragma once

class Grid 
{
public:

	//CLASSES:
	Letters letter[15][15];
	Words wordToFind[10];

	//DATA:
	int totalLetters;

	//CODE:
	Grid();
	~Grid();
	void setupGame(int gameNumber);
};


