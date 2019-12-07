/*  -------------------------------------------------------
 *  Question 4.cpp
 *  -------------------------------------------------------
 *  Author:  Matthew Ferlaino
 *  Course:	 COSC2947
 *  ID:      169657520
 *  Email:   mferlaino@algomau.ca
 *  Date:	 Sep 9, 2019
 *  ------------------------------------------------------- */

// Inlcude Statements
#include "pch.h"
#include <iostream>
#include <vector>

// Imports
using namespace std;

// Class
class Question4 {

	// question4()
	public: void question4() {
		// Variables
		int productNum = 0;
		int totalSold = 0;
		vector <int> productNums;
		vector <int> totalSoldUnits;

		// Loop
		while (totalSold != -1) {

			cout << "Enter a product number: ";
			// Errors
			while (!(cin >> productNum)) {
				cout << "Invalid product number try again: ";
				cin.clear();
				cin.ignore(100, '\n');
			}
			cout << endl;

			cout << "Enter the quantity sold(-1 to exit): ";
			// Errors
			while (!(cin >> totalSold)) {
				cout << "Invalid total amount try again: ";
				cin.clear();
				cin.ignore(100, '\n');
			}
			cout << endl;
			
			if (totalSold > -1) {
				productNums.push_back(productNum);
				totalSoldUnits.push_back(totalSold);
			}
		}

		// Display results
		double totalValue = 0;
		for (int x : productNums) {
			switch (x) {
				case 1:
					totalValue += (double)totalSoldUnits.back() * 2.98;
					totalSoldUnits.pop_back();
					break;

				case 2:
					totalValue += (double)totalSoldUnits.back() * 4.50;
					totalSoldUnits.pop_back();
					break;

				case 3:
					totalValue += (double)totalSoldUnits.back() * 9.98;
					totalSoldUnits.pop_back();
					break;

				case 4:
					totalValue += (double)totalSoldUnits.back() * 4.49;
					totalSoldUnits.pop_back();
					break;

				case 5:
					totalValue += (double)totalSoldUnits.back() * 6.87;
					totalSoldUnits.pop_back();
					break;
			}
		}

		cout << "The total retail value of all products sold is: $" << totalValue << endl;
	}
};