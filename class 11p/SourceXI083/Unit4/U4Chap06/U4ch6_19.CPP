// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_19.CPP
	// Demonstration for the use of strupt(s1) function
	#include <iostream.h>
	#include <stdio.h>
	#include <string.h>
	#include <conio.h>
	void main()
	{
		clrscr();
		char string1[20];
		cout <<  "Enter any word or string : ";
		gets(string1);
		cout << "Upercase format of the string is : " << strupt(string1);
	}