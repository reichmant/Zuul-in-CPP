#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include "Room.h"
#include "Parser.h"
using namespace std;
/**
 *  This class is the main class of the "World of Zuul" application. 
 *  "World of Zuul" is a very simple, text based adventure game.  Users 
 *  can walk around some scenery. That's all. It should really be extended 
 *  to make it more interesting!
 * 
 *  To play this game, create an instance of this class and call the "play"
 *  method.
 * 
 *  This main class creates and initialises all the others: it creates all
 *  rooms, creates the parser and starts the game.  It also evaluates and
 *  executes the commands that the parser returns.
 * 
 * @author  Michael Kölling and David J. Barnes
 * @author  Thomas Reichman
 * @version 2011.08.08
 */



 class Game 
 {
 private:
 	Parser parser;
 	Room currentRoom;
 	void createRooms();
 	void printWelcome();
 	bool processCommand(Command command);
 	void printHelp();
 	void goRoom(Command command);
    bool quit(Command command); //"Quit" was entered. Check the rest of the command to see

public:
    Game(); //Create the game and initialise its internal map.
    void play();
    
};

#endif

