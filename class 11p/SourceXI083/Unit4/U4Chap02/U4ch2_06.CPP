// Filename: \\SourceXI083\Unit4\U4Chap02\U4ch2_06.CPP
// Demonstration for getchar() and putchar() function
// Write a program to input any character in lowercase and print its uppercase letter.
#include <iostream.h>
#include <stdio.h>
main()
{
	char char_val;
	char_val = getchar();
	cout << "\nThe capital letter is : ";
	putchar(char_val-32);	// Subtract 32 for uppercase letter,
		// as the difference between lowercase and uppercase
	return 0;
}
