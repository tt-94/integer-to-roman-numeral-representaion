// MyProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "romanNumeral.h"


int main(int argc, char** argv)
{
	 
	std::cout << "Enter a numeral between 1 to 2000 to convert into roman numeral : " ;
	int num;
	std::cin >> num;
	RomanNumeral romanNumeral; //create an object of Class RomanNumeral
	if (romanNumeral.validate(num)) {
		auto result = romanNumeral.IntToRoman(num);
		std::cout << "Roman Numeral of " << num << " is : " << result << std::endl;
	}
	else
	{
		std::cout<<"Invalid Number! ";
	}
	
return 0;

}

