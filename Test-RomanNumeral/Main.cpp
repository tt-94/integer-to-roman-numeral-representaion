#include "pch.h"
#include "RomanNumeral.h"
#include<regex>
#include<iostream>
#include<string>

int main(int argc, char** argv)
{

	::testing::InitGoogleTest(&argc, argv);

	std::string num;
	//std::regex integer("(\\+|-?[[:digit:]]+");

	std::cout << "Enter a numeral between 1 to 2000 to convert into roman numeral : ";
	std::cin >> num;
	RomanNumeral romannumeral; //create an object of Class RomanNumeral
	//if (regex_match(num, integer))
	if (romannumeral.validate(num)) {
		std::string res = romannumeral.IntToRoman(num);
		std::cout << "Roman Numeral of " << num << " is : " << res << std::endl;
	}
	else
	{
		std::cout << "Invalid Number! ";
	}

	return RUN_ALL_TESTS();

}
