#include "pch.h"
#include "RomanNumeral.h"


TEST(TestCaseName, RightTest_1) {
	RomanNumeral romanNumeral;
	EXPECT_TRUE(romanNumeral.validate(1));
	EXPECT_EQ("I", romanNumeral.IntToRoman(1));
}

TEST(TestCaseName, RightTest_2) {
	RomanNumeral romanNumeral;
	EXPECT_TRUE(romanNumeral.validate(100));
	EXPECT_EQ("C", romanNumeral.IntToRoman(100));
}

TEST(TestCaseName, FalseTest_1) {
	RomanNumeral romanNumeral;
	EXPECT_TRUE(romanNumeral.validate(5));
	EXPECT_EQ("I", romanNumeral.IntToRoman(5));
}

TEST(TestCaseName, FalseTest_2) {
	RomanNumeral romanNumeral;
	EXPECT_TRUE(romanNumeral.validate(1999));
	EXPECT_EQ("MCMXCI", romanNumeral.IntToRoman(1999));
}