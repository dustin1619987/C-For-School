/*Dustin Price
IT - 312 - J5056 Software Devel w / C++.Net 22EW5
6/17/2022
7-1 Final Project Submission: Liar's Dice Rules
*/

//Disctories/Library of files
#pragma once //A compiler directive that allows you to provide additional informtion to the compiler
#include <string>
#include "Dice.h"
#include <vector>
#include <iostream>

//NameSpace help overcome the issue with can't give multiple variables,functions,class in the same scope
using namespace std;

//Class for the players
class Player {
//Dice for private
private:
	string playerName;
	Dice diceOne = Dice();
	Dice diceTwo = Dice();
	Dice diceThree = Dice();
	Dice diceFour = Dice();
	Dice diceFive = Dice();
//Public variables
public:
	int playerScore;
	int numOfDice;
	int guessedNumberDiceTable;
	int guessNumberOfDice(int a, int b);
	int guessDiceValue(int a);
	int increaseQuantityGuesses(int a, int b, int c);
	Player();
	Player(string name);
	string identifyPlayer();
	vector<int> roll();
};
