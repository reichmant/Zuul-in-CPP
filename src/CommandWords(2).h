#include <iostream>
#include <string>
#include <vector>
//#include <cctype>
//#include <algorithm>
using namespace std;
/*
	Declares class CommandWords to exist, including its methods and
	instance variables.
*/
#ifndef COMMANDWORDS_H
#define COMMANDWORDS_H

class CommandWords
{
	private:
	//Instance Variables
	vector<string> validCommands;
	
public:
		//constructors DON'T NEED VOID
	CommandWords();
	bool isCommand(string aString); //DON'T NEED ASTRING
	void showAll();




};

#endif

