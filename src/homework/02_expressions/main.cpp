//write include statements
#include<iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cin; using std::cout;

double meal_amount;
double sales_tax;
double tip_rate;
double tax_amount;
double total;

int main()
{

	auto num = 0;

	cout<<"Enter a number: ";
	cin>>num;

	auto result = 0;
	result = long double meal_amount(num);

	result = get_sales_tax_amount(meal_amount);
	double tax_amount = result;

	double tip_rate;
	cout<<"Enter the tip rate: ";
	cin>>tip_rate;

	result = double get_tip_amount(double meal_amount, double tip_rate);
	double tip_amount = result;

	auto total = tip_amount + tax_amount + meal_amount;

	cout<<"The meal amount is: "<<meal_amount<<"\n";
	cout<<"The sales tax is: "<<sales_tax<<"\n";
	cout<<"The tip amount is: "<<tip_amount<<"\n";
	cout<<"The total is: "<<total;
	

	return 0;
}
