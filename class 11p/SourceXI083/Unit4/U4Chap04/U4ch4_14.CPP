// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_14.CPP
// Program illustrate scope resolution operator
#include <iostream.h>
int i = 20; // i is a global variable
void main()
{
	int i = 40;
	cout << endl;
	cout << "Local variable i = " << i << endl;
	cout << "Global variable i = " << ::i << endl;
}
