// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_01.CPP
// Program illustration a simple function call
#include <iostream.h>
void Sum_Num(); // Function prototyp declaration
// Declares the function body
void Sum_Num()
{
	int a, b, sum=0;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	sum = a + b;
	cout << "The sum is: " << sum;
}
main()
{
	Sum_Num();
	return 0;
}

