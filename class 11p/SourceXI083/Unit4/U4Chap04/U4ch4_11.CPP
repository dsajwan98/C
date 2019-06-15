// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_11.CPP
// Program illustrate the scope of variables
#include <iostream.h>
int i;			  // i is a global variable
void scope(int a);
main()
{
	int b;		  // b is Local variable for main()
	cout << "Enter the value of b : ";
	cin >> b;
	scope(b);	 //  b is an actual variable
	return 0;
}
// Called function
void scope(int a)	// a is a formal variable
{
	int n;
	n = a;		// n is Local variable for function scope
	for (i = 1; i <= 5; i++)
	{
		n = n + i;
	}
	cout << "Value after addition is " << n;
}
