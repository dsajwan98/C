// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_34.CPP
	#include <iostream.h>
	#include <string.h>
	#include <stdio.h>
	#include <conio.h>
	int length_check(char st1[], char st2[])
	{
		int ctr=0, ctr1=0;
		ctr = strlen(st1);
		ctr1 = strlen(st2);
		if (ctr == ctr1)
			return 0;
		else
			return 1;

	}
	void main()
	{
		clrscr();
		char str1[80], str2[80];
		int opt=0;
		cout << "Enter first string :";
		gets(str1);
		cout << "Enter second string :";
		gets(str2);
		opt = length_check(str1, str2);
		if (opt == 0)
			cout << "String are equal length";
		else
			cout << "Strings are not equal length";
	}
