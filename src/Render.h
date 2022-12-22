#pragma once

class Render
{
public:
	ofColor primaryColor;
	ofColor secondaryColor;

	//DATA:
	int buffer;

	//FUNCTIONS:
	Render();
	~Render();
	void drawGrid(Grid* grid);
	void displayScreen(Screen* screen);
	void playSoundEffect(ofSoundPlayer* snd);
	void drawButton(ofRectangle* button, string text);
	void drawImage(ofImage* img, int x, int y);
	void drawText(string txt, int x, int y);
};