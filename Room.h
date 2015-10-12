//@author Thomas Reichman
#include <iostream>
#include <string>

//#include <iostream>
//#include <string>
#include <vector>
#include <map>
#include <set>

#include "Parser.h"
using namespace std;

#ifndef ROOM_H
#define ROOM_H
class Room
{
private:
	string description;
	map<string,Room*> exits;
	string getExitString();
public:
	map<string, Room*> exits;
	//Room(string desc);
	Room();
	void setDescription(string description); // see relevant comment in Game for why. Basically we need this method to avoid a bug.
	void setExit(string direction, Room* neighbor);
	string getShortDescription();
	string getLongDescription();
	string getExitString();
	Room* getExit(string direction);

};

#endif