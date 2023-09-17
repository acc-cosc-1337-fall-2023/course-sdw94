#include "decisions.h"
#include "decisions.cpp"

TEST_CASE("Verify Test Configuration", "verification")
{
	REQUIRE(true == true);
}

 TEST_CASE("Test get letter grade using if function", "verification") 
{
	REQUIRE(get_letter_grade_using_if(95) == "A");
	REQUIRE(get_letter_grade_using_if(85) == "B");
	REQUIRE(get_letter_grade_using_if(75) == "C");
	REQUIRE(get_letter_grade_using_if(65) == "D");
	REQUIRE(get_letter_grade_using_if(55) == "F");
}

TEST_CASE("Test get letter grade using switch function", "verification")
{
	REQUIRE(get_letter_grade_using_switch(1) == "A");
	REQUIRE(get_letter_grade_using_switch(2) == "B");
	REQUIRE(get_letter_grade_using_switch(3) == "C");
	REQUIRE(get_letter_grade_using_switch(4) == "D");
	REQUIRE(get_letter_grade_using_switch(5) == "F");
}