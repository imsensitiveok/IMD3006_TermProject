#pragma once

class Grid 
{
public:

	//CLASSES:
	Letters letter[15][15];
	Words wordToFind[10];

	//DATA:
	int gameNum;

	//CODE:
	Grid();
	~Grid();
	void setupGrid();
};


