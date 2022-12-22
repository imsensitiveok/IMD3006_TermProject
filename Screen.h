#pragma once

class Screen
{
public:

	ofRectangle background;
	ofRectangle button;
	ofColor backgroundColor;
	ofSoundPlayer soundEffect;

	//DATA:
	string text;
	string buttonText;
	bool open;

	//FUNCTIONS:
	Screen();
	~Screen();

};