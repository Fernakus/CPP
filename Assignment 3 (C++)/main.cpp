/*  -------------------------------------------------------
 *  main.cpp
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
#include "SavingsAccount.h"
#include "Complex.h"
#include "RationalNumber.h"

int main() {
	cout << "--- Question 1 ---" << endl;

	// Question 1
	Rational* r1 = new Rational(2, 4);
	Rational* r2 = new Rational(2, 4);
	Rational* result = new Rational();

	// Adding
	result = r1->add(r2);
	cout << "Added Rational: ";
	cout << r1->toRationalString();
	cout << " + ";
	cout << r2->toRationalString();
	cout << " = ";
	result->printAsDouble();
	cout << endl;

	// Subtracting
	result = r1->subtract(r2);
	cout << "Subtracted Rational: ";
	cout << r1->toRationalString();
	cout << " - ";
	cout << r2->toRationalString();
	cout << " = ";
	result->printAsDouble();
	cout << endl;

	// Multiplying
	result = r1->multiply(r2);
	cout << "Multiplied Rational: ";
	cout << r1->toRationalString();
	cout << " * ";
	cout << r2->toRationalString();
	cout << " = ";
	result->printAsDouble();
	cout << endl;

	// Dividing
	result = r1->divide(r2);
	cout << "Divided Rational: ";
	cout << r1->toRationalString();
	cout << " / ";
	cout << r2->toRationalString();
	cout << " = ";
	result->printAsDouble();
	cout << endl;


	// Question 2
	cout << "--- Question 2 ---" << endl;

	SavingsAccount* account1 = new SavingsAccount(2000.0, 3.0);
	SavingsAccount* account2 = new SavingsAccount(3000.0, 3.0);

	cout << "--- Initial Balances ---" << endl;
	cout << "Account 1: " << account1->getSavingsBalance() << endl;
	cout << "Account 2: " << account2->getSavingsBalance() << endl;
	cout << "Initial Interest Rate: " << account1->getAnnualInterestRate() << endl;
	cout << endl;

	// Calculate new balances
	account1->setSavingsBalance(account1->calculateMonthlyInterest());
	account2->setSavingsBalance(account2->calculateMonthlyInterest());

	cout << "--- New Balances ---" << endl;
	cout << "Account 1: " << account1->getSavingsBalance() << endl;
	cout << "Account 2: " << account2->getSavingsBalance() << endl;
	cout << "Interest Rate: " << account1->getAnnualInterestRate() << endl;
	cout << endl;

	// Set new interest rate
	account1->setAnnualInterestRate(4.0);
	account2->setAnnualInterestRate(4.0);

	// Calculate new balances
	account1->setSavingsBalance(account1->calculateMonthlyInterest());
	account2->setSavingsBalance(account2->calculateMonthlyInterest());

	cout << "--- New Balances ---" << endl;
	cout << "Account 1: " << account1->getSavingsBalance() << endl;
	cout << "Account 2: " << account2->getSavingsBalance() << endl;
	cout << "Interest Rate: " << account1->getAnnualInterestRate() << endl;
	cout << endl;

	// Question 3
	cout << "--- Question 3 ---" << endl;

	Complex complex;
	Complex complex1{2.4, 1.0};
	Complex complex2{2.4, 1.0};
	Complex complex3{4.4, 2.2};

	cout << "Enter a complex number: ";
	cin >> complex;
	cout << "complex = " << complex << endl;
	cout << "complex2 = " << complex2 << endl;
	cout << "complex3 = " << complex3 << endl;
	cout << endl;

	complex = complex2 + complex3;
	cout << "complex = complex2 + complex3" << endl;
	cout << complex << " = " << complex2 << " + " << complex3 << endl;
	cout << endl;

	complex = complex2 - complex3;
	cout << "complex = complex2 - complex3" << endl;
	cout << complex << " = " << complex2 << " - " << complex3 << endl;
	cout << endl;

	complex = complex2 * complex3;
	cout << "complex = complex2 * complex3" << endl;
	cout << complex << " = " << complex2 << " * " << complex3 << endl;
	cout << endl;

	cout << "Does complex1 equal complex2? ";
	if ((complex1 == complex2))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cout << "Does complex1 equal complex3? ";
	if ((complex1 != complex3))
		cout << "yes" << endl;
	else
		cout << "no" << endl;


	// Question 4
	cout << "--- Question 4 ---" << endl;
	RationalNumber rationalNum1(1, -2);
	RationalNumber rationalNum2(50, 60);
	RationalNumber rationalNum3(-20, 40);
	RationalNumber rationalNum4(1, -10);
	RationalNumber rationalNum5(3, 6);

	cout << "rationalNum1: " << rationalNum1.toRationalNumberString() << endl;
	cout << "rationalNum2: " << rationalNum2.toRationalNumberString() << endl;
	cout << endl;

	RationalNumber addition = rationalNum1 + rationalNum2;
	RationalNumber subtraction = addition - rationalNum1;
	RationalNumber multiplication = subtraction * addition;
	RationalNumber division = multiplication / rationalNum1;

	cout << "addition: " << addition.toRationalNumberString() << endl;
	cout << "subtraction: " << subtraction.toRationalNumberString() << endl;
	cout << "multiplication: " << multiplication.toRationalNumberString() << endl;
	cout << "division: " << division.toRationalNumberString() << endl;
	cout << endl;

	// Booleans
	cout << rationalNum3.toRationalNumberString() << " < " << rationalNum4.toRationalNumberString() << " = ";
	if (rationalNum3 < rationalNum4) cout << "yes" << endl;
	else cout << "no" << endl;

	cout << rationalNum3.toRationalNumberString() << " <= " << rationalNum4.toRationalNumberString() << " = ";
	if (rationalNum3 <= rationalNum4) cout << "yes" << endl;
	else cout << "no" << endl;

	cout << rationalNum3.toRationalNumberString() << " > " << rationalNum4.toRationalNumberString() << " = ";
	if (rationalNum3 > rationalNum4) cout << "yes" << endl;
	else cout << "no" << endl;

	cout << rationalNum3.toRationalNumberString() << " >= " << rationalNum4.toRationalNumberString() << " = ";
	if (rationalNum3 >= rationalNum4) cout << "yes" << endl;
	else cout << "no" << endl;

	cout << rationalNum3.toRationalNumberString() << " == " << rationalNum4.toRationalNumberString() << " = ";
	if (rationalNum3 == rationalNum4) cout << "yes" << endl;
	else cout << "no" << endl;

	cout << rationalNum3.toRationalNumberString() << " != " << rationalNum4.toRationalNumberString() << " = ";
	if (rationalNum3 != rationalNum4) cout << "yes" << endl;
	else cout << "no" << endl;

	cout << rationalNum3.toRationalNumberString() << " < " << rationalNum5.toRationalNumberString() << " = ";
	if (rationalNum3 < rationalNum5) cout << "yes" << endl;
	else cout << "no" << endl;

	cout << rationalNum3.toRationalNumberString() << " <= " << rationalNum5.toRationalNumberString() << " = ";
	if (rationalNum3 <= rationalNum5) cout << "yes" << endl;
	else cout << "no" << endl;

	cout << rationalNum3.toRationalNumberString() << " > " << rationalNum5.toRationalNumberString() << " = ";
	if (rationalNum3 > rationalNum5) cout << "yes" << endl;
	else cout << "no" << endl;

	cout << rationalNum3.toRationalNumberString() << " >= " << rationalNum5.toRationalNumberString() << " = ";
	if (rationalNum3 >= rationalNum5) cout << "yes" << endl;
	else cout << "no" << endl;

	cout << rationalNum3.toRationalNumberString() << " == " << rationalNum5.toRationalNumberString() << " = ";
	if (rationalNum3 == rationalNum5) cout << "yes" << endl;
	else cout << "no" << endl;

	cout << rationalNum3.toRationalNumberString() << " != " << rationalNum5.toRationalNumberString() << " = ";
	if (rationalNum3 != rationalNum5) cout << "yes" << endl;
	else cout << "no" << endl;
	return 0;
}