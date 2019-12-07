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
#include <string>
#include <iostream>

// Imports
using namespace std;

class RationalNumber {
	// Private Variables
	private:
		int numerator;
		int denominator;

	// Public Variables
	public:
		// No-arg Constructor
		RationalNumber() {
			numerator = 1;
			denominator = 1;
		}

		// Double-arg Constructor
		RationalNumber(int numerator, int denominator) {
			this->numerator = numerator;
			this->denominator = denominator;

			int gcd = reduce(numerator, denominator);
			if (gcd != 0) {
				numerator = numerator / gcd;
				denominator = denominator / gcd;

				if (denominator < 0) {
					denominator = denominator * -1;
					numerator = numerator * -1;
				}
			}
		}

		// Getters
		int getNumerator();
		int getDenominator();
		
		// Setters
		void setNumerator(int number);
		void setDenominator(int number);
		
		// Other
		string toRationalNumberString();
		double toDouble();
		int reduce(int num1, int num2);

		// Overloaded
		RationalNumber operator+(const RationalNumber&) const;
		RationalNumber operator-(const RationalNumber&) const;
		RationalNumber operator*(const RationalNumber&) const;
		RationalNumber operator/(const RationalNumber&) const;
		bool operator<(const RationalNumber&) const;
		bool operator<=(const RationalNumber&) const;
		bool operator>(const RationalNumber&) const;
		bool operator>=(const RationalNumber&) const;
		bool operator==(const RationalNumber&) const;
		bool operator!=(const RationalNumber&) const;
};