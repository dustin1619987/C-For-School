/*
Dustin Price
IT-312-J5056 Software Devel w/C++.Net 22EW5
6/7/2022
6-2 Debugging Assignment: Method Overloading
Summary/Descripion:
There was a few issue within this program. The first one was the line 21 > I change it to double. Next is line 25 which needed to be a,b. 
The same issue happens on line 31. Line 42 was missing a return and then line 49 was missing a ;. After
fixing all these issue everything seem to work correctly. 
*/

//#include "stdafx.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int add(int, int);
double add(double, double);

int main()
{
	int a, b, x;
	double c, d, y; //Change from float to double. 

	cout << "Enter two integers\n";
	cin >> a >> b;
	x = add(a, b); // The above is asking for a b but the bottom had a, c. It needs to be a b.
	cout << "Sum of integers: " << x << endl;

	cout << "Enter two doubles\n";
	cin >> c >> d;
	y = add(c, d); // The line needed to be c and d. 
	cout << "Sum of doubles: " << y << endl;

	return 0;
}

int add(int a, int b)
{
	int sum;
	sum = a + b;

	return 0; //The area was missing a return 0
}

double add(double a, double b)
{
	double sum;
	sum = a + b;
	return sum; //This line was missing a ;  
}
