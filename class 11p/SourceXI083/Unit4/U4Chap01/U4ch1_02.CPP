// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_02.CPP
// Program to print the largest of 3 numbers
#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int a, b, c, d;
	cout << "Enter any three numbers : ";
	cin >> a >> b >> c;
	if ((a) && (b) && (c))	// only checks the nonzero value
	{
		d = a;
		if (b>d)
			d = b;
		if (c>d)
			d = c;
		cout << "The largest is " << d;
	}
	if ((!a) || (!b) || (!c))	// only checks the zero value
		cout << "One value is zero";
}