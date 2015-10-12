/**
 * This class is part of the "World of Zuul" application.
 * "World of Zuul" is a very simple, text based adventure game.
 *
 * This class holds information about a command that was issued by the user.
 * A command currently consists of two strings: a command word and a second
 * word (for example, if the command was "take map", then the two strings
 * obviously are "take" and "map").
 *
 * The way this is used is: Commands are already checked for being valid
 * command words. If the user entered an invalid command (a word that is not
 * known) then the command word is <NULL>.
 *
 * If the command had only one word, then the second word is <NULL>.
 *
 * @author  Michael Kölling and David J. Barnes
 * @author  Thomas Reichman
 * @version 2011.08.08
 */
#include "Command.h"

	/**
	* Create a command object. First and second word must be supplied, but
	* either one (or both) can be NULL.
	* @param firstWord The first word of the command. NULL if the command
	* was not recognised.
	* @param secondWord The second word of the command.
	*/
	Command::Command(string firstWord, string secondWord)
	{
		commandWord = firstWord;
		this->secondWord = secondWord;
	}

	/**
	* Return the command word (the first word) of this command. If the
	* command was not understood, the result is NULL.
	* @return The command word.
	*/
	string Command::getCommandWord()
	{
		return commandWord;
	}

	/**
	* @return The second word of this command. Returns NULL if there was no
	* second word.
	*/
	string Command::getSecondWord()
	{
		return secondWord;
	}

	/**
	* @return true if this command was not understood.
	*/
	bool Command::isUnknown()
	{
		return (commandWord.empty());
	}

	/**
	* @return true if the command has a second word.
	*/
	bool Command::hasSecondWord()
	{
		if (secondWord.empty())
		{
			return false;
		}
		//else{
		//	return true;
		//}//return (secondWord != NULL);
	}

