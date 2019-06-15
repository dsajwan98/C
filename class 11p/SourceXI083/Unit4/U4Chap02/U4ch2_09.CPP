// Filename: \\SourceXI083\Unit4\U4Chap02\U4ch2_09.CPP
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
main()
{
	char gets_char[80];
	clrscr();
	cout << "Input a string using gets() : ";
	gets(gets_char);	// Inputs a character line through the standard input device
	cout << "\nOutput using puts() : ";
	puts(gets_char);	// Print the gets() string
	cout << "End of the Output : ";
	cout << "Demo completed.";
	return 0;
}
