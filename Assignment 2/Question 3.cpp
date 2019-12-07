/*  -------------------------------------------------------
 *  Question 3.cpp
 *  -------------------------------------------------------
 *  Author:  Matthew Ferlaino
 *  Course:	 COSC2947
 *  ID:      169657520
 *  Email:   mferlaino@algomau.ca
 *  Date:	 Sep 24th, 2019
 *  ------------------------------------------------------- */

 // Include Statements
#include "pch.h"
#include <iostream>
#include <cstdlib>

// Imports
using namespace std;

// Prototypes
void SieveOfEratosthenes(int n);

int main()
{
	int n = 30;
	cout << "Following are the prime numbers smaller "
		<< " than or equal to " << n << endl;

	SieveOfEratosthenes(n);
}

// SieveOfEratosthenas()
void SieveOfEratosthenes(int n) {
	bool prime[30];
	memset(prime, true, sizeof(prime));

	for (int i = 2; i*i <= n; i++)
	{
		// If prime[p] is not changed, then it is a prime 
		if (prime[i] == true)
		{ 
			for (int j = i * i; i <= n; i += j)
				prime[i] = false;
		}
	}

	// Print all prime numbers 
	for (int i = 2; i <= n; i++)
		if (prime[i])
			cout << i << " ";
}