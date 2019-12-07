/*  -------------------------------------------------------
 *  TemperatureConvertor.cpp
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
#include "TemperatureConvertor.h"

// toCelsius()
double TemperatureConvertor::toCelsius(double fahrenheit) {
	return 5.0 / 9.0 * (fahrenheit - 32);
}