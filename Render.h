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
	//void playSoundEffect(ofSoundPlayer* sound);
	void drawButton(ofRectangle* button, string text);
	void drawImage(ofImage* img, int x, int y);
	void drawText(string txt, int x, int y);

};