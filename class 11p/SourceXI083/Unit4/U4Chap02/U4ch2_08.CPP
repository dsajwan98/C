// Filename: \\SourceXI083\Unit4\U4Chap02\U4ch2_08.CPP
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
main()
{
	char gets_char[80];
	char cin_char[80];
	clrscr();
	cout << "Input a string using gets() : ";
	gets(gets_char);	// Inputs a character line through the standard input device
	cout << "Input a string using cin : ";
	cin >> cin_char;	// Input a character string using cin object.
	cout << "\nOutput of gets() entry : ";
	cout << gets_char;	// Print the gets() string
	cout << "\nOutput of cin entry : ";
	cout << cin_char;	// Prints the cin object string
	return 0;
}