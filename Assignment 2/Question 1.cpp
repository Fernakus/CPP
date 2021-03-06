/*  -------------------------------------------------------
 *  Question 1.cpp
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

// Inline methods
inline string toString(char* s) {
	return std::string(s);
}

int main()
{
    // Variables
	int random = 1 + rand() % 1000;
	int guess, seedCounter = 0;
	char control[100];
	int seeds[10]{0,1,2,3,4,5,6,7,8,9};

	// Output
	cout << "I have a random number between 1-1000." << endl
		 << "Can you guess my number?" << endl
		 << "Please type your first guess: ";

	// Loop while user guesses
	do {
		// Grab value
		while (!(cin >> guess)) {
			cout << "Must enter a valid integer, try again: ";
			cin.clear();
			cin.ignore(100, '\n');
		}

		// Control Statements
		if (guess == random) {
			cout << "Excellent! you guessed the number!" << endl
				 << "Would you like to play again (y/n): ";

			// Error checking
			while (!(cin >> control)) {
				cout << endl;
				cout << "Must enter 'y' or 'n', try again: ";
				cin.clear();
				cin.ignore(100, '\n');
			}

			// Choices
			while (!toString(control)._Equal("y") && !toString(control)._Equal("n")) {
				cout << "Must enter 'y' or 'n', try again: ";

				// Error checking
				while (!(cin >> control)) {
					cout << "Must enter 'y' or 'n', try again: ";
					cin.clear();
					cin.ignore(100, '\n');
				}
			}

			if (toString(control)._Equal("y")) {
				// Reseed random
				seedCounter++;
				srand(seeds[seedCounter * 2 % 10 + seedCounter * 4 % 10 + seedCounter * 6 % 10]);

				// Call random
				random = 1 + rand() % 1000;

				cout << "Please type your first guess: ";
				continue;
			}

			else if (toString(control)._Equal("n"))
				break;
		}

		else if (guess < random) 
			cout << "Too low. Try again: ";

		else
			cout << "Too high. Try again: ";

	} while (true);
}