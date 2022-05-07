// Dustin Price, IT-312-J5056 Software Devel W/C++.Net 22EW5, 5/6/2022, 1-2) 
// DataTypes.cpp : The data types to declare each of the variables is missing.
// Based on the value being stored in the variable and the comments beside it, 
// fill in the data type at the beginning of each line.  Then compile and run 
// program to make sure you selected the correct types.
//
// After you submit your answers, try changing the values stored in the
// variables.  What can you learn about the different data types?
//

#include "pch.h"
#include "stdafx.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	double classAverage = 90.7; //Decimal number. Double floating point numbers with decimals. 
	char letterScore = 'A'; //Single letter. Char stores singel characters.
	int testScore = 95; //Whole number value. Whole numbers are intergers. 
	float classTestAverage = 88.4f; //Decimal number, notice the 'f' at the end. Floats are used for decimals and exponential values
	enum colorCode { //enum helps define groups of content together. Way to define and group integral constants. 
		Green = 1,
		Yellow = 5,
		Red = 10
	} gradebookColor; //Stores list of values
	gradebookColor = Green; //This line does not need a declaration, it was declared in the line above
	bool isStudentPassing = true; //Could be true or false. Bool stands for true or fales. 

	cout << "The class average is currently "
		<< classAverage
		<< endl;
	cout << "The class test average was "
		<< classTestAverage
		<< endl;
	cout << "Your test score was "
		<< testScore
		<< endl;
	cout << "Your current letter score is "
		<< letterScore
		<< endl;
	cout << "The color of your gradebook entry is "
		<< gradebookColor
		<< endl;
	cout << "Are you passing? "
		<< boolalpha		//This line allows the word 'true' or 'false' to be printed instead of '0' or '1'
		<< isStudentPassing
		<< endl;
	return 0;
}
