<<<<<<< HEAD
#include <iostream>
#include <set>
#include <string>
#include <map>
//#include "Game.h"
#include "Room.h"
//#include "Command.h"
//#include "CommandWords.h"
=======
#include "Game.h"
#include "Room.h"
#include "Command.h"
#include "CommandWords.h"
>>>>>>> origin/master
using namespace std;

/**
 * Class Room - a room in an adventure game.
 *
 * This class is part of the "World of Zuul" application. 
 * "World of Zuul" is a very simple, text based adventure game.  
 *
 * A "Room" represents one location in the scenery of the game.  It is 
 * connected to other rooms via exits.  For each existing exit, the room 
 * stores a reference to the neighboring room.
 * 
 * @author  Michael Kölling and David J. Barnes
 * @author  Thomas Reichman
 * @version 2011.08.08
<<<<<<< HEAD
 * @version 2015.10.12
 */
 Room::Room()
 {
 	//can't do anything here or it won't work? Protoyping error...
 }
 void Room::setDescription(string description){
 	this->description = description;
 	//exits = map<string, Room>();
 }
    /**
     * Define an exit from this room.
     * @param direction The direction of the exit.
     * @param neighbor  The room to which the exit leads.
     */
     void Room::setExit(string direction, Room* neighbor){
     	exits[direction] = neighbor;
     }
    /**
     * @return The short description of the room
     * (the one that was defined in the constructor).
     */
     string Room::getShortDescription(){
     	//return description;
     	return description;
     }
    /**
     * Return a description of the room in the form:
     *     You are in the kitchen.
     *     Exits: north west
     * @return A long description of this room
     */
     string Room::getLongDescription(){
     	return "Here's the description: You are " + description + ".\n" + getExitString();
     }
     
    /**
     * Return a string describing the room's exits, for example
     * "Exits: north west".
     * @return Details of the room's exits.
     */
     string Room::getExitString(){
     	string returnString = "Available exits are: ";
     	cout << endl;
     	//string modExit = "";
     	map <string, Room*>::iterator i;
     	//for (map<string,Room>::iterator item = exits.begin(); item != exits.end();item++) {
     	//	modExit = item->first;
     	//	returnString += " " + modExit;
     	for (i = exits.begin(); i != exits.end(); i++)
     	{
     		returnString += i-> first + "\n";    		
     	}
     	return returnString;
 	//}
 	//return returnString;
     
     }

    /**
     * Return the room that is reached if we go from this room in direction
     * "direction". If there is no room in that direction, return null.
     * @param direction The exit's direction.
     * @return The room in the given direction.
     */
     Room* Room::getExit(string direction){
     	if (exits.find(direction) != exits.end())
     		cout << exits[direction] << endl;
     	else
     	{
     	cout << "If you see this, then we'll have to fix the next line..." << endl;
     	//cout << NULL << endl;
     	}
     }
=======
 * @version 2015.10.05
 */

 Room::Room(string description){
 	this->description = description;
 }

 void Room::setExit(string direc, Room neighbor){
 	exits[direction] = neighbor;
 }
 string Room::getShortDescription(){
 	return description;
 }
 string Room::getLongDescription(){
 	return "Here's the description: You are " + description + ".\n" + getExitString();
 }
 string Room::getExitString(){
 	string toreturn = "Exits:";

 	for (map<string,Room>::iterator item = exits.begin(); item != exits.end();item++) {
 		toreturn += " " + item->first;
 	}
 	return toreturn;
 }
 Room *Room::getExit(string direc){
 	if (exits.find(direc) != exits.end())
 		return exits[direc];
 	return NULL;
 }

 
>>>>>>> origin/master
