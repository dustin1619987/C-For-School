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

//Class for the Game
class Game {
private:
	//Variables for guess dice value, and guesses
	vector<Player> vectorPlayers;
	vector<Player> createVectorOfPlayers();
	int howManyIn(vector<vector<int>> fullDice, int value);
	bool liar(vector<vector<int>> a, int b, int c);
	int guessedDiceValue;
	int guessedDices;
	string name;
	bool finalOutputEndLoop(bool a, int b, vector<vector<int>> d);
//public for the number of player,determin players and append player
public:
	void appendFile(Player player);
	int determinePlayers();
	int numOfPlayers;
	void play();
};

