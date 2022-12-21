#pragma once

class Screen
{
public:

	ofRectangle background;
	ofRectangle button;
	ofColor themeColor;
	ofSoundPlayer soundEffect;

	//DATA:
	string text;
	string buttonText;
	bool open;

	//FUNCTIONS:
	Screen();
	~Screen();

};