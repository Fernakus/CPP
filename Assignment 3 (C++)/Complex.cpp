/*  -------------------------------------------------------
 *  Complex.cpp
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
#include "Complex.h"

// Imports
using namespace std;

// overloading +
Complex Complex::operator+(const Complex& complex) const {
	return Complex(real + complex.real, imaginary + complex.imaginary);
}

// overloading -
Complex Complex::operator-(const Complex& complex) const {
	return Complex(real - complex.real, imaginary - complex.imaginary);
}

// overloading *
Complex Complex::operator*(const Complex& complex) const {
	return Complex(real * complex.real, imaginary * complex.imaginary);
}

// overloading ==
bool Complex::operator==(const Complex& complex) const {
	return real == complex.real && imaginary == complex.imaginary;
}

// overloading !=
bool Complex::operator!=(const Complex& complex) const {
	return real != complex.real && imaginary != complex.imaginary;
}

// overloading >>
istream& operator>>(istream& input, Complex& complex) {
	input.ignore();						
	input >> complex.real;
	input.ignore();						
	input >> complex.imaginary;
	input.ignore();						

	return input;

}

// overloading <<
ostream& operator<<(ostream& output, const Complex& complex) {
	output << "("s + to_string(complex.real) + ", "s + to_string(complex.imaginary) + ")"s;
	return output;
}
