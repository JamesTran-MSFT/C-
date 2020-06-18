//The refresher.cpp project is used to refresh yourself on the basics of C++ and is heavily commented.
//Book used - Gaddis C++ Early Objects, 10th Ed.


//Chapter 7 Refresher: Arrays
/*
#Include statements which are ran before the program runs.
	In other words, it initializes the program with contents from other files.
*/
#include "pch.h"
#include <iostream>
#include <string>


/*
This is needed for console output.
	the program needs access to the std namespace because every name created by the iostream file is part of that namespace.
*/
using namespace std;

//Function Prototypes



/*
The main is where program execution starts and ends.
*/
int main()
{

	const int arraySize = 5;						//Making a constant array size
	int testArray[arraySize];						//Setting size of "testArray" to 5

	/*
	Array basics - Lab 1
	*/
	testArray[1] = 20;								//Initializing array index 1 equal to 20
	testArray[3] = 5;								//Initializing array index 3 equal to 5

	cout << testArray[1] << endl;					//Printing the value at array element 1
	cout << testArray[3] << endl;					//Printing the value at array element 3

	cout << "End of Lab 1 \n";


	/*
	Array basics - Lab 2
	*/
	//New string array set to size 5.
	//Partialliy initiliazed
	string strArray[arraySize] = { "\nJames", "Stephanie", "Mango", "Grayson" };					
	int i = 0;										//int i is the counter variable

	//While loop to increment through array
	while (i < arraySize)
	{
		cout << strArray[i] << " " << endl;
		i++;
	}
	cout << "End of Lab 2\n";



	/*
	Array basics - Lab 3
	*/
	//Initializing random number variables
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;

	/*
	Creating a new Int array
	Initializing this array with the number variables above
	This can simulate getting user input for an n sized array
	*/
	int arrayTwo[] = { num1, num2, num3 };

	cout << "\nArray Two's index values are: \n";

	//Using a range-based for loop to loop through the array
	for (int val : arrayTwo)
	{
		cout << val << " " << endl;
	}
	cout << "\nEnd of Lab 3\n";

	/*
	Array basics - Lab 4
	*/
	//Demonstrating how to loop through a string
	string name = "James";


	//Looping through the string the same way you would an array
	cout << "Hi \n";
	for (int i = 0; i < name.length(); i++) 
	{
		cout << name[i] << " ";
	}
	cout << "\nEnd of Lab 4\n";


	/*
	Array basics - Lab 5
	*/
	//Using the typedef statement
	//typedef allows an alias to be associated with a simple or structured data type

	//The following perform the same operation of creating a 100 element double array
	typedef double scores[100];
	scores finalExam;							//This is a 100 elemenet double array. The alais allows for ease of translating what the code does.
	double finalExam[100];						//This means the same as above.

	cout << "\nEnd of Lab 5\n";


	//Bookmark page 571. "Intro to the STL vector"

	return 0;
}


//End of Chapter 8 - please proceed to refresher - 8 for Chapter 9, Searching, Sorting, and Algorithms.