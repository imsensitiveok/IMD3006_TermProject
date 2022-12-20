#include "Main.h"

//--------------------------------------------------------------
void ofApp::setup(){

	//setup window:
	ofSetWindowTitle("Word Search");
	ofSetWindowShape(WINDOW_W, WINDOW_H);
	ofSetWindowPosition(40, 40);
	
	//setup data:
	gameNum = 0;
	time = 0;
	isPaused = false;
	instructionsOpen = false;
	gameWon = false;
	gameNum = 0;
	lettersFound = 0;

	//setup grid:
	grid.setupGame(gameNum);
	

	
}

//--------------------------------------------------------------
void ofApp::update(){

	//check if all letters have been found:
	if (grid.totalLetters == lettersFound) {
		gameWon = true;
	}

}

//--------------------------------------------------------------
void ofApp::draw(){

	//draw screens:
	if (gameWon == true) {
		render.displayScreen(&winScreen);
		printf("won");
	}

	//draw grid:
	render.drawGrid(&grid);

}

//--------------------------------------------------------------s
void ofApp::mousePressed(int x, int y, int button){

	//loop through letters
	for (int i = 0; i < NUM_LETTERS; i++) {
		for (int j = 0; j < NUM_LETTERS; j++) {

			//checks if clicked inside letter
			if (grid.letter[i][j].square.inside(x, y) && grid.letter[i][j].clicked == false) {

				//changes colour
				if (grid.letter[i][j].word == -1) {
					grid.letter[i][j].colour = ofColor(255, 0, 0);
					printf("wrong\n");
				}
				else {
					grid.letter[i][j].colour = ofColor(0, 255, 0);
					lettersFound++;
					printf("LettersFound: %d\n", lettersFound);
				}
				
				grid.letter[i][j].clicked = true;
			}
		}
	}
	
}
