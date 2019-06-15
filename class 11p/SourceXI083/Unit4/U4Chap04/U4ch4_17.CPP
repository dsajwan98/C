// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_17.CPP
// Program to calculate a specific factorial number
#include <iostream.h>
void calc_fact(int n);	// Global function declared
void calc_fact(int n)
{
	long int fact = 1;
	int i;
	for (i = 1; i <=n; ++i)
		fact *= i;
	cout << "The factorial of " << n << " is " << fact;
}
void main()
{
	long int number;
	cout << "Enter a number ";
	cin >> number;
	calc_fact(number);
}
