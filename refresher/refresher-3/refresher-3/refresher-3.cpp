//The refresher.cpp project is used to refresh yourself on the basics of C++ and is heavily commented.
//Book used - Gaddis C++ Early Objects, 10th Ed.


//Chapter 4 Refresher: Making Decisions
/*
#Include statements which are ran before the program runs.
	In other words, it initializes the program with contents from other files.
*/
#include "pch.h"
#include <iostream>
#include <stdlib.h>					//Needed for srand function
#include <time.h>					//Needed for selecting a random time within the srand function

/*
This is needed for console output.
	the program need access to the std namespace because every name created by the iostream file is part of that namespace.
*/
using namespace std;


/*
The main is where program execution starts and ends.
*/
int main()
{
	/*
	Program will be a guessing game.
		-User gets three chances to guess the correct number
		-Value range of 1-10
		-Random number will be chosen at the beginning
	*/
	int userInput;					//Int variable to get user input
	int ranNum;						//Int variable for a random number
	int tries = 3;					//Int varaiable for number of tries
	bool correctInput = false;		//Flag set to false

	srand(time(NULL));				//Initializing a random number

	/*
	Setting the "ranNum" variable prior to program execution
		-Value between 1 - 10
	*/
	ranNum = rand() % 10 + 1;

	while (correctInput = false && tries != 0) 
	{
		//Prompting for user input
		cout << "Please input a guess between 1 - 10\n";
		cin >> userInput;

		//If statements/ decision making statements to confirm user input
		if(userInput < 1 || userInput > 10)
		{
			cout << "User input invalid\n";
			cout << "Exiting program.";
		}

		if (userInput != ranNum) 
		{
			cout << "Incorrect guess. Please try again.\n";
			tries--;				//Decrementing tries each wrong guess
			
			cout << "Please select a number: \n";
				cin >> userInput;

		}

		if(userInput == ranNum)
		{
			correctInput = true;
			cout << "Congratulations! You Chose the correct number.\n";
		}

		return 0;

	}







	

}
//End of Chapter 4 - please proceed to refresher - 4 for chapter 5 Looping.


