// Dustin Price, IT-312-J5056 Software Devel w/C++.Net 22EW5, 6/3/2022, 5-2 Final Project Building Block Three: Fill in the Blank (Making a Player Class)
/*The put of this program is to have the user pick a option and then let them they picked that options. It will then repeat the program back. 
This helps with u understanding how to build options like this. I didn't run into any issues when building this.*/
#include "GameLoop.h"
#include <iostream>

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
	cout << "What would you like to do? (Enter a corresponding number)" << endl << endl;
	cout << "1: Quit" << endl << endl;
	cout << "2: PS4" << endl;
	cout << "3: PS5" << endl;
	cout << "4: XBOX 360" << endl;
	cout << "5: XBOX ONE" << endl;
	cout << "6: Wii" << endl;
	cout << "7: Nintendo Switch" << endl;
	cout << "8: VR" << endl;
	cout << "9: PC\n" << endl;
}

//Inputting the playerInput options
void Game::GetPlayerInput(string& playerInput) const
{
	cin >> playerInput;
}
//Outputting what the user picked. If, Else If, and Else statements
PlayerOptions Game::EvaluateInput(string& playerInput) const
{
	PlayerOptions chosenOption = PlayerOptions::None;

	if (playerInput.compare("1") == 0)
	{
		cout << "You have chosen to Quit!" << endl << endl;
		chosenOption = PlayerOptions::Quit;
	}

	else if (playerInput.compare("2") == 0) 
	{
		cout << "\nYou have selected to play the PS4." << endl << endl;
	}

	else if (playerInput.compare("3") == 0)
	{
		cout << "\nYou have selected to play the PS5." << endl << endl;
	}

	else if (playerInput.compare("4") == 0)
	{
		cout << "\nYou have selected to play the XBOX 360." << endl << endl;
	}

	else if (playerInput.compare("5") == 0)
	{
		cout << "\nYou have selected to play the XBOX ONE." << endl << endl;
	}

	else if (playerInput.compare("6") == 0)
	{
		cout << "\nYou have selected to play the Wii." << endl << endl;
	}

	else if (playerInput.compare("7") == 0)
	{
		cout << "\nYou have selected to play the Nintendo Switch." << endl << endl;
	}

	else if (playerInput.compare("8") == 0)
	{
		cout << "\nYou have selected to play the VR." << endl << endl;
	}

	else if (playerInput.compare("9") == 0)
	{
		cout << "\nYou have selected to play the PC." << endl << endl;
	}

	else
	{
		cout << "\nI do not recognise that option, try again!" << endl << endl;
	}

	return chosenOption;
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