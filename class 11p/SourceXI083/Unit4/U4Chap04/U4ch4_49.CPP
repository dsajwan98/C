// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_49.CPP
// Recursive definition of function factorial

#include <iostream.h>
unsigned long factorial (unsigned long number)
{
	if (number <= 1)	// base case
		return 1;
	else
		return number * factorial (number - 1);
}
void main( )
{
	int n;
	cout << "Enter any number:";
	cin >> n;
	cout << "Factorial is : " << factorial(n);
}
