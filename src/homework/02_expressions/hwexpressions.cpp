#include "hwexpressions.h"
#include<iostream>
using namespace std;

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
const double tax_rate = 6.75;

double get_sales_tax_amount(double meal_amount)
{
	return meal_amount * (tax_rate/100);//1-b hw2
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * (tip_rate/100);//1-d hw2
}

