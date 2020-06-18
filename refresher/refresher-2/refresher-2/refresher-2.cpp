//The refresher.cpp project is used to refresh yourself on the basics of C++ and is heavily commented.
//Book used - Gaddis C++ Early Objects, 10th Ed.


//Chapter 3 Refresher: Expressions and Interactivity
/*
#Include statements which are ran before the program runs.
	In other words, it initializes the program with contents from other files.
*/
#include "pch.h"
#include <iostream>

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
	int length, width;									//int data type, named length and width. 
	int area;											//int data type, named area. Put on a separate line to show different ways of declaring variables.

	//console output statement to let the user know what we're trying to do.
	cout << "Calculate the area of a rectangle program \n\n";
	
	//Prompting for user input using the "cin" object
	cout << "What is the length and width of the rectangle? \n";
	cout << "----------------------------------------------------------\n";
		//input
		cout << "Length = ";							//Prompting for Length
		cin >> length;									//Asigning the number entered in the length variable
		cout << "Width = ";
		cin >> width;


	//Calculating Area and outputting result
	area = length * width;
	cout << "\nThe area of the rectangle is: \n" << area << endl;
	cout << "\nEnd of the Area program\n\n";

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------//

	//New program to show the difference between inputting an int, double, and char
	int number;										//int data type, named number, and is emtpy.
	double decimalNum;								//double data type, named decimalNum, and is empty.
	char letter;									//char data type, named letter, and is empty.

	//Prompt telling user what the program does
	cout << "\nThis program will show you what the input and \noutput of user input looks like for different data types.\n";
	
	//Prompting for user input
	cout << "\nEnter a number: \n";
	cin >> number;									//Assigned the user input into the "number" variable

	cout << "Enter a decimal number - i.e 5.7\n";
	cin >> decimalNum;

	cout << "Enter a letter - i.e A or a\n";
	cin >> letter;

	//Outputting all three variables.
	cout << "\nAll three variables you entered were: \n";
	cout << number << " : " << decimalNum << " : " << letter << endl;

	cout << "\nEnd of the user input and console output program";

	//End of Chapter 3 - please proceed to refresher - 3 for chapter 4 Making Decisions.
	
}



