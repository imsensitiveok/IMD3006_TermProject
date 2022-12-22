#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:

		//CLASSSES:
		Render render;
		Grid grid;
		Screen winScreen;
		Screen pauseScreen;
		Screen gameOverScreen;

		////SOUND EFFECTS:
		//ofSoundPlayer positiveSound;
		//ofSoundPlayer negativeSound;

		//IMAGES:
		ofImage instructions;

		//BUTTONS:
		ofRectangle pauseButton;
		ofRectangle instructionsButton;

		//DATA:
		float time;
		bool instructionsOpen;
		int gameNum;
		int score;

		//FUNCTIONS:
		void setup();
		void update();
		void draw();
		void mousePressed(int x, int y, int button);
		
};
