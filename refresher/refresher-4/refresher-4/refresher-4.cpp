//The refresher.cpp project is used to refresh yourself on the basics of C++ and is heavily commented.
//Book used - Gaddis C++ Early Objects, 10th Ed.


//Chapter 5 Refresher: Looping
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
	While loop will loop - while the currentLoop is not equal to 10.
	-Output will show currentLoop value after each loop	
	*/
	cout << "Start of while loop function: \n";
	int loop = 10;				//Loop variable to demonstrate while loop
	int currentLoop = 0;		//Current loop

	while (currentLoop != loop)
	{
		cout << "CurrentLoop = " << currentLoop << endl;
		currentLoop++;
	}
	cout << "\nEnd of while loop function...\n";
	cout << "---------------------------------\n";


	/*
	Do while will loop - while currentLoop is greather than 3.
	-CurrentLoop ends above at 10.
	-CurrentLoop will decrement until it reaches 3.
	*/	
	cout << "Start of Do while loop function: \n";
	do
	{
		//Current loop = 10.
		cout << "CurrentLoop = " << currentLoop << endl;

		//If statement to end the loop at 3.
		if (currentLoop > 3) 
		{
			currentLoop--;		//Decrementing
		}
		

			   
	} while (currentLoop > 3);
	cout << "\nEnd of do while loop function...\n";
	cout << "---------------------------------\n";

	
	/*
	For loop will loop while the index (i) < 10
		-int i = 0	// First portion of loop: declarating an int variable (counter) making it equal to 0
		-i < 10		// Second portion of loop: essentially saying "while i is less than 10".
		-i++		// Third portion of loop: i will increment "while i is less than 10".
	Outputting i for reference.
	*/
	cout << "Start of for loop function: \n";
	for (int i = 0; i < 10; i++) 
	{
		cout << "The value of i is: " << i << endl;
	}
	cout << "\nEnd of for loop function...\n";
	cout << "---------------------------------\n";


return 0;

}
//End of Chapter 5 - please proceed to refresher - 6 for chapter 6 Functions.


