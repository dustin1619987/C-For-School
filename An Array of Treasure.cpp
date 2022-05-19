// Dustin Price, IT-312-J5056 Software Devel w/C++.Net 22EW5, 5/19/2022, 3-2 Programming Assignment: An Array of Treasure
/*The point of this assigment is to work with arrays to make a game that lets you
pick a chest and see if you picked the right choice. At first I had some difficulty of understanding
where to start but the read each line of the problem statement and started my code 
of each of the lines. This help me better understand what is happening or is needed. When the
user picks 5 it outputs that the user has leveled up and picked the right token. */

// #include "stdafx.h"
#include <iostream>;
using namespace std;

int main()
{
    //Declaring variables 
    int chestFounded;
    bool chest[5] = { false, false, false, false, false };
    //Boolean array that stores five elements, and initialize them all to false.
    cout << "Ahoy, Matey! There is five treasure chests located on the map. One of them contains a leveling token! \n" << endl;

    //Asking user for chestFounded input
    cout << "Please choice a chest! Pick a number between 1-5:" << endl;
    cin >> chestFounded;

    //Telling the user what they have picked and fetching value of variable being looked at.
    cout << "You have choosen chest " << chestFounded << "!\n" << endl;
    *(chest + (chestFounded - 1)) = true;
    
    //Start of while/make game loop. 
    while (*(chest + 4) == false) { //Check to see if the 5th choice has been picked or not.
        cout << "Yo Ho Ho!, There is no token in this chest! Please try again by picking a number between 1-5 " << endl;
        cin >> chestFounded; //asking for user input again
        *(chest + (chestFounded - 1)) = true;
    }
    
    //Output the user picked the correct choice. 
    cout << "Ahoy, you have found the chest that has the token in it! You have leved up!" << endl; 
    
    return 0; 
}
