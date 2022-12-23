#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp
{
	public:
		//CLASSSES:
		Render render;
		Grid grid;
		Screen winScreen;
		Screen pauseScreen;
		Screen gameOverScreen;

		//SOUND EFFECTS:
		ofSoundPlayer click;
		ofSoundPlayer correct;
		ofSoundPlayer wrong;
		ofSoundPlayer winGame;
		ofSoundPlayer loseGame;

		//BUTTONS:
		ofRectangle pauseButton;
		ofRectangle instructionsButton;

		//IMAGES:
		ofImage instructions;
		ofImage themedImage;

		//DATA:
		float time;
		int score;
		bool instructionsOpen;
		bool lightMode;

		//FUNCTIONS:
		void setup();
		void update();
		void draw();
		void mousePressed(int x, int y, int button);
		void keyPressed(int key);
};
