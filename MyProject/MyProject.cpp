// MyProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "romanNumeral.h"
using namespace std;

int main()
{
	romanNumeral romanNumeral; //create an object of Class RomanNumeral
	cout << "Please enter an integer : ";
	cin >> romanNumeral.num;
	if ((romanNumeral.num > 2000) || (romanNumeral.num < 1)) {
		cout << endl << "Invalid Integer" << endl;

	}
	else {

		cout << "Roman Numeral of " << romanNumeral.num << " is : " << romanNumeral.IntToRoman(romanNumeral.num) << endl;

	}

return 0;

}

