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
	pauseScreen.text = "GAME PAUSED";
	pauseScreen.buttonText = "resume game";
	pauseScreen.backgroundColor = ofColor(7, 55, 99, 255);
	gameOverScreen.text = "GAME OVER";
	gameOverScreen.buttonText = "new game";

	//sound effects:
	//from https://pixabay.com/sound-effects/search/clicks/
	click.load("click.mp3");
	//from https://mixkit.co/free-sound-effects/game/?page=2
	correct.load("correct.wav");
	wrong.load("wrong.wav");
	winGame.load("winGame.wav");
	loseGame.load("loseGame.wav");

	//load images:
	instructions.load("instructionsScreen.png");
	sports.load("sports.png");
	witch.load("witch.png");
	animals.load("animals.png");

	//setup buttons:
	pauseButton.x = 850;
	pauseButton.y = 600;
	pauseButton.width = BUTTON_W;
	pauseButton.height = BUTTON_H;
	instructionsButton.x = 850;
	instructionsButton.y = 675;
	instructionsButton.width = BUTTON_W;
	instructionsButton.height = BUTTON_H;

	//setup data:
	time = AMOUNT_OF_TIME;
	score = 0;
	instructionsOpen = false;
	lightMode = false;

	//setup grid:
	grid.setupGrid();
}

//--------------------------------------------------------------
void ofApp::update(){

	//check if game won:
	bool allFound = true;
	for (int i = 0; i < NUM_WORDS; i++) {
		if (grid.wordToFind[i].isFound == false) {
			allFound = false;
		}
	}
	if (allFound == true && winScreen.open == false) {
		//play sound effect:
		render.playSoundEffect(&winGame);
		//open screen:
		winScreen.open = true;
	}

	//check if full word is found:
	for (int i = 0; i < NUM_WORDS; i++) {
		if (grid.wordToFind[i].isFound == false) {
			grid.wordToFind[i].check();
			//play sound effect:
			if (grid.wordToFind[i].isFound == true) {
				render.playSoundEffect(&correct);
			}
		}
	}

	//check if game over:
	if (time <= 0 && gameOverScreen.open == false) {
		//play sound effect:
		render.playSoundEffect(&loseGame);
		//open screen:
		gameOverScreen.open = true;
	}

	//timer:
	if (time >= 0 && pauseScreen.open == false && instructionsOpen == false && winScreen.open == false) {
		time -= 0.025;
	}

	//score:
	int newScore = 0;
	for (int i = 0; i < NUM_WORDS; i++) {
		if (grid.wordToFind[i].isFound == true) {
			newScore += grid.wordToFind[i].numLetters * POINTS_PER_LETTER;
		}
	}
	score = newScore;
}

//--------------------------------------------------------------
void ofApp::draw(){
	//draw grid:
	render.drawGrid(&grid);
	
	//draw time:
	render.drawText("TIME REMAINING:", 850, 400);
	render.drawText(ofToString((int)time), 875, 425);

	//draw score:
	render.drawText("SCORE:", 850, 475);
	render.drawText(ofToString(score), 875, 500);

	//draw buttons:
	render.drawButton(&pauseButton, "pause");
	render.drawButton(&instructionsButton, "instructions");

	//draw screens:
	render.displayScreen(&winScreen);
	render.displayScreen(&pauseScreen);
	render.displayScreen(&gameOverScreen);

	//draw instructions:
	if (instructionsOpen == true) {
		render.drawImage(&instructions, 0, 0);
		render.drawButton(&instructionsButton, "close");
	}

	if (winScreen.open == false && pauseScreen.open == false && gameOverScreen.open == false && instructionsOpen == false) {
		if (grid.gameNum == 0) {
			render.drawImage(&animals, 0, 0);
		}
		else if (grid.gameNum == 1) {
			render.drawImage(&sports, 0, 0);
		}
		else if (grid.gameNum == 2) {
			render.drawImage(&witch, 0, 0);
		}
	}
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

					//if wrong letter:
					if (grid.letter[i][j].word == -1) {
						//update timer:
						time -= 5;
						//play sound effect:
						render.playSoundEffect(&wrong);
					}

					//if right letter:
					else {
						//update foundLetters:
						grid.wordToFind[grid.letter[i][j].word].foundLetters++;
						//set clicked to true:
						grid.letter[i][j].clicked = true;
					}
				}
			}
		}
	}

	
	//BUTTONS:
	
	//win screen (new game button):
	if (winScreen.button.inside(x, y) && winScreen.open == true) {
		//closes screen:
		winScreen.open = false;
		//resets game:
		Grid newGrid;
		grid = newGrid;
		setup();
	}
	//game over screen (new game button):
	if (gameOverScreen.button.inside(x, y) && gameOverScreen.open == true) {
		//closes screen:
		gameOverScreen.open = false;
		//resets game:
		Grid newGrid;
		grid = newGrid;
		setup();
	}
	//paused screen (unpause button):
	if (pauseScreen.button.inside(x, y) && pauseScreen.open == true) {
		//plays sound effect:
		render.playSoundEffect(&click);
		//closes screen:
		pauseScreen.open = false;
	}
	//home screen (pause button):
	if (pauseButton.inside(x, y) && winScreen.open == false && pauseScreen.open == false && gameOverScreen.open == false) {
		//plays sound effect:
		render.playSoundEffect(&click);
		//opens screen:
		pauseScreen.open = true;
	}
	//home screen (instructions button):
	if (instructionsButton.inside(x, y) && winScreen.open == false && pauseScreen.open == false && gameOverScreen.open == false) {
		//plays sound effect:
		render.playSoundEffect(&click);
		if (instructionsOpen == false) {
			//opens screen:
			instructionsOpen = true;
		}
		else if (instructionsOpen == true) {
			//closes screen:
			instructionsOpen = false;
		}
	}
}

void ofApp::keyPressed(int key) {
	//SPACEBAR:
	if (key == 32 && lightMode == false) {
		render.primaryColor = ofColor(7, 55, 99);
		render.secondaryColor = ofColor(255, 255, 255);
		lightMode = true;
	}
	else if (key == 32 && lightMode == true) {
		render.primaryColor = ofColor(255, 255, 255);
		render.secondaryColor = ofColor(7, 55, 99);
		lightMode = false;
	}
}