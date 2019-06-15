// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_17.CPP
// Program to find the length of a string strlen() function
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	char str1[60];
	int i = 0;
	clrscr();
	cout << "Enter your name : ";
	gets(str1);
	for (i = 0; str1[i] != '\0'; i++);
	cout << "Total length of the name is : " << i;
}
