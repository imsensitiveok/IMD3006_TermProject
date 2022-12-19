#pragma once

class Render
{
public:

	//DATA:
	//gui setup
	int buffer;

	//FUNCTIONS:
	Render();
	~Render();
	//void drawLetter(Letters* letter, int x, int y);
	void drawGrid(Grid* grid);
	void displayScreen(Screen* screen);
	void playSoundEffect(ofSoundPlayer* sound);
	void drawText(string text, int x, int y);

};