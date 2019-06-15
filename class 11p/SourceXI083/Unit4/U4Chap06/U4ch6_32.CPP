// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_33.CPP
	#include <iostream.h>
	#include <conio.h>
	#include <stdio.h>
	#include <string.h>
	void main()
	{
		clrscr();
		char str[30];
		cout << "Enter any string : ";
		gets(str);
		int i = 0;
		int ln = strlen(str);
		while (i <= ln)
		{
			if (str[i] == ' ')
				str[i] = '-';
			i++;
		}
		cout << str;
	}