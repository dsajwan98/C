// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_16.CPP
// Demonstration for the use of strlen(s1) function
#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
	clrscr();
	char mobno[20], name[25];
	int moblen, namlen;
	cout <<  "Enter your name : ";
	gets(name);
	cout << "Enter your mobile number : ";
	gets(mobno);
	moblen = strlen(mobno);
	namlen = strlen(name);
	cout << "Your name length is : "<< namlen << " digits";
	cout << "\nYour mobile number's length is : "<< moblen << " digits";
}
