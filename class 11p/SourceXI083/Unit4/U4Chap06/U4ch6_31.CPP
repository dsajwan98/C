// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_31.CPP
// Program to reverse a string
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
int i, j, k;
// Main
void main()
{
	char str[20];
	clrscr();
	cout << "\n\n\n\t ";
	cout << "This program is meant to accept a string and reverse ";
	getch();
	clrscr();
	cout << "\n\t";
	cout << "\n\tEnter the string ";
	gets(str);              //To read the string
	cout << "\n\tThe reversed string is ";
	int i, length = strlen(str),  j = length - 1;
	char t;
	for (i = 0; i <= j; i++, j--)
	{
		t = str[i];
		str[i] = str[j];
		str[j] = t;
	}
	cout << str;
	getch();
}
