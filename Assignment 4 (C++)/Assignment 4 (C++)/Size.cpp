/*  -------------------------------------------------------
 *  Size.cpp
 *  -------------------------------------------------------
 *  Author:  Matthew Ferlaino
 *  Course:	 COSC2947
 *  ID:      169657520
 *  Email:   mferlaino@algomau.ca
 *  Date:	 Oct 29, 2019
 *  ------------------------------------------------------- */

 // Includes
#include <iostream>
#include <string>
#include "Size.h"

// determineSize()
void Size::sizes() {
	cout << "char: " << sizeof(char) << endl;
	cout << "unsigned char: " << sizeof(unsigned char) << endl;
	cout << "short int: " << sizeof(short int) << endl;
	cout << "unsigned short int: " << sizeof(unsigned short int) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << endl;
	cout << "long int: " << sizeof(long int) << endl;
	cout << "unsigned long int: " << sizeof(unsigned long int) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "long double: " << sizeof(long double) << endl;
}