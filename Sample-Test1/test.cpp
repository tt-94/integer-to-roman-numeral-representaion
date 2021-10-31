#include "pch.h"
#include "../MyProject/include/romanNumeral.h"


TEST(TestIntToRoman, Test_1) {
	RomanNumeral roman;
	EXPECT_TRUE(roman.validate(1));
	EXPECT_EQ("I",roman.IntToRoman(1));
  
}


TEST(TestIntToRoman, Test_2) {
	RomanNumeral roman;
	EXPECT_TRUE(roman.validate(5));
	EXPECT_EQ("I", roman.IntToRoman(1));

}
