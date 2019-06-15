// Filename: \\SourceXI083\Unit4\U4Chap03\U4ch3_04.CPP
// Demonstration for the use of isdigit(c) function
#include <iostream.h>
#include <ctype.h>
#include <stdio.h>
void main()
{
	int opt;
	cout << "Enter any number : ";
	opt = getchar();
	fflush(stdin);
	if (isdigit(opt))
		cout << "Your entered number is a digit.";
	else
		cout << "Your entered number is not a digit.";
}
