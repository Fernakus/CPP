/*  -------------------------------------------------------
 *  Question 1.cpp
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
class Question1 {

	// question1()
	public: void question1() {
		// Variables
		int num1, num2; 
				
		// Collect Num1
		cout << "Enter an int: ";
		while (!(cin >> num1)) {
			cout << "Must enter a valid integer, try again: ";
			cin.clear();
			cin.ignore(100, '\n');
		}

		// Collect Num2
		cout << "Enter another int: ";
		while (!(cin >> num2)) {
			cout << "Must enter a valid integer, try again: ";
			cin.clear();
			cin.ignore(100, '\n');
		}

		// Decisions
		if (num1 == num2)
			cout << "These numbers are equal" << endl;
		else if (num1 > num2)
			cout << num1 << " is larger." << endl;
		else 
			cout << num2 << " is larger." << endl;
	}
};