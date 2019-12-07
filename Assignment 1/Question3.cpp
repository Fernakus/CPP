/*  -------------------------------------------------------
 *  Question 3.cpp
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
class Question3 {

	// question3()
	public: void question3() {
		// Print the first pattern
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (j <= i)
					cout << "*";
			}
			cout << endl;
		}
		
		// Print the second pattern
		cout << endl; 
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (j >= i)
					cout << "*";
			}
			cout << endl;
		}

		// Print the third pattern
		cout << endl;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (j < i)
					cout << " ";
			}

			for (int j = 0; j < 10; j++) {
				if (j >= i)
					cout << "*";
			}

			cout << endl;
		}

		// Print the fourth pattern
		cout << endl;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (j > i)
					cout << " ";
			}

			for (int j = 0; j < 10; j++) {
				if (j <= i)
					cout << "*";
			}

			cout << endl;
		}
	}
};