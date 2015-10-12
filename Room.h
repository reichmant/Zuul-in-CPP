<<<<<<< HEAD
//@author Thomas Reichman
=======
>>>>>>> origin/master
#include <iostream>
#include <string>

//#include <iostream>
//#include <string>
#include <vector>
#include <map>
#include <set>

<<<<<<< HEAD
#include "Parser.h"
using namespace std;

#ifndef ROOM_H
#define ROOM_H
=======
//#include "Parser.h"
using namespace std;

#ifndef Room_H
#define Room_H
>>>>>>> origin/master
class Room
{
private:
	string description;
<<<<<<< HEAD
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
=======
	map<string,Room> exits;
public:
	Room(string desc);
	void setExit(string direction, Room neighbor);
	string getShortDescription();
	string getLongDescription();
	string getExitString();
	Room *getExit(string direc);
>>>>>>> origin/master

};

#endif