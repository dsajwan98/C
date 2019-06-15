// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_41.CPP
// Program to find whether a given number is even or odd.
#include <iostream.h>
#include <conio.h>
void main()
{
	int num;
	cout << "Enter any number ";
	cin >> num;
	if ((num % 2) == 0)
		cout << "Number is even";
	else
		cout << "Number is odd";
}