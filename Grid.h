#pragma once

class Grid 
{
public:

	//CLASSES:
	//Render render;
	Letters letter[16][16];
	Words wordsToFind[10];
	
	//DATA:
	int gameNum;

	//CODE:
	Grid();
	~Grid();
	//void Draw();

};


