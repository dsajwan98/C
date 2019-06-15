// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_11.CPP
// Demonstration for the use of strcat(s1, s2) function
#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
	clrscr();
	char fname[10], lname[10];
	char name[20] = " "; // Before cancatnating, initialize a space.
	cout << "Enter your first name : ";
	gets(fname);
	cout << "Enter your last name : ";
	gets(lname);
	strcat(name, fname);	// Concatenates first name onto name
	strcat(name, " ");	// Concatenates one blank space onto name
	strcat(name, lname);	// Concatenates last name onto name
	cout << "\nName is : " << name;
}
