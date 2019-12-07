/*  -------------------------------------------------------
 *  Rational.cpp
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
#include "Rational.h"

// Imports
using namespace std;

// add()
Rational* Rational::add(Rational* rational) {
	Rational* result = new Rational();

	result->setNumerator(rational->getNumerator() * getDenominator() + rational->getDenominator() * getNumerator());
	result->setDenominator(rational->getDenominator() * getDenominator());
	result->reduce();

	if (result->getNumerator() == 0) {
		result->setNumerator(0);
		result->setDenominator(0);
	}

	return result;
}

// subtract()
Rational* Rational::subtract(Rational* rational) {
	Rational* result = new Rational();

	result->setNumerator(rational->getNumerator() * getDenominator() - rational->getDenominator() * getNumerator());
	result->setDenominator(rational->getDenominator() * getDenominator());
	result->reduce();

	if (result->getNumerator() == 0) {
		result->setNumerator(0);
		result->setDenominator(0);
	}

	return result;
}

// multiply()
Rational* Rational::multiply(Rational* rational) {
	Rational* result = new Rational();

	result->setNumerator(rational->getNumerator() * getNumerator());
	result->setDenominator(rational->getDenominator() * getDenominator());

	if (getDenominator() != 0)
		result->reduce();

	if (result->getNumerator() == 0) {
		result->setNumerator(0);
		result->setDenominator(0);
	}

	return result;
}

// divide()
Rational* Rational::divide(Rational* rational) {
	Rational* result = new Rational();

	result->setNumerator(rational->getDenominator() * getNumerator());
	result->setDenominator(rational->getNumerator() * getDenominator());

	if (getDenominator() != 0)
		result->reduce();

	if (result->getNumerator() == 0) {
		result->setNumerator(0);
		result->setDenominator(0);
	}

	return result;
}

// toDouble()
double Rational::toDouble() {
	if (getDenominator() == 0)
		return 0.0;
	else {
		return ((double)getNumerator() / (double)getDenominator());
	}
}

// printAsDouble()
void Rational::printAsDouble() {
	double result = toDouble();
	cout.precision(2);
	cout << fixed << result << endl;

}

// toRationalString()
string Rational::toRationalString(int num1, int num2) {
	return "" + std::to_string(num1) + "/" + std::to_string(num2);
}

// toRationalString()
string Rational::toRationalString() {
	return "" + std::to_string(numerator) + "/" + std::to_string(denominator);
}

// getNumerator()
int Rational::getNumerator() {
	return numerator;
}

// getDenominator()
int Rational::getDenominator() {
	return denominator;
}

// setNumerator()
void Rational::setNumerator(int numerator) {
	this->numerator = numerator;
}

// setDenominator()
void Rational::setDenominator(int denominator) {
	this->denominator = denominator;
}

// reduce()
void Rational::reduce() {
	// Assign Values
	int greatestCommonFactor = 0;
	int denom = denominator;

	int numer = getNumerator();
	if (numer < 0)
		numer = -numerator;

	int largest = numerator;
	if (numer < denom)
		largest = denom;

	// Find GCD
	for (int i = largest; i >= 2; i--) {
		if (numer % i == 0 && denom % i == 0) {
			greatestCommonFactor = i;
			break;
		}
	}

	// Reduce factors
	if (greatestCommonFactor != 0) {
		numer /= greatestCommonFactor;
		denom /= greatestCommonFactor;

		// Set reduced factors
		setNumerator(numer);
		setDenominator(denom);
	}
}

// printRational()
void Rational::printRational() {
	if (denominator == 0 && numerator > 0)
		cout << "Infinity: " << numerator << "/" << denominator << endl;
	else
		cout << numerator << "/" << denominator << endl;
}

