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

class Player {
private:
	string playerName;
	Dice dice1 = Dice();
	Dice dice2 = Dice();
	Dice dice3 = Dice();
	Dice dice4 = Dice();
	Dice dice5 = Dice();

public:
	int playerScore;
	int numOfDiceOnTable;
	int guessedNumberDiceTable;
	int guessNumberDiceTable(int a, int b);
	int guessDiceSideValue(int a);
	int increaseTableQuantityGuess(int a, int b, int c);
	Player();
	Player(string name);
	string identifyPlayer();
	vector<int> roll();
};

