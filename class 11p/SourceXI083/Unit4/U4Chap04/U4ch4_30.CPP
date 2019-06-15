// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_30.CPP
//Program to convert decimal number into binary and octal equivalent
#include<iostream.h>
#include<conio.h>
int n, r = 0, x, y;
int num;
int get()
{
	cout << "\n\tEnter the number in decimal ";
	cin >> num;
	return (num);
}
// Function for binary conversion
void binary(int s1)
{
	x = s1;
	n = num;
	while (n != 0)
	{
		r = (n%2);
		x = (x-1);
		gotoxy((x), 8);
		cout << r;
		n /= 2;
	}
}
// Function for octal conversion
void octet(int s2)
{
	y = s2;
	n = num;
	while (n != 0)
	{
		r = (n % 8);
		y = (y - 1);
		gotoxy((y), 10);
		cout << r;
		n = (n/8);
	}
}
void cal_siz(int &i, int &j, int n)
{
	i = 35, j = 34;
	int numb = n;
	while (numb != 0)
	{
		numb /= 2;
		i = i + 1;
	}
	numb = n;
	while (numb != 0)
	{
		numb /= 8;
		j = j + 1;
	}
}
//Main
void main()
{
	int n, sz1, sz2;
	clrscr();
	cout << "\n\tProgram to convert decimal number into binary and octal number ";
	get();
	n = num;
	cal_siz(sz1, sz2, n);
	cout << "\n\t The Binary Equivalent is =>  ";
	binary(sz1);
	cout << "\n\n\t The Octal Equivalent is =>  ";
	octet(sz2);
	getch();
}  //End of main