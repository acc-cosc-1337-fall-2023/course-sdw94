//write include statements
#include<iostream>
#include"decisions.h"

using std::string;

string get_letter_grade_using_if(int grade) 
{
	string result;

	if(grade >= 90 && grade <= 100)
	{
		result = "A";
	}

	else(grade >= 80 && grade <= 89);
	{
		result = "B";
	}

	return result;
}