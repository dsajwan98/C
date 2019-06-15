// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_10.CPP
// Converts an integer to binary
#include <iostream.h>
#include <conio.h>
void convert_binary(int num);
void main()
{
	long int ivalue;
	clrscr();
	cout << "Enter an integer number : ";
	cin >> ivalue;
	convert_binary(ivalue);
}
void convert_binary(int idata)
{
	int t = 0;
	int iarray[50];
	while (idata != 0)
	{
		iarray[t] = (idata %2);
		idata /= 2;
		t++;
	}
	cout << "The binary equivalent is : ";
	t--;
	for (; t>=0; t--)
		cout << iarray[t];
}