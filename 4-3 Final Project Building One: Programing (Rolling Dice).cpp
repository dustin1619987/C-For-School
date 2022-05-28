// Dustin Price, IT-312-J5056 Software Devel w/C++.Net 22EW5, 5/27/2022, 4-3 Final Project Building One: Programing (Rolling Dice)
/*The point of this program is to have the user input a number. This number is then achieve with the dice being rolled until this number is equalled up to the total rolled.
Each line will have the Dice1 rolled and the number it was rolled then the same thing with dice2. Next the line will have the total of the role for easy view. Once the
total/choosen number is rolled it was output the number you picked and the amount of times it took to ahcieve this. If I recall correctly I remember doing a similar program like this
for C++ in my community college classes 3 years ago. I kind of knew what was needed to get this to work specificly the rand() and srand.*/
//#include "stdafx.h
#include <iostream>
#include <cstdlib>
using namespace std;

//This is where the dice is being roled. Number will be between 1-6 since die usually only have 6 numbers. 
int rollDice() {

	//Declaring Variable for Role Dice
	int roll;
	int min = 1; //Minimum Dice Size
	int max = 6; //Max Dice Size

	//Random Number and math part of the assignment. 
	roll = rand() % (max - min + 1) + min;
	return roll;
}

//Main function
int main()
{
	//This sets a seed for the random generator rand(). If you don't have this then the program won't work. 
	srand(time(0));

	//Declaring Variables
	int numberPicked ,dice1, dice2;
	int diceRolled = 0;
	int total;

	//User inputting number
	cout << "Please input a number between 2 and 12:\n";
	cin >> numberPicked;
	cout << "\n-----------------------------------\n";

	//Rolling Dice
	dice1 = rollDice();
	dice2 = rollDice();
	diceRolled = 1;
	total = dice1 + dice2; //Adding the totalling for dice1+dice2
	cout << "Dice1: " << dice1 << " |  Dice2: " << dice2 << " | Total: " << total << "   \n";

	//Rolling dice until total equal the number enter from user.
	while (numberPicked != (dice1 + dice2)) {

		//Rolling the dice
		dice1 = rollDice();
		dice2 = rollDice();
		total = dice1 + dice2; //Adding the totalling for dice1+dice2
		cout << "Dice1: " << dice1 << " |  Dice2: " << dice2 << " | Total: " << total << "   \n";
		diceRolled += 1; // Don't forget this or the diceRolled won't increment up. 
	}
	//Output and good looking format. Then outputs the number picked, and what that number was achieve in this many roles. 
	cout << "-----------------------------------\n";
	cout << "\nYou picked " << numberPicked <<  " which was achieved in " << diceRolled << " turns. \n";

}
