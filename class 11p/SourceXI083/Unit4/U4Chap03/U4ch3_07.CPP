// Filename: \\SourceXI083\Unit4\U4Chap03\U4ch3_07.CPP
// Demonstration for the use of toupper(c) function
#include <iostream.h>
#include <ctype.h>
#include <stdio.h>
void main()
{
	int opt;
	cout << "Please enter any character : ";
	opt = getchar();
	fflush(stdin);
	if isalpha(opt)
		if (islower(opt))
		{
			cout << "The converted letter is ... " ;
			putchar(toupper(opt));
		}
		else
			cout << "This is not a lowercase letter.";
	else
		cout << "The character is not an alphabet.";
}
