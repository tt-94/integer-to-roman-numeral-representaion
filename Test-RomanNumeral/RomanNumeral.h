#pragma once
#include "pch.h"
#include<string>

class RomanNumeral
{
public:
	std::string IntToRoman(std::string num);
private:
	bool validate(std::string num);
};

