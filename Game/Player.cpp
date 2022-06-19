/*Dustin Price
IT - 312 - J5056 Software Devel w / C++.Net 22EW5
6/17/2022
7-1 Final Project Submission: Liar's Dice Rules
*/

//Disctories/Library of files
#include "stdafx.h"
#include "Player.h"
#include "Game.h"
#include "rule.h"
#include <vector>
#include "Dice.h"
#include <iostream>

//NameSpace help overcome the issue with can't give multiple variables,functions,class in the same scope
using namespace std;

//Main for calling game. Need to have or game gets error.
int main() {
	rule r;
	r.ruleList();
	Game g;
	g.play();
	return 0;
}

//Player names
	Player::Player() {
		playerName = "";
	}
	//Players name
	Player::Player(string name) {
		playerName = name;
	}

	//Retrieves players name
	string Player::identifyPlayer() {
		return playerName;
	}

	//Vector for the dice - for each player
	vector<int> Player::roll() {
		int one = diceOne.randomlyRoll();
		int two = diceTwo.randomlyRoll();
		int three = diceThree.randomlyRoll();
		int four = diceFour.randomlyRoll();
		int five = diceFive.randomlyRoll();

		return vector<int> { one, two, three, four, five }; //returing dice
	}

	//Called once - check first guess/dice
	int Player::guessNumberOfDice(int a, int b) {
		cout << "\nThere are " << a << " players. This means there are " << b << " dice on the current table." << endl;
		cout << "\nRemember, to input the two values: (1) how many dice on this table of a (2) certain value. " << endl;
		cout << "\nInput the first value, the current number of dice on the table: " << endl;
		cin >> numOfDice;

		//While for num dice of table 
		while (numOfDice < 1 || numOfDice > b) {
			cout << "The will only be possible if the number of dice on the table is 1 to " << b << "." << endl;
			cin >> numOfDice;
		}
		return numOfDice;
	}

	//After an inital dice number guess is made, this increases the guess of dice on the table
	int Player::increaseQuantityGuesses(int a, int b, int c) {
		int increasedGuess;
		cout << "The last player guessed " << a << " dice on the table were rolled on the side value of " << c << endl;
		cout << "Your new guess must be at least one dice higher than " << a << endl;
		cin >> increasedGuess;

		//While for guesses
		while (increasedGuess <= a || increasedGuess > b) {
			cout << "Please input a number that is greater than " << a << ", but is less than " <<
				b << endl;
			cin >> increasedGuess;
		}
		return increasedGuess;
	}

	//Finding the gues for side value
	int Player::guessDiceValue(int a) {
		int guessedDiceSide;
		//Outputting content
		cout << "You picked that there is " << a << " dice of the value." << endl;
		cout << "Which side of the standard dice was rolled?" << endl;
		cin >> guessedDiceSide;
		// Dice side guess
		while (guessedDiceSide < 1 || guessedDiceSide > 6) {
			cout << "You must input a dice side value between 1 and 6 (Standard Dice). " << endl;
			cin >> guessedDiceSide;
		}
		return guessedDiceSide;
	}
//End of player