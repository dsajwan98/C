// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_37.CPP
// Program to find the largest among three numbers
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void main()
{
	clrscr();
	int a, b, c;
	cout << "Enter first number : ";
	cin >> a;
	cout << "Enter second number : ";
	cin >> b;
	cout << "Enter third number : ";
	cin >> c;
	if ((a > b) && (a > c))
		cout << "Bigger is : " << a;
	else
		if ((b > a) && (b > c))
			cout << "Bigger is : " << b;
		else
			cout << "Bigger is : " << c;
	cout << "\nPress any key to continue ...";
	getch();
}