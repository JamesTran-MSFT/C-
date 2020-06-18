//The refresher.cpp project is used to refresh yourself on the basics of C++ and is heavily commented.
//Book used - Gaddis C++ Early Objects, 10th Ed.


//Chapter 6 Refresher: Functions - Reference variables
/*
#Include statements which are ran before the program runs.
	In other words, it initializes the program with contents from other files.
*/
#include "pch.h"
#include <iostream>


/*
This is needed for console output.
	the program needs access to the std namespace because every name created by the iostream file is part of that namespace.
*/
using namespace std;

//Function Prototypes
void getInput (int &refVar);
void doubleNum(int &refVar);
int dblNum(int num);


/*
The main is where program execution starts and ends.
*/
int main()
{
	/*
	This program will show the basics of a reference variable function.
		-I won't be going into reference variables or default prototyping/default values.
	*/
	int userInputNum = 0;						//User input
	
	cout << "userInputNum is currently =  " << userInputNum << endl;
	cout << "\nCalling the getInput function, which accepts a reference variable: \n" << endl;
	getInput(userInputNum);
	cout << "\n-------------------------------------------------------------------\n\n";

	cout << "\nGot user input for number. userInput is: " << userInputNum << endl;
	cout << "\nCalling the doubleNum function, which accepts a reference variable and doubles it: " << endl;
	doubleNum(userInputNum);
	cout << "\nuserInputNum is now: " << userInputNum << endl;
	cout << "\n-------------------------------------------------------------------\n\n";

	cout << "\n\nNow that the reference variable is doubled. We will pass it to the dlbNum function, which accepts an int and not a refVar\n";
	cout << "\ndlbNum header: int dlbNum (int num) \n\n";
	dblNum(userInputNum);
	cout << "\nuserInputNum outside the dblNum function, in the Main: \n" << userInputNum << endl;
	cout << "\n-------------------------------------------------------------------\n\n";


	return 0;
}

/*
getInput:
	Input: A reference variable.
	Return: void.
Input will change the value in main.
*/
void getInput(int &refVar)
{
	cout << "What number do you want to enter? \n";
	cin >> refVar;
}

/*
doubleNum:
	Input: A reference variable.
	Return: void.
Reference variable will double the value in main.
*/
void doubleNum(int &refVar)
{
	refVar *= 2;

}

/*
dblNum:
	Input: An Int.
	Return: int.
Value will only be doubled inside the function. In the main nothing will change.
*/
int dblNum(int num) 
{
	num *= 2;
	cout << "\nuserInputNum inside the dblNum function: " << num << endl;
	cout << "\n-------------------------------------------------------------------\n\n";
	return num;
}

//End of Chapter 6 - please proceed to refresher - 7 for Chapter 8, Arrays and Vectors (skipping chapter 7 - Classes and Objects).