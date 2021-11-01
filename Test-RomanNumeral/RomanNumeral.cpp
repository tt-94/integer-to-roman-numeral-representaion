#include "pch.h"
#include "RomanNumeral.h"
#include<array>

namespace {

	const std::array<std::string, 13> arr_roman = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
	const std::array<int, 13> arr_values = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };

}


bool RomanNumeral::validate(std::string num) {
	int inum = std::stoi(num);

	if (((inum > 2000) || (inum < 1))) {
		return false;
	}

	return true;
}


std::string RomanNumeral::IntToRoman(std::string strnum)
{
	int num = std::stoi(strnum);
	std::string result = "";
	for (std::size_t i{ 0 }; i < arr_values.size(); ++i)
	{
		while (num - arr_values[i] >= 0)
		{
			result += arr_roman[i];
			num -= arr_values[i];
		}
	}

	return result;
}

