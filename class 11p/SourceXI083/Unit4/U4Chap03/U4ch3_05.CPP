// Filename: \\SourceXI083\Unit4\U4Chap03\U4ch3_05.CPP
// Demonstration for the use of isalnum(c) function
#include <iostream.h>
#include <ctype.h>
#include <stdio.h>
void main()
{
	int opt;
	cout << "Enter any number or character : ";
	opt = getchar();
	fflush(stdin);
	if (isalnum(opt))
		cout << "Your entered number is an alphanumeric character.";
	else
		cout << "Your entered number is not an alphanumeric character.";
}
