// Dustin Price, IT-312-J5056 Software Devel w/C++.Net 22EW5, 5/25/2022, 4-1 Debugging Assignment: Building User Option Menu
/* This debugging assignment seem to be a easier assignemnt for debugging then the others. Most of the issue was spelling or captializition issues.
the error list help me find some of this. I just look around where the red lines where at and found the mistakes. The issue that I had was finding the mistake for
forgetting to add user namespace std;. This seem to be the tricky one to find but after some time past I was able to find this mistake.*/
// UserMenu_Solution.cpp : This code contains five errors before it will work as desired.  Find those errors, 
// document a description of the errors and their fix, and fix them.  Try using the debugger to 
// step through the program to find the bugs.  As you step through, take notice of the information
// you can see.  

//This program builds a menu based on switchcase statements to determine where a user wants to go in the program.
// Program options are then to solve the Tower of Hanoi problem, view the user profile, or exit the program.

// #include "stdafx.h"
#include <cstdlib>
#include <iostream>
using namespace std; //Issue 1: Need this library for the cin and cout to work correctly. Need or C++ compilers

void Tower(int, char, char, char);

int main()
{
	int choice;
	cout << "1. Solve the Tower of Hanoi" << endl;
	cout << "2. View Your Profile" << endl;
	cout << "3. Exit" << endl;
	cout << "Enter your choice : " << endl;
	cin >> choice;

	switch (choice) //Issue 2: The choice here was a capitial C when other were lower case c. C needed to be c.
	{
	case 1:
		system("cls");
		int numDiscs;

		cout << "**Tower of Hanoi**\n";
		cout << "Enter the number of discs :" ; //Issue 3: Forgot the "" around Enter the number of discs :. needed ""
		cin >> numDiscs;
		cout << "\n\n";
		Tower(numDiscs, 'A', 'B', 'C');
		break;

	case 2: //Issue 4: Was missing the 2 with case. It was case : and should be case 2:
		cout << "Username:\t\tPlayer 1" << endl;
		cout << "Gamertag:\t\tImTheBest" << endl;
		cout << "No. Hours Played:\t173" << endl;
		break;

	case 3:
		cout << "Now Exiting." << endl;
		break;
	default:
		cout << "You did not choose anything...so exit this program." << endl;
	}

	return 0;
}


void Tower(int numDiscs, char from, char aux, char to) {
	if (numDiscs == 1) {
		cout << "\tMove disc 1 from " << from << " to " << to << "\n";
		return;
	}
	else {
		Tower(numDiscs - 1, from, to, aux); //Issue 5: tower here is lower case when above it is capitial. Change this tower to Tower. 
		cout << "\tMove disc " << numDiscs << " from " << from << " to " << to << "\n";
		Tower(numDiscs - 1, aux, from, to);
	}
}
