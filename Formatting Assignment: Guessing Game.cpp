// Dustin Price, IT-312-J5056 Software Devel w/C++.Net 22EW5, 5/6/2022, 1-3 Formatting Assignment: Guessing Game 

//Including File Directories 
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Start for main
int main()
{

	//Seed the random number generator
	srand(time(0));

	// Declaring the interger variables
	int selectedNumber = rand()%20+1; //Generting a randon number between 1 and 20 
	int numberOfTries = 0;
	int inputtedGuess;

	// This is printing out a message
	cout << "Guess My Number Game\n\n";


	//Ask the user for a value until the correct number is entered
	do
	{
		//Print message
		cout << "Enter a guess between 1 and 20:";

		//This is reading the number from the user
		cin >> inputtedGuess;

		//This is incrementing the number of tries to guess the correct number
		++numberOfTries;

		//Start of if else statement in do while loop. 
		if(inputtedGuess>20 || inputtedGuess<1) {
			cout << "Your guess is out of range. \n\n";
		}

		//Check to see if inputtedGuess is greater than the selectnumber
		else if (inputtedGuess > selectedNumber) {
			cout << "Too high!\n\n";
		}

		// checking if inputtedGuess less than the selectNumber
		else if (inputtedGuess < selectedNumber) {
			cout << "Too low!\n\n";
		}

	} while (inputtedGuess != selectedNumber); // Loops the program until you guess the right number

	//Congratulate the user and end the program
	cout << "\nCongratulations! You solved it in " << numberOfTries << " tries!\n";

	return 0;
}
