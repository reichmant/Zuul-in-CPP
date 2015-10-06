#include <iostream>
#include <string>

//#include <iostream>
//#include <string>
#include <vector>
#include <map>
#include <set>

//#include "Parser.h"
using namespace std;

#ifndef Room_H
#define Room_H
class Room
{
private:
	string description;
	map<string,Room> exits;
public:
	Room(string desc);
	void setExit(string direction, Room neighbor);
	string getShortDescription();
	string getLongDescription();
	string getExitString();
	Room *getExit(string direc);

};

#endif