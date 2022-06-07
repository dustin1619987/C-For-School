/*
Dustin Price
IT-312-J5056 Software Devel w/C++.Net 22EW5
6/7/2022
6-1 Programming Assignment: Writing to a File
Summary/Descripion:
The point of this program is to record the points of each round for each player
and the output it to a file. The program first ask for the number of players 
and then rounds. Next it will ask for the players name. After that you will
input the rounds score for each player. It will record all of this on a note pad.
*/

// Directory/Library
#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{

    //Variables for the game
    int numOfPlayers, roundsPlaying, scores;
    string name;

    //Introducing the game
    cout << "Welcome to the Game! \n" << endl;
    cout << "How many players will be playing today? " << endl;
    cin >> numOfPlayers;

    //Asking how many round they are playing
    cout << "How many rounds will you be playing? " << endl;
    cin >> roundsPlaying;

    //ignores the \n so it doesn't count that as a input
    cin.ignore();

    //Create a text file
    ofstream MyFile("Scores.txt");

    //Writing to the textfile
    MyFile << "Names of Players : \n";

    //Looping for the number of player for the number of time
    for (int i = 1; i <= numOfPlayers; i++) {
        cout << "Enter name of players" << i << " : ";
        cin.sync();
        getline(cin, name);

        //Write the name to the file
        MyFile << name << endl;
    }

    //Outer loop for the number of rounds
    for (int i = 1; i <= roundsPlaying; i++) {
        cout << "------ROUND" << i << "-------\n";
        //Writing Round to file
        MyFile << "------ROUND" << i << "-------\n";

        //inner loop for the number of players in each round
        for (int j = 1; j <= numOfPlayers; j++) {
            cout << "Enter Player " << j << " Score : ";
            cin >> scores;

            //Writing Score to file
            MyFile << "Player " << j << " Score : " << scores << endl;
        }
    }
    MyFile.close(); //Closing the file
}
