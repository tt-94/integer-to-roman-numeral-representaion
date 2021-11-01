#include "pch.h"
#include "RomanNumeral.h"


TEST(TestCaseName, FalseTest_1) {
	RomanNumeral romanNumeral;
	EXPECT_THROW(romanNumeral.IntToRoman("0"), std::exception);
}

TEST(TestCaseName, FalseTest_2) {
	RomanNumeral romanNumeral;
	EXPECT_THROW(romanNumeral.IntToRoman("1.2"), std::exception);
}

TEST(TestCaseName, FalseTest_3) {
	RomanNumeral romanNumeral;
	EXPECT_THROW(romanNumeral.IntToRoman("-24"), std::exception);
}

TEST(TestCaseName, FalseTest_4) {
	RomanNumeral romanNumeral;
	EXPECT_THROW(romanNumeral.IntToRoman("a"), std::exception);
}

TEST(TestCaseName, FalseTest_5) {
	RomanNumeral romanNumeral;
	EXPECT_THROW(romanNumeral.IntToRoman("2001"), std::exception);
}


TEST(TestCaseName, TrueTest_1) {
	std::string result;
	RomanNumeral romanNumeral;
	EXPECT_NO_THROW(result = romanNumeral.IntToRoman("1"));
	EXPECT_EQ("I", result);
}

TEST(TestCaseName, TrueTest_2) {
	std::string result;
	RomanNumeral romanNumeral;
	EXPECT_NO_THROW(result = romanNumeral.IntToRoman("67"));
	EXPECT_EQ("LXVII", result);
}

TEST(TestCaseName, TrueTest_3) {
	std::string result;
	RomanNumeral romanNumeral;
	EXPECT_NO_THROW(result = romanNumeral.IntToRoman("525"));
	EXPECT_EQ("DXXV", result);
}

TEST(TestCaseName, TrueTest_4) {
	std::string result;
	RomanNumeral romanNumeral;
	EXPECT_NO_THROW(result = romanNumeral.IntToRoman("1999"));
	EXPECT_EQ("MCMXCIX", result);
}