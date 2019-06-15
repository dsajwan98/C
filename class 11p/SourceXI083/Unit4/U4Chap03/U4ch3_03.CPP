// Filename: \\SourceXI083\Unit4\U4Chap03\U4ch3_03.CPP
// Demonstration for the use of isupper(c) function
#include <iostream.h>
#include <ctype.h>
#include <stdio.h>
void main()
{
	char opt;
	cout << "Enter any character : ";
	opt = getchar();
	fflush(stdin);
	if (isupper(opt))
		cout << "Your entered character is uppercase letter.";
	else
		cout << "Your entered character is not uppercase letter.";
}
