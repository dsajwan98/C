// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_45.CPP
// A SIMPLE CALCULATOR
// -------------------

#include <iostream.h>
#include<conio.h>
#include <stdio.h>
void main()
{
	clrscr();
	char choi = 'y';
	long a, b, sum, diff, pro;
	double  div;
	char ch;
	while ((choi == 'y') || (choi == 'Y'))
	{
		clrscr();
		cout << "\n\t\t This program is to perform simple calculator ";
		cout << "\n\n\t\t\t  To add press     + ";
		cout << "\n\n\t\t\t  To subtract     - ";
		cout << "\n\n\t\t\t  To multiply      * ";
		cout << "\n\n\t\t\t  To divide        / ";
		cout << "\n\n\t\t\t   Enter your choice  ";
		cin >> ch;
		clrscr();
		switch (ch)
		{
			case '+':
				cout << "\n\t\t Enter first number  ";
				cin >> a;
				cout << "\n\t\t Enter second number ";
				cin >> b;
				sum = a + b;
				cout << "\n\t\tThe sum is " << sum;
				break;
			case '-':
				cout << "\n\t\t Enter the number to be subtracted ";
				cin >> a;
				cout << "\n\t\tEnter the number from which it is to ";
				cout  << " be subtracted ";
				cin >> b;
				diff = b - a;
				cout << "\n\t\tThe difference is " << diff;
				break;
			case '/':
				cout << "\n\t\t Enter the number to be divided ";
				cin >> a;
				cout << "\n\t\t Enter the divisor ";
				cin >> b;
				div = a/b;
				cout << "\n\t\tThe result of division is " << div;
				break;
			case '*':
				cout << "\n\t\t Enter the first number ";
				cin >> a;
				cout << "\n\t\t Enter the second number ";
				cin >> b;
				pro = a * b;
				cout << "\n\t\tThe product is  " << pro;
				break;
			default :
				cout << "\n\n\n\t\t Enter again from the given choice ";
		}
		cout << "\n\n\n\n\n\nEnter y to continue......";
		cin >> choi;
	}
}