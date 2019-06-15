// Filename: \\SourceXI083\Unit4\U4Chap03\U4ch3_01.CPP
// Demonstration for the use of isalpha(c) function
#include <iostream.h>
#include <ctype.h>
void main()
{
	char opt;
	cout << "Enter any character : ";
	cin >> opt;
	if (isalpha(opt))
		cout << "Your entered character is an alphabet.";
	else
		cout << "Your entered character is not an alphabet.";
}
