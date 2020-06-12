// twoSumLeetCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

/*
class Solution {

public: 
	vector<int> twoSum(vector<int> & nums, int target)
	{
			   
	}
	   	 
};
*/



vector<int> twoSum(vector<int> &numVector, int targetNum)
{
	vector<int> correctNums;						//vector to hold the correct numbers
	int target = targetNum;							//Integer target = targetNum
	int i = 0;										//counter variable						
	bool match = false;

	int sum;
	int j = i + 1;

	sum = numVector[i] + numVector[j];

	while (match == false && i < numVector.size())
	{
		if (sum == target)
		{
			correctNums.assign(1, numVector[i]);
			correctNums.assign(1, numVector[j]);

			cout << "\nThe vector index: " << i << " & " << j << " = " << target;
			match = true;
		}
		return correctNums;

		if (j == numVector.size())
		{
			i++;
			j = i + 1;
		}

		else
		{
			cout << "\nNo values equal the target";
		}
	}
	return correctNums;
}


int main()
{
	vector<int> v1;								//Vector of integers labeled v1
	int target = 14;							//Selecting 14 as the random number
	int numbers[] = { 1,3,5,7,9 };				//Random numbers

	//Assigning numbers array size and 
	//First 5 elements in the array to vector v1
	v1.assign(numbers, numbers + 5);


	//Elements in the Vector
	cout << "Elements in the vector: \n";
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " \n";
	}

	//Passing vector and target to the twoSum function
	cout << "\nPassing vector and target to the twoSum function\n";
	twoSum(v1, target);

	cout << "\n\nProgram end";
}

