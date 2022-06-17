// Dustin Price, IT-312-J5056 Software Devel w/C++.Net 22EW5, 6/3/2022, 5-2 Final Project Building Block Three: Fill in the Blank (Making a Player Class)
/*The put of this program is to have the user pick a option and then let them they picked that options. It will then repeat the program back.
This helps with u understanding how to build options like this. I didn't run into any issues when building this.*/
#include "GameLoop.h"
#include <iostream>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;




//Start of the WelcomePLayer
void Game::WelcomePlayer()
{
	cout << "Welcome to Text Adventure!" << endl << endl;
	cout << "What is your name?" << endl << endl;

	string name;
	cin >> name;
	m_player.SetName(name);

	cout << endl << "Hello " << m_player.GetName() << endl;
}

//Asking users what options they would like to pick 
void Game::GivePlayerOptions() const
{

}





//Giving player options and eevaluate/quiting
void Game::RunGame()
{
	WelcomePlayer();

	bool shouldEnd = false;
	while (shouldEnd == false)
	{
		GivePlayerOptions();

		string playerInput;
		GetPlayerInput(playerInput);

		shouldEnd = EvaluateInput(playerInput) == PlayerOptions::Quit;
	}
}