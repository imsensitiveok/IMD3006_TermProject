#include "Main.h"

//--------------------------------------------------------------
void ofApp::setup(){

	//setup window:
	ofSetWindowTitle("Word Search");
	ofSetWindowShape(1400, 900);
	ofSetWindowPosition(40, 40);

	//set up variables:
	isPaused = false;
	instructionsOpen = false;
	selectingWord = false;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	//draw grid:
	render.drawGrid(&grid);

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}
