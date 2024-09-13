/*
File Name: Chapter3Ex6_Katlyn_Winkelhake.cpp
Date: 9/13/2024
Programmer: Katlyn Winkelhake
Requirements:
A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar

• 1 cup of butter

• 2.75 cups of flour

The recipe produces 48 cookies with this amount of the ingredients.
Write a program that asks the user how many cookies he or she wants to make, 

then displays the number of cups of each ingredient needed for the specified number of cookies.

*/

#include <iostream>
using namespace std;

int main()
{
	double sugar = 1.5;
	double butter = 1;
	double flour = 2.75;
	double serving = 48;
	double newServing;
	cout << "How many cookies do you want to make?"<<endl;
	cin >> newServing;

	double conversion = newServing / serving;
	double newSugar = sugar * conversion;
	double newButter = butter * conversion;
	double newFlour = flour * conversion;

	cout << "You will need:" << endl << newSugar << "cups of sugar." << endl << newButter << "cups of butter." << endl << newFlour << "cups of flour." << endl;

	return 0;
}