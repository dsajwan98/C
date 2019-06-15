// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_34.CPP
//This function calculate the sum of columns of a two dimensional matrix
//DIMENSIONAL ARRAY R[7][7]

#include <iostream.h>
#include <conio.h>

void calculate(int R[7][7])
{
	int i, j, sum = 0;
	for (i = 0; i < 7; i++)
	{
		sum = 0;
		for (j = 0; j < 7; j++)
		{
			sum = sum + R[j][i];
		}
		cout << " \n\t sum of column " << (i+1) << " is " << sum;
	}
}
void main()
{
	clrscr();
	int AR[7][7];
	int i, j;
	// Input data into array
	cout << "Enter the array values : \n";
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
			cin >> AR[i][j];
	}
	// Displaying AR array values
	cout << "\nThe array is : \n";
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
			cout << AR[i][j] << "	";
		cout << "\n";
	}
	calculate(AR);
}