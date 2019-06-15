// Filename: \\SourceXI083\Unit4\U4Chap02\U4ch2_07.CPP
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
main()
{
	char line_char[80];
	clrscr();
	cout << "Input a string: ";
	gets(line_char);	// Inputs a character line through the standard input device
	puts(line_char);	// Prints the above line into the standard output device
	return 0;
}
