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

		//FUNCTIONS:
		void setup();
		void update();
		void draw();
		void mousePressed(int x, int y, int button);

		//void keyPressed(int key);
		//void keyReleased(int key);
		//void mouseMoved(int x, int y );
		//void mouseDragged(int x, int y, int button);
		//void mouseReleased(int x, int y, int button);
		//void mouseEntered(int x, int y);
		//void mouseExited(int x, int y);
		//void windowResized(int w, int h);
		//void dragEvent(ofDragInfo dragInfo);
		//void gotMessage(ofMessage msg);
		
};
