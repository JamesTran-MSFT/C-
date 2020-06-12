//The refresher.cpp project is used to refresh yourself on the basics of C++ and is heavily commented.
//Book used - Gaddis C++ Early Objects, 10th Ed.


//Chapter 2 Refresher:
/*
#Include statements which are ran before the program runs.
	In other words, it initializes the program with contents from other files.
*/
#include "pch.h"
#include <iostream>
#include <string>		//needed for the string data type

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
	//console output - showing the words "Hello World"
	cout << "Hello World";

	//variables - integer, string, double, bool
	int number = 5;			//integer variable, named number, which equals the value of 5.
	string name = "James";	//string variable, named name, which equals the value of James.
	double number2 = 10000; //double variable, named number2, which equals the value of 10000.
	bool flag = false;		//boolean variable, named flag, which is set to false.

	//console output showing the above variables.
	// "\n" simulates hitting the "enter" button.
	cout << "\n" << number << "\n";
	cout << name << "\n";
	cout << number2 << "\n";

	//performing arithmetic operations with number and number2
	double sum;				//an empty double variable named sum

	sum = number + number;	//adding 5 + 5
	//sum is now = 10
	cout << "Sum is equal to 10? Sum = " << sum << endl;

	sum = sum / 2;			//dividing the sum by 2
	//sum should now equal 5.
	cout << "Sum is divided by two is now? Sum = " << sum << endl;

	sum = number * number2; //multiplying number and number2
	//sum should now equal 50000
	cout << "Sum is a large number: " << sum << endl;

	cout << "\n\n----------------- \n\n";
	cout << "End of Chapter 2 " << endl;
	
	//Please proceed to refresher - 2 for chapter 3.
}



