// Filename: \\SourceXI083\Unit4\U4Chap03\U4ch3_12.CPP
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
main()
{
	clrscr();
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
	return 0;
}