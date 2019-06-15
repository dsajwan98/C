// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_36.CPP
// Function to find the sum of row elements of a two dimensional array

#include <iostream.h>
#include <conio.h>

void calculate(int R[5][6])
{
	int i, j, sum = 0;
	for(i = 0; i < 5; i++)
	{
		sum = 0;
		for(j = 0; j < 6; j++)
		{
			sum = sum + R[i][j];
		}
		cout << "\n\tSum of row " << (i+1) << " is " << sum;
	}
}
void main()
{
	clrscr();
	int AR[5][6];
	int i, j;
	// Input data into array
	cout << "Enter the array values : \n";
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
			cin >> AR[i][j];
	}
	// Displaying AR array values
	cout << "\nThe array is : \n";
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
			cout << AR[i][j] << "	";
		cout << "\n";
	}
	calculate(AR);
}