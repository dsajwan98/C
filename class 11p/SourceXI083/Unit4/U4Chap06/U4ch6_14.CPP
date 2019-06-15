// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_14.CPP
// Program to compare two strings without strcmp() function
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	char str1[30], str2[30];
	int i = 0, diff;
	clrscr();
	cout << "Enter first string : ";
	gets(str1);
	cout << "Enter second string : ";
	gets(str2);
	while (1)
	{
		if (str1[i] != str2[i])
		{
			diff = str1[i] - str2[i];
			break;
		}
		if (str1[i] == '\0' || str2[i] == '\0')
		{
			diff = 0;
			break;
		}
		i++;
	}
	if (diff == 0)
		cout << "Strings are equal";
	else
		cout << "Strings are not equal";
}
