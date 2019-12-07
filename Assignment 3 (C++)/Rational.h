/*  -------------------------------------------------------
 *  Rational.h
 *  -------------------------------------------------------
 *  Author:  Matthew Ferlaino
 *  Course:	 COSC2947
 *  ID:      169657520
 *  Email:   mferlaino@algomau.ca
 *  Date:	 Oct 29, 2019
 *  ------------------------------------------------------- */

 // Imports
using namespace std;

// Prevent multiple inclusions of header file
#ifndef RATIONAL_H
#define RATIONAL_H

// Class
class Rational {
	// Private Fields
	private:
		int numerator;
		int denominator;

	// Public Fields
	public:
		// No-arg Constructor
		Rational() {
			numerator = 0;
			denominator = 0;
		};

		// Double-arg Constructor
		Rational(int numerator, int denominator) {
			this->numerator = numerator;
			this->denominator = denominator;
			reduce();
		};

		 // Math Operators
		Rational* add(Rational* rational);
		Rational* subtract(Rational* rational);
		Rational* multiply(Rational* rational);
		Rational* divide(Rational* rational);

		// Convertors
		double toDouble();
		void printAsDouble();
		string toRationalString(int num1, int num2);
		string toRationalString();
		void reduce();

		// Getters
		int getNumerator();
		int getDenominator();

		// Setters
		void setNumerator(int numerator);
		void setDenominator(int denominator);

		// Other
		void printRational();
};
#endif