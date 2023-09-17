//write include statements
#include<iostream>
#include"decisions.h"

using std::string; using std::cout; using std::cin;

int main()
{
	auto option = 0;
	cout<<"Choose an option: ";
	cin>>option;
}

string get_letter_grade_using_if(int grade) 
{
	std::cout<<"Enter your grade: ";
	std::cin>>grade;

	string result;

	if(grade >= 90 && grade <= 100)
	{
		result = "A";
	}

	else if (grade >= 80 && grade <= 89)
	{
		result = "B";
	}

	else if (grade >= 70 && grade <= 79)
	{
		result = "C";
	}

	else if (grade >= 60 && grade <= 69)
	{
		result = "D";
	}

	else if (grade >= 0 && grade <= 59)
	{
		result = "F";
	}

	return result;

	std::cout<<"Your letter grade is " << result << ".";
}

string get_letter_grade_using_switch(int grade)
{
	std::cout<<"Enter your grade: ";
	std::cin>>grade;

	string result;

	switch(grade)
	{
	case 1:
		result = "A";
		break;
	
	case 2:
		result = "B";
		break;
	
	case 3:
		result = "C";
		break;

	case 4:
		result = "D";
		break;
	
	case 5:
		result = "F";
		break;
	}

	return result;

	std::cout<<"Your letter grade is " << result << ".";

}


void display_menu(option)
{
	auto option = 0;
	
	cout<<"Main Menu"<<"\n";
	cout<<"1 - Letter grade using if.\n";
	cout<<"2 - Letter grade using switch.\n";
	cout<<"3 - Exit";
	cin<<option;

	if(num = 1)
	{
	cout<<"Enter your grade: "
	cin>>grade
	
	if(grade > 0 && grade <=100)
	{
		get_letter_grade_using_if(grade);
		return result;
	}
	}

	if(num = 2)
	{
	cout<<"Enter your grade: "
	cin>>grade

	if(grade > 0 && grade <=100)
	{
		get_letter_grade_using_switch(grade);
		return result;
	}
	}

}

