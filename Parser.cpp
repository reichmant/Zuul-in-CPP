//#include <iostream>
//#include <string>
#include <algorithm>
#include <cctype>
#include <sstream>
//#include <set>
#include "Parser.h"
#include "Command.h"
#include "CommandWords.h"

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
 * @version 2015.10.12
 */

      // source of command input

    /**
     * Create a parser to read from the terminal window.
     */
     Parser::Parser() 
     {
     	//CommandWords* commands = new CommandWords(); //lol we don't need this
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
     Command Parser::getCommand() 
     {
     	//string Command1 = "";
     	string inputLine = "";   // will hold the full input line
        string word1 = "";
        string word2 = "";

        getline(cin, inputLine); //asks for both words

        istringstream iss(inputLine);
        string word;
        iss >> word1;
        iss >> word2;
        //while(iss >> word)
        //{
        //	if(word1 != "")
        //	{
        //		word2 = word;
        //	}
        //	else
        //		{
        //			word1 = word;
        //		}
        //}

        //cout << word1 + word2 << endl; //TESTING. here 
        cout << word1 << endl;
        cout << word2 << endl;
        //Check whether this word is recognized. Create command if it is,
        //but make null command if not.
        if (commands.isCommand(word1))
        {
        	return Command(word1, word2);
        }
        else {
        	return Command("", word2);        	
        }
        



        /*cout << "> " << endl;     // print prompt

        inputLine = reader.nextLine();

        // Find up to two words on the line.
        Scanner tokenizer = new Scanner(inputLine);
        if(tokenizer.hasNext()) {
            word1 = tokenizer.next();      // get first word
            if(tokenizer.hasNext()) {
                word2 = tokenizer.next();      // get second word
                // note: we just ignore the rest of the input line.
            }
        }
	*/


/*
               string inputLine;   // will hold the full input line
               cin << inputLine;
               string splitAt = " " //where we split commands. A Delimiter?!?!?
               string word1 = "";
               string word2 = "";
               int location;
               int next = -1;

			cout << ("> ") << endl;     // print prompt

			vector<string> myList;
			myList.push_back("go");
			myList.push_back("quit");
			myList.push_back("help");
			for (vector<string>::iterator item = myList.begin();
				item != myList.end();
				item++)
			{
            string word = *item; // dereference the item
            cout << word;
            
            while (next != string::npos);
            
            if(commands.isCommand(word1)) 
            {
            	return Command(word1, word2);
            }
            else {
            	return Command(0, word2);
            	location = next + 1;
            next = inputLine.find_first_of( splitAt, location );
            cout << inputLine.substr( location, next - location ) << endl;
            inputLine.push_back( location );

            	

            	
/*

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

			vector<string> words;
			while
			{

			}



			inputLine = reader.nextLine();

        // Find up to two words on the line.
        /* Scanner tokenizer = new Scanner(inputLine);
        if(tokenizer.hasNext()) {
            word1 = tokenizer.next();      // get first word
            if(tokenizer.hasNext()) {
                word2 = tokenizer.next();      // get second word
                // note: we just ignore the rest of the input line.
           }
      }
	*/ /*
        // Now check whether this word is known. If so, create a command
        // with it. If not, create a "null" command (for unknown command).
      if(commands.isCommand(word1)) {
      	return new Command(word1, word2);
      }
      else {
      	return new Command(null, word2); 
      */
      }

    /**
     * Print out a list of valid command words.
     */
     void Parser::showCommands()
     {
     	commands.showAll();
     }
