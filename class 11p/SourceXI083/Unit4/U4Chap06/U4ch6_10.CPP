// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_10.CPP
// Program to copy a string to another without strcpy() function
#include <iostream.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
void main()
{
	char str1[40], str2[40];
	int i = 0;
	clrscr();
	cout << "Enter any string : ";
	gets(str1);
	while (str1[i] != '\0')
	{
		str2[i] = str1[i]; // Copying character by character
		i++;
	}
	str2[i] = '\0';
	cout << "Copied string is : " << str2;
}
