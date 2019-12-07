/*  -------------------------------------------------------
 *  TemperatureConvertor.h
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
#ifndef TEMPERATURECONVERTOR_H
#define TEMPERATURECONVERTOR_H

// Account Superclass
class TemperatureConvertor {
	// Private Fields
	private:
		double fahrenheit;
		double celsius;

	// Public Fields
	public:
		// No-arg Constructor
		TemperatureConvertor() {
			fahrenheit = 0.0;
			celsius = toCelsius(fahrenheit);
		};

		// Single-arg Constructor
		TemperatureConvertor(double fahrenheit) {
			this->fahrenheit = fahrenheit;
			celsius = toCelsius(fahrenheit);
		};

		// Convert to Celsius
		double toCelsius(double fahrenheit);
}; 
#endif