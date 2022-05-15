/*
Dustin Price
5/14/2022
2-2 Debugging Assignment: Squash the Bugs
IT-312-J5056 Software Devel w/C++.Net 22EW5

Summary:
The 5 issue were not that hard to find. The issue that was the hardest to find was the line ISSUE 5: variable should be total and not fee. This program
help me better understand how to debug a program. I found most of the issue from the error list. After I found all the issue I ran the program and
see that everything is working correctly. I enjoy doing these type of program and look forward to furture debugging program assignments. 

*/

// Squash_The_Bugs.cpp : This code contains five errors before it will work as desired.  Find those errors, 
// document a description of the errors and their fix, and fix them.  Try using the debugger to 
// step through the program to find the bugs.  As you step through, take notice of the information
// you can see.  

// This program gets an input of number of gallons of water used from the user.
// It will then calculate a customer's water bill using the following rules:
// A mandatory environmental fee of $15, plus
// $2.35 per 1000 gallons for the first 6000,
// $3.75 per 1000 gallons for over 6000 to 20000,
// $6.00 per 1000 gallons for over 20000.
// The bill is then displayed to the user.

#include "stdafx.h" 
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double gallons, charge = 0, total;
	const int fee = 15;
	double costUpTo6K = 2.35, costUpTo20K = 3.75, costOver20K = 6.00; // ISSUE 4: int is for whole number. This will need be double since there is decimals. 

	cout << "Enter the total number of gallons used, divided by 1000: ";
	cin >> gallons;

	if (gallons > 20) {
		charge = (gallons - 20) * costOver20K;
		charge = charge + (14 * costUpTo20K); // ISSUE 1: needed a ; for the next line to work. If there is no ; then the next line will have issues
			charge = charge + (6 * costUpTo6K);
	}
	else if (gallons > 6 && gallons <= 20) {
		charge = (gallons - 6) * costUpTo20K; // ISSUE 2: Took away the two == only needed one. == meams equalilty 
		charge = charge + (6 * costUpTo6K);  
	}
	else {
		charge = gallons * costUpTo6K; // ISSUE 3: The variable is wrong, costupto6k is suppose to be costUpTo6K
	}


	total = charge + fee;
	cout << "You have used " << gallons << " thousand gallons of water." << endl;
	cout << "Your total water bill is $" << setprecision(2) << fixed << total; //ISSUE 5: variable should be total and not fee

	return 0;
}
