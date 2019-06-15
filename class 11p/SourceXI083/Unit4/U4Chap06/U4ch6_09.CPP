// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_09.CPP
// Demonstration for the use of strcpy(s1, s2) function
#include <iostream.h>
#include <stdio.h>
#include <string.h>
void main()
{
	char name[20], cname[20];
	cout << "Enter your name : ";
	gets(name);
	strcpy(cname, name);
	cout << "\nCopied name is : " << cname;
}
