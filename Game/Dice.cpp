/*Dustin Price
IT - 312 - J5056 Software Devel w / C++.Net 22EW5
6/17/2022
7-1 Final Project Submission: Liar's Dice Rules
*/

//Disctories/Library of files
#include "stdafx.h"
#include <iostream>
#include "Dice.h"
#include "Game.h"

//NameSpace help overcome the issue with can't give multiple variables,functions,class in the same scope
using namespace std;

//Randomly Roles the dice 
unsigned int Dice::randomlyRoll() { //unsigned is used to store positive number without taking up extra memeory
	int random = rand() % 6 + 1; // rnadomly rolling the dice, generate dice number on the side it lands

	return random; //return the random
}