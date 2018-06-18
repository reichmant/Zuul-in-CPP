#include <iostream>
#include <string>
using namespace std;
/*
	Declares class Command to exist, including its methods and
	instance variables.
*/
#ifndef COMMAND_H
#define COMMAND_H

class Command
{
	private:
	//Instance Variables
	string commandWord;
	string secondWord;
public:
		//constructors DON'T NEED VOID
		Command(string firstWord, string secondWord);
		string getCommandWord();
		string getSecondWord();
		bool isUnknown();
		bool hasSecondWord();
};

#endif

