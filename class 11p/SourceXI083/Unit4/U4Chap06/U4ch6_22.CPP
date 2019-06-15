// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_22.CPP
// Program to replace two or more consecutive blanks in a string by a single blank
#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
	char string[60];
	int i = 0, n;
	clrscr();
	cout << "Enter any string : ";
	gets(string);
	while (i < n)
	{
		if ((string[i] == ' ')&&(string[i+1]==' '))
		{
			int j = i;
			while (string[j] != '\0')
			{
				string[j] = string[j+1];
				j++;
			}
			i--;
		}
		i++;
	}
	cout << "\nThe string after deleting extra space(s) is : " << string;
}