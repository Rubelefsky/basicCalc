//This is following Buckys C++ Programming Tutorials - Creating a basic calculator

#include <iostream>
using namespace std;

int main()
{
	int a; //First number
	int b; //Second number
	int sum; //Sum of A and B

	cout << "Enter a number! \n"; //Printer enter a number
	cin >> a; // Input first number

	cout << "Enter another number! \n"; // Input the second number
	cin >> b; // Enter the second number

	sum = a + b; // Adds A + B to create the sum

	cout << "The sum of those numbers is " << sum << "." << endl; //Prints The sum of those numbers is SUM. 

	return 0;

}