// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_20.CPP
// Program to demonstrate char type parameter
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
void char_out(char ch);
void main()
{
	char inchar;
	clrscr();
	cout << "Enter one character from keyboard : ";
	inchar = getchar();
	char_out(inchar);
}
void char_out(char ch)
{
	int j;
	cout << endl;
	for (j = 1; j < 6; j++)
		cout << "The character you enter is : " << ch << endl;
}