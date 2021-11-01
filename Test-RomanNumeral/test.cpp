#include "pch.h"
#include "RomanNumeral.h"


TEST(TestCaseName, FalseTest_1) {
	RomanNumeral romanNumeral;
	EXPECT_FALSE (romanNumeral.validate("1.2"));
	//EXPECT_EQ ("I", romanNumeral.IntToRoman("1"));
}

TEST(TestCaseName, FalseTest_2) {
	RomanNumeral romanNumeral;
	EXPECT_FALSE(romanNumeral.validate("-1.2"));
	//EXPECT_EQ("I", romanNumeral.IntToRoman("1.2"));
}

TEST(TestCaseName, FalseTest_3) {
	RomanNumeral romanNumeral;
	EXPECT_FALSE(romanNumeral.validate("a"));
	//EXPECT_EQ("C", romanNumeral.IntToRoman("a"));
}

TEST(TestCaseName, FalseTest_4) {
	RomanNumeral romanNumeral;
	EXPECT_FALSE(romanNumeral.validate("-24"));
	//EXPECT_EQ("I", romanNumeral.IntToRoman("-24"));
}

TEST(TestCaseName, FalseTest_5) {
	RomanNumeral romanNumeral;
	EXPECT_FALSE(romanNumeral.validate("2001"));
	//EXPECT_EQ("MCMXCI", romanNumeral.IntToRoman("2001"));
}



TEST(TestCaseName, TrueTest_1) {
	RomanNumeral romanNumeral;
	EXPECT_TRUE(romanNumeral.validate("+10"));
	EXPECT_EQ("X", romanNumeral.IntToRoman("+10"));
}

TEST(TestCaseName, TrueTest_2) {
	RomanNumeral romanNumeral;
	EXPECT_TRUE(romanNumeral.validate("50"));
	EXPECT_EQ("L", romanNumeral.IntToRoman("50"));
}

TEST(TestCaseName, TrueTest_3) {
	RomanNumeral romanNumeral;
	EXPECT_TRUE(romanNumeral.validate("1999"));
	EXPECT_EQ("MCMXCIX", romanNumeral.IntToRoman("1999"));
}
