#ifndef Parser_H
#define Parser_H

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include "Command.h"
#include "CommandWords.h"
//#include <vector>
using namespace std;

class Parser
{
private:
	CommandWords commands();// commands;
public:
	Parser();
	Command getCommand();
	void showCommands();
};

#endif
