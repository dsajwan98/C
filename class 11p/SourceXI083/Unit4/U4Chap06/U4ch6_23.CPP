// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_23.CPP
// Program to find number of words in a string
#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
	char string[60];
	int i = 0, n, ctr = 1;
	clrscr();
	cout << "Enter any string : ";
	gets(string);
	while (i < n)
	{
		if ((string[i] == ' ') && (string[i+1] == ' '))
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
	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == ' ')
			ctr++;
		i++;
	}
	cout << "\nTotal number of words are : " << ctr++;
}