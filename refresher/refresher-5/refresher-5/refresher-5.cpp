//The refresher.cpp project is used to refresh yourself on the basics of C++ and is heavily commented.
//Book used - Gaddis C++ Early Objects, 10th Ed.


//Chapter 6 Refresher: Functions
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
int getUserInput();
int getSum(int num1, int num2);
void doubleNum(int &refVar);


/*
The main is where program execution starts and ends.
*/
int main()
{
	/*
	This program will show the basics of a function.
		-I won't be going into reference variables or default prototyping/default values.
	*/
	int userInput;						//User input
	int num1 = 10;						//Defining 10 as number 1
	int sum;							//Sum of userInput * 10
	
	//Calling the getUserInput function, which accepts an int and returns an int.
	userInput = getUserInput();
	
	//Calling the getSum Function, which accepts two int variables.
	sum = getSum(num1, userInput);

	cout << "Sum of: " << userInput << " * " << num1 << " is: \n";
	cout << sum;


	int refNum = 2;
	cout << "\nReference variable test : current number is - " << refNum << endl;
	doubleNum(refNum);
	cout << "\nCalled the 'doubleNum' function which takes a refVar argument. current number is now - " << refNum << endl;

	return 0;
}


/*
getUserInput
	-gets a number from the user.
	-stores it in the userInput variable.
*/
int getUserInput()
{
	int input;
	cout << "What number do you want me to multiple by 10?\n";
	cin >> input;

	return input;
}


/*
getSum
	-Multiplies userInput by 10.
	-Returns value
*/
int getSum(int num1, int num2)
{
	int sum;
	sum = num1 * num2;

	//Returning the sum of num1 (10) * num2 (userInput)
	return sum;
}

void doubleNum(int &refVar) 
{
	refVar *= 2;

}

//End of Chapter 6 - please proceed to refresher - 6 for Reference variable practice.