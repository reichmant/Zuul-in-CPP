/**
*
* Runs the zuul game
* @author Thomas Reichman
**/
#include <iostream>
#include "CommandWords.h"
#include "Command.h"
#include "Parser.h"
#include "Game.h"
using namespace std;
int main()
{
	// //put all the methods here to do testing.
	// //then do cout << PASS TEST 1 << endl.
	//Instance Variables
	
	//TEST COMMAND-----------
	//string commandWord;
	//string secondWord;
	//Command(string firstWord, string secondWord);
	//string getCommandWord();
	//string getSecondWord();
	//bool isUnknown();
	//bool hasSecondWord();

	//TEST COMMANDWORDS------
	//vector<string> validCommands;
	//CommandWords();
	//bool isCommand(string aString); //DON'T NEED ASTRING?
	//void showAll();

	//TEST PARSER----------------
	//CommandWords commands;
	//Parser();
	//Command getCommand(); 
	//void showCommands();

	//TEST ROOM------------------
	//string description;
	//map<string,Room*> exits;
	//string getExitString();
	//Room();
	//void setDescription(string description); // see relevant comment in Game for why. Basically we need this method to avoid a bug.
	//void setExit(string direction, Room* neighbor);
	//string getShortDescription();
	//string getLongDescription();
	//Room* getExit(string direction);

	//TEST GAME------------------
	//Parser parser;
 	//Room* currentRoom;
 	//string commandWord;
 	//void createRooms();
 	//void printWelcome();
 	//bool processCommand(Command command);
 	//void printHelp();
 	//void goRoom(Command command);
    //bool quit(Command command); //"Quit" was entered. Check the rest of the command to see
    //Game(); //Create the game and initialise its internal map.
    //void play();

	Game theGame;
	theGame.play();
}
