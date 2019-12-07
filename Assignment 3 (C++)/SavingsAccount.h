/*  -------------------------------------------------------
 *  SavingsAccount.h
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
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

// Class
class SavingsAccount {
	// Private Fields
	private:
		double savingsBalance;
		double annualInterestRate;

	// Public Fields
	public:
		// No-arg Constructor
		SavingsAccount() {
			savingsBalance = 0.0;
			annualInterestRate = 0;
		};

		// Double-arg Constructor
		SavingsAccount(double savingsBalance, double annualInterestRate) {
			this->annualInterestRate = annualInterestRate;
			this->savingsBalance = savingsBalance;
		};

		// Getters
		double getSavingsBalance();
		double getAnnualInterestRate();

		// Setters
		void setAnnualInterestRate(double annualInterestRate);
		void setSavingsBalance(double savingsBalance);

		// Other
		double calculateMonthlyInterest();
};
#endif