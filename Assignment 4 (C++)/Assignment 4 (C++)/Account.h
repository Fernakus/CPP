/*  -------------------------------------------------------
 *  Account.h
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
#ifndef ACCOUNT_H
#define ACCOUNT_H

// Account Superclass
class Account {
	// Private Fields
	private:
		double balance;

	// Public Fields
	public:
		// No-arg Constructor
		Account() {
			balance = 0.0;
		};

		// Double-arg Constructor
		Account(double balance) {
			setBalance(balance);
		};

		// Getters
		double getBalance();

		// Setters
		void setBalance(double balance);

		// Other
		bool deposit(double cash);
		double withdraw(double cash);
		void addIt(int& s1, int& s2);
};

// SavingsAccount Class
class SavingsAccount: public Account{
	// Private Fields
	private:
		double interestRate;

	// Public Fields
	public:
		// No-arg Constructor
		SavingsAccount() {
			interestRate = 0.0;
		};

		// Double-arg Constructor
		SavingsAccount(double balance, double interestRate) {
			setInterestRate(interestRate);
			setBalance(balance);
		};

		// Setters
		void setInterestRate(double interestRate);

		// Getters
		double getInterestRate();

		// Other
		double calculateInterest(double balance);
};

// CheckingAccount Class
class CheckingAccount : public Account {
	// Private Fields
	private:
		double feeCharge;

	// Public Fields
	public:
		// No-arg Constructor
		CheckingAccount() {
			feeCharge = 0.0;
		};

		// Double-arg Constructor
		CheckingAccount(double balance, double feeCharge) {
			setFeeCharge(feeCharge);
			deposit(balance);
		};

		// Setters
		void setFeeCharge(double feeCharge);

		// Getters
		double getFeeCharge();

		// Other
		double withdraw(double cash);
		bool deposit(double cash);
};
#endif

