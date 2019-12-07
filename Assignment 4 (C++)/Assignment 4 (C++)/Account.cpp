/*  -------------------------------------------------------
 *  Account.cpp
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
#include "Account.h"

// Imports
using namespace std;

// getBalance()
double Account::getBalance() {
	return balance;
}

// setBalance()
void Account::setBalance(double balance) {
	if (balance < 0.0)
		return;

	this->balance = balance;
}

// deposit()
bool Account::deposit(double cash) {
	if (cash < 0.0)
		return false;

	setBalance(getBalance() + cash);
	return true;
}

// withdraw()
double Account::withdraw(double cash) {
	if (cash < 0.0)
		return -1;

	if (getBalance() < cash) {
		cout << "Debit amount exceeded account balance!" << endl;
		return 0.0;
	}	

	setBalance(getBalance() - cash);
	return cash;
}

void Account::addIt(int& s1, int& s2) {
	s1++;
	s2++;
}

/*
 *
 *
 * ---- Savings Account Class ----
 *
 */
// setInterestRate()
void SavingsAccount::setInterestRate(double interestRate) {
	this->interestRate = interestRate;
}

// getInterest()
double SavingsAccount::getInterestRate() {
	return interestRate;
}

// calculateInterest()
double SavingsAccount::calculateInterest(double balance) {
	return balance * (getInterestRate() / 100);
}


/*
 *
 *
 * ---- Checking Account Class ----
 *
 */
// setFeeCharge()
void CheckingAccount::setFeeCharge(double feeCharge) {
	this->feeCharge = feeCharge;
}

// getFeeCharge()
double CheckingAccount::getFeeCharge() {
	return feeCharge;
}

// deposit() 
bool CheckingAccount::deposit(double cash) {
	if (cash < 0.0)
		return false;

	setBalance(getBalance() + cash - getFeeCharge());
	return true;
}

// withdraw() 
double CheckingAccount::withdraw(double cash) {
	if (getBalance() > cash) {
		setBalance(getBalance() - cash - feeCharge);
		return cash;
	}

	return 0.0;
}

