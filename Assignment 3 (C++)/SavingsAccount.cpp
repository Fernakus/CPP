/*  -------------------------------------------------------
 *  SavingsAccount.cpp
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
#include "SavingsAccount.h"

// Imports
using namespace std;

// getSavingsBalance()
double SavingsAccount::getSavingsBalance() {
	return savingsBalance;
}

// getSavingsBalance()
double SavingsAccount::getAnnualInterestRate() {
	return annualInterestRate;
}

// setAnnualInterestRate()
void SavingsAccount::setAnnualInterestRate(double annualInterestRate) {
	this->annualInterestRate = annualInterestRate;
}

// setSavingsBalance()
void SavingsAccount::setSavingsBalance(double savingsBalance) {
	this->savingsBalance += savingsBalance;
}

// calculateMonthlyInterest()
double SavingsAccount::calculateMonthlyInterest() {
	return (this->getSavingsBalance() * (this->getAnnualInterestRate() / 100)) / 12;
}


