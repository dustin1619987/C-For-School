/*
Dustin Price
IT-312-J5056 Software Devel w/C++.Net 22EW5
6/7/2022
6-3 Final Project Building Block Four: Programming (Reading From a File)
Summary/Descripion:
The point of this program is to have a text file with the rules already in it,
then have the program output the rules from the text file to the user. I ran into no issue when it came to
building this program. I feel that this program will help me with building cotent within the final project. 
*/

// Directory/Library
#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	//Variable
	string text;

	//Reading the files and output the rule for liar dice are. 
	ifstream file("rules.txt"); //reading the text file
	cout << "The rules for liars dice are the following : " << endl;
	cout << "\n---------------------------------------------------------------------------------------------------------------------------------\n" << endl;

	// If statement for if the file.is.open. 
	if (file.is_open()) {
		//While is writing the lines of the text document. 
		while (getline(file, text)) {
			cout << text << " \n"; //Pastes the text document content. 
		}
		file.close(); //close the file
	}

	//Output if the file is missing or isn't working.
	else {
		cout << "The text document seems to be missing!";
	}

	cout << "\n---------------------------------------------------------------------------------------------------------------------------------" << endl;

	return 0;

}
