// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_09.CPP
#include <iostream.h>
#include <conio.h>
int &small (int &a, int &b)
{
	if (a < b)
		return a;
	else
		return b;
}
void main()
{
	clrscr();
	int x = 5, y = 8;
	// Function call 1
	small(x, y) = -1; // Because it returns a reference (single variable)
	cout << "x =" << x << " y = " << y << endl;
	// Function call 2
	small(y, x) =  6;
	cout << "x = " << x++ << " y = " << y-- << endl;
	// Function call 3
	small(x, y) = 3;
	cout << "x = " << x << " y = " << y << endl;
}