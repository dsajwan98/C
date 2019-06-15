// Filename: \\SourceXI083\Unit4\U4Chap03\U4ch3_06.CPP
// Demonstration for the use of tolower(c) function
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
		if (isupper(opt))
		{
			cout << "The converted letter is ... " ;
			putchar(tolower(opt));
		}
		else
			cout << "This is not an uppercase letter. ";
	else
		cout << "The character is not an alphabet.";
}
