/*  -------------------------------------------------------
 *  Question 2.cpp
 *  -------------------------------------------------------
 *  Author:  Matthew Ferlaino
 *  Course:	 COSC2947
 *  ID:      169657520
 *  Email:   mferlaino@algomau.ca
 *  Date:	 Sep 24th, 2019
 *  ------------------------------------------------------- */

 // Include Statements
#include "pch.h"
#include <iostream>
#include <cstdlib>

// Imports
using namespace std;

// Inline Methods
inline signed int power(signed int base, signed int exponent) {
	// Base Cases
	if (exponent == 0)
		return 1;

	if (exponent % 2 == 0) 
		return power(base, exponent / 2) * power(base, exponent / 2);

	// Recursive Call
	return base * power(base, exponent - 1);
}

inline string toString(char* s) {
	return std::string(s);
}

int main()
{
	do {
		// Variables
		signed int base, exponent = 0;
		char control[100];

		// Collect base
		cout << "Enter a base: ";
		while (!(cin >> base)) {
			cout << endl;
			cout << "Must enter a valid integer, try again: ";
			cin.clear();
			cin.ignore(100, '\n');
		}

		// Collect exponent
		cout << "Enter an exponent: ";
		while (!(cin >> exponent)) {
			cout << "Must enter a valid integer, try again: ";
			cin.clear();
			cin.ignore(100, '\n');
		}

		// Result
		cout << "The result of " << base << " to the power of " << exponent << " is: " << power(base, exponent) << endl;

		// Go again?
		cout << "Would you like to go again (y/n): ";
		while (!(cin >> control) || !toString(control)._Equal("y") && !toString(control)._Equal("n")) {
			cout << endl;
			cout << "Must enter 'y' or 'n', try again: ";
			cin.clear();
			cin.ignore(100, '\n');
		}

		// Control statements
		if (toString(control)._Equal("y")) continue;
		else break;	

	} while (true);
}