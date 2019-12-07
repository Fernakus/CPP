/*  -------------------------------------------------------
 *  main.cpp
 *  -------------------------------------------------------
 *  Author:  Matthew Ferlaino
 *  Course:	 COSC2947
 *  ID:      169657520
 *  Email:   mferlaino@algomau.ca
 *  Date:	 Oct 29, 2019
 *  ------------------------------------------------------- */

// Includes
#include <iostream>
#include <cstdlib>
#include <string>
#include "Account.h"

using namespace std;

// Main
int main() {
	
	Account* accPtr = new Account(4000);
	int s69 = 69;

	int& ref = s69;
	int& ptr = ref;



	accPtr->addIt(ref, ptr);


	cout << ref << endl;
	cout << ptr << endl;

	return 0;
}

