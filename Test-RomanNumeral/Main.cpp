#include "pch.h"
#include "RomanNumeral.h"

int main(int argc, char** argv)
{

	::testing::InitGoogleTest(&argc, argv);

	std::cout << "Enter a numeral between 1 to 2000 to convert into roman numeral : ";
	int num;
	std::cin >> num;
	RomanNumeral romannumeral; //create an object of Class RomanNumeral
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
