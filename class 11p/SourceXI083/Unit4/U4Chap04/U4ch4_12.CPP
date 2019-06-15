// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_12.CPP
#include <iostream.h>
#include <conio.h>
void main()
{
	int a = 5; // Outer a
	if (a == 5)
	{
		int a; // inner a. This a hides the outer a
		a = 10;
		cout << "Inner a has the value " << a << endl;
	}
	cout << "outer a has the value " << a << endl;
}
