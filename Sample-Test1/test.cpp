#include "pch.h"
#include "../MyProject/include/romanNumeral.h"

TEST(TestCaseName, TestName) {
  ASSERT_TRUE("I", IntToRoman(1));
  
}

TEST(TestCaseName, TestName_1) {
	ASSERT_TRUE("II", IntToRoman(1));

}