#include "stdafx.h"
#include <string>
#include <iostream>
#include "rule.h"
using namespace std;



void rule::ruleList()
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

}