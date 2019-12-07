/*  -------------------------------------------------------
 *  Main Caller.cpp
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
#include "Question1.cpp"
#include "Question2.cpp"
#include "Question3.cpp"
#include "Question4.cpp"

// Imports
using namespace std;
int main()
{
	// Create Question1 instance
	Question1 q1;
	q1.question1();
	cout << endl;

	// Create Question2 Instance
	Question2 q2;
	q2.question2();
	cout << endl;

	// Create Question2 Instance
	Question3 q3;
	q3.question3();
	cout << endl;

	// Create Question2 Instance
	Question4 q4;
	q4.question4();
	cout << endl;

	return 0;
}