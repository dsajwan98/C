// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_16.CPP
// Program to illustrate default arguments
#include <iostream.h>
#include <conio.h>
// Function prototype
void print_line(char ch = '#', int ctr = 50);
void main()
{
	clrscr();
	print_line(); // Uses both default arguments
	print_line('*'); // Uses second argument as default
	print_line('=', 35); // Uses explicit arguments
}
void print_line(char ch, int ctr)
{
	cout << endl;
	for (int i = 0; i < ctr; i++)
		cout << ch;
	cout << endl;
}
