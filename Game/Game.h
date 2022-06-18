/*Dustin Price
IT - 312 - J5056 Software Devel w / C++.Net 22EW5
6/17/2022
7-1 Final Project Submission: Liar's Dice Rules
*/

//Disctories/Library of files
#pragma once //A compiler directive that allows you to provide additional informtion to the compiler
#include <iostream>
#include "Player.h"
#include <vector>
#include "Dice.h"

//NameSpace help overcome the issue with can't give multiple variables,functions,class in the same scope
using namespace std;

class Game {
private:
	vector<Player> vectorPlayers;
	vector<Player> createVectorOfPlayers();
	int howManyIn(vector<vector<int>> fullDice, int value);
	bool liar(vector<vector<int>> a, int b, int c);
	int guessedDiceSideValue;
	int guessedDiceOnTable;
	string name;
	bool finalOutputEndLoop(bool a, int b, vector<vector<int>> d);

public:
	void appendFile(Player player);
	int determinePlayers();
	int numOfPlayers;
	void play();
};

