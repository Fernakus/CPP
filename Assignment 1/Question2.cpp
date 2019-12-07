/*  -------------------------------------------------------
 *  Question 2.cpp
 *  -------------------------------------------------------
 *  Author:  Matthew Ferlaino
 *  Course:	 COSC2947
 *  ID:      169657520
 *  Email:   mferlaino@algomau.ca
 *  Date:	 Sep 9, 2019
 *  ------------------------------------------------------- */

// Inlcude Statements
#include "pch.h"
#include <iostream>

// Imports
using namespace std;

// Class
class Question2 {

	// question2()
	public: void question2() {
		// Variables
		int sales = 0;

		// Condition structures
		while (true) {
			// Prompt
			cout << "Enter sales in dollars (-1 to end): ";
			
			// Errors
			while (!(cin >> sales)) {
				cout << "Invalid input try again: ";
				cin.clear();
				cin.ignore(100, '\n');
			}

			// Decision 
			if (sales < 0) 
				break;

			else 
				cout << "Salary is: " << sales * .09 + 200 << endl;			
		}
	}
};