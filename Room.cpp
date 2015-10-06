#include "Game.h"
#include "Room.h"
#include "Command.h"
#include "CommandWords.h"
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

 