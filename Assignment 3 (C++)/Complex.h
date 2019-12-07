/*  -------------------------------------------------------
 *  Complex.h
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
#ifndef COMPLEX_H
#define COMPLEX_H

// Class
class Complex {
	// Private Fields
	private:
		double real, imaginary;

	// Public Fields
	public:
		// No-arg Constructor
		Complex() {
			real = imaginary = 0;
		};

		// Double Constructor
		Complex(double real, double imaginary) {
			this->real = real;
			this->imaginary = imaginary;
		};

		// Methods
		Complex operator+(const Complex&) const;
		Complex operator-(const Complex&) const;
		Complex operator*(const Complex&) const;
		bool operator==(const Complex&) const;
		bool operator!=(const Complex&) const;
		friend ostream& operator<<(ostream&, const Complex&);
		friend istream& operator>>(istream&, Complex&);
};
#endif