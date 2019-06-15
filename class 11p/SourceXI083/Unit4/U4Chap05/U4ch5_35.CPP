// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_35.CPP
// Function to find the multiplication of row elements of a two dimensional array

#include <iostream.h>
#include <conio.h>

void mul(int A[4][6])
{
	long double arr[4];
	for(int i = 0; i < 4; i++)
	{
		arr[i] = 1;
		for(int j = 0; j < 6; j++)
		{
			arr[i] *= A[i][j];
		}
	}
	for(i = 0; i < 4; i++)
	{
		cout << "Multiplication of row" << i+1 << " =>"  << arr[i] << endl;
	}
}
void main()
{
	clrscr();
	int AR[4][6];
	int i, j;
	// Input data into array
	cout << "Enter the array values : \n";
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 6; j++)
			cin >> AR[i][j];
	}
	// Displaying AR array values
	cout << "\nThe array is : \n";
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 6; j++)
			cout << AR[i][j] << "	";
		cout << "\n";
	}
	mul(AR);
}