<<<<<<< HEAD
//@author Thomas Reichman
#include <iostream>
#include <string>
#include <vector>
#include <new>
=======
#include <iostream>
#include <string>
#include <vector>
>>>>>>> origin/master
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
<<<<<<< HEAD
	bool isCommand(string aString); //DON'T NEED ASTRING?
=======
	bool isCommand(string aString); //DON'T NEED ASTRING
>>>>>>> origin/master
	void showAll();




};

#endif

