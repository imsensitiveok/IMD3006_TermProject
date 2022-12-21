#include "Main.h"

//--------------------------------------------------------------
void ofApp::setup(){

	//setup window:
	ofSetWindowTitle("Word Search");
	ofSetWindowShape(WINDOW_W, WINDOW_H);
	ofSetWindowPosition(40, 40);
	

	//setup screens:
	winScreen.text = "YOU WON!";
	winScreen.buttonText = "new game";
	//winScreen.soundEffect.load("---");

	pauseScreen.text = "GAME PAUSED";
	pauseScreen.buttonText = "resume game";
	//pauseScreen.soundEffect.load("---");

	gameOverScreen.text = "GAME OVER";
	gameOverScreen.buttonText = "new game";
	//gameOverScreen.soundEffect.load("---");

	//load images:
	instructions.load("instructionsScreen.png");

	//setup buttons:
	pauseButton.x = 850;
	pauseButton.y = 475;
	pauseButton.width = BUTTON_W;
	pauseButton.height = BUTTON_H;
	instructionsButton.x = 850;
	instructionsButton.y = 550;
	instructionsButton.width = BUTTON_W;
	instructionsButton.height = BUTTON_H;

	//setup data:
	time = 120;
	instructionsOpen = false;
	gameNum = 0;
	score = 0;


	//setup grid:
	grid.setupGrid(gameNum);
	
}

//--------------------------------------------------------------
void ofApp::update(){

	//check if words are all found:
	bool allFound = true;
	for (int i = 0; i < NUM_WORDS; i++) {
		if (grid.wordToFind[i].isFound == false) {
			allFound = false;
		}
	}
	if (allFound == true) {
		winScreen.open = true;
		printf("won");
		cout << score;
	}

	//check if full word is found
	for (int i = 0; i < NUM_WORDS; i++) {
		grid.wordToFind[i].check();
	}

	//timer automatically counts down
	time -= 0.025;
}

//--------------------------------------------------------------
void ofApp::draw(){

	//draw background:
	ofSetBackgroundColor(0, 0, 0);

	//draw grid:
	render.drawGrid(&grid);

	//draw pause buttons:
	render.drawButton(&pauseButton, "pause");

	//draw instructions button:
	render.drawButton(&instructionsButton, "instructions");
	
	//draw screens:
	render.displayScreen(&winScreen);
	render.displayScreen(&pauseScreen);
	render.displayScreen(&gameOverScreen);

	//draw instructions:
	//if (instructionsOpen == true) {
	//	render.drawImage(&instructions, 0, 0);
	//}

	ofSetColor(ofColor::white);
	ofDrawBitmapString("Time Remaining:", 850, 650);
	ofDrawBitmapString((int)time, 900, 675);

	ofDrawBitmapString("Score", 850, 700);
	ofDrawBitmapString(score, 900, 725);
}

//--------------------------------------------------------------s
void ofApp::mousePressed(int x, int y, int button){

	//LETTER SELECTION:
	//loop through letters
	if (winScreen.open == false && pauseScreen.open == false && gameOverScreen.open == false) {
		for (int i = 0; i < NUM_LETTERS; i++) {
			for (int j = 0; j < NUM_LETTERS; j++) {

				//checks if clicked inside letter
				if (grid.letter[i][j].square.inside(x, y) && grid.letter[i][j].clicked == false) {

					//changes colour
					if (grid.letter[i][j].word == -1) {
						grid.letter[i][j].colour = ofColor(255, 0, 0);
						printf("wrong letter\n");
					}
					else {
						grid.letter[i][j].colour = ofColor(0, 255, 0);
						grid.wordToFind[grid.letter[i][j].word].foundLetters++;
						printf("right letter\n");
					}

					grid.letter[i][j].clicked = true;
				}
			}
		}
	}

	
	//BUTTONS:
	//win screen:
	if (winScreen.button.inside(x, y) && winScreen.open == true) {
		winScreen.open = false;
		Grid* grid = new Grid();
		setup();
		printf("new game\n");
	}
	//paused screen:
	if (pauseScreen.button.inside(x, y) && pauseScreen.open == true) {
		pauseScreen.open = false;
		printf("resume\n");
	}
	//game over screen:
	if (gameOverScreen.button.inside(x, y) && gameOverScreen.open == true) {
		gameOverScreen.open = false;
		
		printf("new game\n");
	}
	//pause:
	if (pauseButton.inside(x, y) && winScreen.open == false && pauseScreen.open == false && gameOverScreen.open == false) {
		pauseScreen.open = true;
		printf("paused\n");
	}
	//instructions:
	if (instructionsButton.inside(x, y) && winScreen.open == false && pauseScreen.open == false && gameOverScreen.open == false) {
		if (instructionsOpen == false) {
			instructionsOpen = true;
			printf("open instructions\n");
		}
		else if (instructionsOpen == true) {
			instructionsOpen = false;
			printf("close instructions\n");
		}
	}
}
