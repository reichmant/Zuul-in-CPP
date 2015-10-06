#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <set>
#include "Parser.h"

using namespace std;

/**
 * This class is part of the "World of Zuul" application. 
 * "World of Zuul" is a very simple, text based adventure game.  
 * 
 * This parser reads user input and tries to interpret it as an "Adventure"
 * command. Every time it is called it reads a line from the terminal and
 * tries to interpret the line as a two word command. It returns the command
 * as an object of class Command.
 *
 * The parser has a set of known command words. It checks user input against
 * the known commands, and if the input is not one of the known commands, it
 * returns a command object that is marked as an unknown command.
 * 
 * @author  Michael Kölling and David J. Barnes
 * @author  Thomas Reichman
 * @version 2011.08.08
 * @version 2015.10.05
 */

      // source of command input

    /**
     * Create a parser to read from the terminal window.
     */
     Parser::Parser() 
     {
     	//lol we don't need this
     }


/*
     Parser::toLowerCase(string data)
     {
     	tolower('A');
     	transform(data.begin(), data.end(), data.begin(), ::tolower);
     	return data;
     }
*/


    /**
     * @return The next command from the user.
     */
     <setstring> Parser::getCommand() 
     {

               string inputLine;   // will hold the full input line
               cin << inputLine;
               string part1 = "";
               string part2 = "";

			cout << ("> ") << endl;     // print prompt
			inputLine = toLowerCase(inputLine);
			set<string> words;

			int location = inputLine.find_first_of(" ");
			while (location != string::npos) 
			{
				string word = inputLine.substr(0,location);
				if (word != "") {
					words.insert(word);
				}
          inputLine = inputLine.substr(location+1); // error here during class
          location = inputLine.find_first_of(" ");
     }
        words.insert(inputLine); // down to one word
        return words;
/*

			string delimiters = " ,";
			int location;
			int next = -1;
			vector<string> words;
			while
			{

			}



			inputLine = reader.nextLine();

        // Find up to two words on the line.
        /*Scanner tokenizer = new Scanner(inputLine);
        if(tokenizer.hasNext()) {
            word1 = tokenizer.next();      // get first word
            if(tokenizer.hasNext()) {
                word2 = tokenizer.next();      // get second word
                // note: we just ignore the rest of the input line.
           }
      }
	*/
        // Now check whether this word is known. If so, create a command
        // with it. If not, create a "null" command (for unknown command).
      if(commands.isCommand(word1)) {
      	return new Command(word1, word2);
      }
      else {
      	return new Command(null, word2); 
      } */
      }
    /**
     * Print out a list of valid command words.
     */
     void Parser::showCommands()
     {
     	commands.showAll();
     }
