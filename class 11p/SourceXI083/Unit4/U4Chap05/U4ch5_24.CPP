// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_24.CPP
//Program to reverse a string
#include<iostream.h>
#include<string.h>
#include<conio.h>
#include <stdio.h>
int i, j, k;
void read(char a[20])
{
	cout << "\n\t";
	cout << "\n\tEnter the string ";
	gets(a);              //To read the string
}
// Function to reverse the string
void rev(char a[20])
{
	cout << "\n\tThe reversed string is ";
	int i, l = strlen(a),  j = l - 1;
	char t;
	for (i = 0; i <= j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	cout << a;
}
// Main function of the program
void main()
{
	char str[20];
	clrscr();
	cout << "\n\n\n\t ";
	cout << "This program is meant to accept a string, and reverse it:";
	getch();
	clrscr();
	read(str);          //Calling a function
	rev(str);
	getch();
}
