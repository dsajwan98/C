// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_20.CPP
// Program to convert a string to lowercase
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
void main()
{
	char string[60];
	int i = 0;
	clrscr();
	cout << "Enter any string : ";
	gets(string);
	while (string[i] != '\0')
	{
		// If character is between A and Z (65 is ASCII value of A and 90 is of Z)
		if (string[i] >= 65 && string[i] <= 90)
			string[i]+=32; // Add 32 to its ASCII value (to get its lowercase equivalent
		i++;
	}
	cout << "The lowercase string is : " << string;
}