#include "stdafx.h"
#include "Dice.h"
#include "GameLoop.h"
#include <iostream>

using namespace std;

//Rolls dice and uses random function to generate random number representing one of the dice sides
unsigned int Dice::randomlyRoll() {
	int random = rand() % 6 + 1;
	return random;
}