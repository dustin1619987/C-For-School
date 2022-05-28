// Dustin Price, IT-312-J5056 Software Devel w/C++.Net 22EW5, 5/27/2022, 4-2 Formatting Assignment: looping Through Arrays
// LoopingArrays.cpp : This program loops through to create an array based on user input and then 
// sorts the array in order of smallest integer to largest.  Format the code following the code
// styling document.
//

//Start of Library/Directories
//#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void main()
{
	//Initializing Array and for loop. Where you enter the numbers on a loop.
	int array[10], t;
	for (int x = 0; x < 10; x++) {
		cout << "Enter Integer No. " << x + 1 << " : " << endl;
		cin >> array[x];
	}
	//Start of For Loop
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 9; y++) {
			if (array[y] > array[y + 1]) {
				t = array[y];
				array[y] = array[y + 1];
				array[y + 1] = t;
			}
		}
	}
	//Sorting Arrary is ascending order 
	cout << "Array in ascending order is : ";
	for (int x = 0; x < 10; x++)
		cout << endl << array[x];
	return;
}
