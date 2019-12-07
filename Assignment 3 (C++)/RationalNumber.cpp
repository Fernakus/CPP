/*  -------------------------------------------------------
 *  RationalNumber.cpp
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
#include "RationalNumber.h"

// Imports
using namespace std;

// getNumerator()
int RationalNumber::getNumerator() {
	return numerator;
}

// setNumerator()
void RationalNumber::setNumerator(int number) {
	if (number != 0)
		numerator = number;
	else 
		cout << endl << "Numerator cannot be zero!" << endl;
}

// getDenominator()
int RationalNumber::getDenominator() {
	return denominator;
}

// setDenominator()
void RationalNumber::setDenominator(int number) {
	if (number != 0)
		denominator = number;
	else 
		cout << endl << "Denominator cannot be zero!" << endl;	
}

// toRationalNumberString()
string RationalNumber::toRationalNumberString() {
	return to_string(getNumerator()) + "/" + to_string(getDenominator());
}

// toDouble()
double RationalNumber::toDouble() {
	return ((double)getNumerator() / (double)getDenominator());
}

// reduce()
int RationalNumber::reduce(int num1, int num2) {
	if (num2 == 0) 
		return num1;

	return reduce(num2, num1 % num2);
}

// overloading +
RationalNumber RationalNumber::operator+(const RationalNumber& number) const {
	int num = (numerator * number.denominator) + (denominator * number.numerator);
	int denom = denominator * number.denominator;

	return RationalNumber{ num, denom };
}

// overloading -
RationalNumber RationalNumber::operator-(const RationalNumber& number) const {
	int num = (numerator * number.denominator) - (denominator * number.numerator);
	int denom = denominator * number.denominator;

	return RationalNumber{num, denom};
}

// overloading *
RationalNumber RationalNumber::operator*(const RationalNumber& number) const {
	int num = numerator * number.numerator;
	int denom = denominator * number.denominator;

	return RationalNumber{num, denom};
}

// overloading /
RationalNumber RationalNumber::operator/(const RationalNumber& number) const {
	int num = numerator * number.denominator;
	int denom = denominator * number.numerator;

	return RationalNumber{num, denom};
}

// overloading <
bool RationalNumber::operator<(const RationalNumber& number) const {
	return (((double)numerator / (double)denominator) < ((double)number.numerator / (double)number.denominator));
}

// overloading <=
bool RationalNumber::operator<=(const RationalNumber& number) const {
	return (((double)numerator / (double)denominator) <= ((double)number.numerator / (double)number.denominator));
}

// overloading >
bool RationalNumber::operator>(const RationalNumber& number) const {
	return (((double)numerator / (double)denominator) > ((double)number.numerator / (double)number.denominator));
}

// overloading >=
bool RationalNumber::operator>=(const RationalNumber& number) const {
	return (((double)numerator / (double)denominator) >= ((double)number.numerator / (double)number.denominator));
}

// overloading ==
bool RationalNumber::operator==(const RationalNumber& number) const {
	return (((double)numerator / (double)denominator) == ((double)number.numerator / (double)number.denominator));
}

// overloading !=
bool RationalNumber::operator!=(const RationalNumber& number) const {
	return (((double)numerator / (double)denominator) != ((double)number.numerator / (double)number.denominator));
}