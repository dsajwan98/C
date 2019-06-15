// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_09.CPP
// Program that passes by address
// Program to demonstrate array type parameter
#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
void array_avg(float fnum[]);
void main()
{
	float arr[10] = {12.3, 25.7, 70.3, 16.5, 80.5,
			7.3, 61.5, 10.5, 20.5, 120.5};
	clrscr();
	array_avg(arr);
}
void array_avg(float fnum[])
{
	int i;
	float avg;
	cout << "The array elements are : ";
	for (i = 0; i < 10; i++)
	{
		cout << setprecision(2) << fnum[i] << "   ";
		avg += fnum[i];
	}
	cout << "\nThe average is : " << avg/10;
}
