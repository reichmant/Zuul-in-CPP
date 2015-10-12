<<<<<<< HEAD
//@author Thomas Reichman
=======
>>>>>>> origin/master
#ifndef Parser_H
#define Parser_H

#include <iostream>
#include <string>
<<<<<<< HEAD
#include <new>
#include "Command.h"
#include "CommandWords.h"

=======
#include <cctype>
#include <algorithm>
#include "Command.h"
#include "CommandWords.h"
>>>>>>> origin/master
//#include <vector>
using namespace std;

class Parser
{
private:
<<<<<<< HEAD
	CommandWords commands;
public:
	Parser();
	Command getCommand(); 
=======
	CommandWords commands();// commands;
public:
	Parser();
	Command getCommand();
>>>>>>> origin/master
	void showCommands();
};

#endif
