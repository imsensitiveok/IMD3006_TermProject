#pragma once

class Words
{
public:

	//DATA:
	string word;
	int numLetters;
	int foundLetters;
	bool isFound;

	//FUNCTIONS:
	Words();
	~Words();
	void check();

};