// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_18.CPP
// Demonstration for the use of strrev(s1) function
#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
	clrscr();
	char string1[20], string2[20];
	cout <<  "Enter any word or string : ";
	gets(string1);
	strcpy(string2, string1);
	cout << "Reverse of string is : " << strrev(string2);
	if (strcmp(string1, string2) == 0)
		cout << "\n" << string1 << " is a palindrome\n";
	else
		cout << "\n" << string1 << " is not a palindrome\n";
}
