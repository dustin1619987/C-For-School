/*Dustin Price
IT - 312 - J5056 Software Devel w / C++.Net 22EW5
6/17/2022
7-1 Final Project Submission: Liar's Dice Rules
*/

//Disctories/Library of files
#include "stdafx.h"
#include "Game.h"
#include "Dice.h"
#include "rule.h"
#include <vector>
#include <string>
#include <iostream>

//NameSpace help overcome the issue with can't give multiple variables,functions,class in the same scope
using namespace std;


	// Start of the game - Asking for how many players - print out players
	int Game::determinePlayers() {
		//Output the starting point of the game
		cout << "--------------------------------------------------------------------" << endl;
		cout << "Liar's Dice, Where lying makes you win!" << endl;
		cout << "--------------------------------------------------------------------\n" << endl;
		//Asking how many players there is
		cout << "How many players are playing today?" << endl;
		cin >> numOfPlayers;

		//While loop of outputting there must be two playersa and then output the number of players
		while (numOfPlayers < 2) {
			cout << "There must be two to play!" << endl;
			cin >> numOfPlayers;
		};

		//Output the number of players
		cout << "\nThere are " << numOfPlayers << " players this game." << endl;
		return numOfPlayers;
	}

//Determining players - Welcoming the players - Asking for name - Vectors due to dynamic amount of players
vector<Player> Game::createVectorOfPlayers() {
	size_t size = determinePlayers();
	vector <Player> playerVector(size);

	//For loop for the welcoming each players. Loops for the amount of players. Asking name
	for (unsigned int i = 0; i < size; ++i) {
		string playerName; //Players name variable. String
		cout << "Welcome Player " << i + 1 << ", what is your name?" << endl;
		cin >> playerName; //accepting playername
		Player p = Player(playerName); //putting name into action.
		playerVector[i] = p;
	}
	return playerVector;
}

//Start of Game. Called by main. 
void Game::play() {
	vector<Player> players;
	players = createVectorOfPlayers();
	bool checkLiar = false;

	//Checking number of Dice on the table and output it to the size of players
	size_t totalDiceonTable = (players.size() * 5);
	vector<vector<int>> fullDiceVector(totalDiceonTable);
	int a = players.size();
	int b = totalDiceonTable;

	//For loops for out putting the Dice for each players and the name, the Dice result. 
	for (unsigned int i = 0; i < players.size(); ++i) {
		Player player = players[i];
		cout << "\nPlayer " << player.identifyPlayer() << ". Here is your dice: " << endl; //Player name with dice line. 

		//For loops Outputting the Diice Result
		vector<int> playerRoll = player.roll();
		for (unsigned int j = 0; j < playerRoll.size(); ++j) {
			cout << "Dice results " << j + 1 << ":" << playerRoll[j] << endl; //Output Dice Results
		}
		fullDiceVector[i] = playerRoll;
	}
	//Game prompt
	cout << "--------------------------------------------------------------------" << endl;
	cout << "You can now see the Dices, lets start the game! Good Luck" << endl;
	cout << "--------------------------------------------------------------------" << endl;

	//Starting dice game area
	guessedDiceOnTable = 0;
	bool endingLoop = false;
	while (endingLoop != true) { //Loops for calling lies.
		for (unsigned int i = 0; i < players.size(); ++i) { //For loops for score and round
			Player player = players[i]; //Player increments
			cout << player.identifyPlayer() << ". Here is your dice: " << endl;
			vector<int> playerRoll = fullDiceVector[i];

			//For loops dice results
			for (unsigned int j = 0; j < playerRoll.size(); ++j) {
				cout << "Dices results : " << j + 1 << ": " << playerRoll[j] << endl;
			}

			//Asking for liars,value for dice, initial guess of dice
			if (guessedDiceOnTable == 0) { 
				guessedDiceOnTable = player.guessNumberDiceTable(a, b);
				guessedDiceSideValue = player.guessDiceSideValue(guessedDiceOnTable);
				checkLiar = liar(fullDiceVector, guessedDiceSideValue, guessedDiceOnTable);
				//If like is true 
				if (checkLiar == true) {
					endingLoop = finalOutputEndLoop(endingLoop, a, fullDiceVector);
					break;
				}
			}

			//Guess, check side value, call liar and ends the game
			else { 
				guessedDiceOnTable = player.increaseTableQuantityGuess(guessedDiceOnTable, b, guessedDiceSideValue);
				guessedDiceSideValue = player.guessDiceSideValue(guessedDiceOnTable);
				checkLiar = liar(fullDiceVector, guessedDiceSideValue, guessedDiceOnTable);
				if (checkLiar == true) {
					endingLoop = finalOutputEndLoop(endingLoop, a, fullDiceVector);
					break;
				}
			}
		}
	}
}
//Ask for calling liar. When someone calls liar check to see who wins and allows to to end
bool Game::liar(vector<vector<int>> a, int b, int c) {
	bool liarIsTrue = false;
	string calledLiar;
	//Asking if they want to call liar.
	cout << "Does anyone want to call liar's dice? Type Y for yes or N for no." << endl;

	cin >> calledLiar;
	//Y for yes and N for no
	if (calledLiar == "Y" || calledLiar == "y") {
		int occurences = howManyIn(a, b);
		//The accuser winning
		if (occurences != c) {
			cout << "You (the guesser) are wrong, you have lied! The accuser, has won!" << endl;
		}
		//Player didn't lie. Guesser wins. accuser looses
		else {
			cout << "The player did not lie in their guess and now wins, you (the accuser) are wrong and has lost." << endl;
		}
		liarIsTrue = true;
	}
	return liarIsTrue;
}
//function - checking dice and value
int Game::howManyIn(vector<vector<int>> fullDice, int value) {
	int count = 0;
	for (unsigned int i = 0; i < fullDice.size(); ++i) {
		vector<int> innerRoll = fullDice[i];
		for (unsigned int j = 0; j < innerRoll.size(); ++j) {
			if (innerRoll[j] == value) {
				++count;
			}
		}
	}
	return count;
}
//Print dice at the end of th game
bool Game::finalOutputEndLoop(bool a, int b, vector<vector<int>> c) {
	//Showing the dices
	cout << "Let's see all the dices:" << endl;
	for (int i = 0; i < b; ++i) {
		vector<int> rolls = c[i];
		for (unsigned int j = 0; j < (rolls.size() - 1); ++j) {
			cout << c[i][j] << ", ";
		}
		cout << rolls.back() << endl;
	}
	a = true;
	return a;
}
//End of Game.cpp
