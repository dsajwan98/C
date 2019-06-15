// Filename: \\SourceXI083\Unit4\U4Chap03\U4ch3_02.CPP
// Demonstration for the use of islower(c) function
#include <iostream.h>
#include <ctype.h>
#include <stdio.h>
void main()
{
	char opt;
	cout << "Enter any character ";
	opt = getchar();
	fflush(stdin);
	if (islower(opt))
		cout << "Your entered character is lowercase letter";
	else
		cout << "Your entered character is not lowercase letter";
}