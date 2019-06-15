// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_14.CPP
// Program to demonstrate the sum of two matrices
#include<iostream.h>
#include<conio.h>
int main()
{
	int a[3][3], b[3][3], c[3][3];
	int i, j;
	cout << "\n\t Enter elements of Ist array :\n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			cin >> a[i][j];
	}
	cout << "\n\t Enter elements of IInd array :\n";
	for (i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			cin >> b[i][j];
	}
	// Steps to add two matrices
	for (i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];
	}
	clrscr();
	cout << "First matrix is :\n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "Second matrix is :\n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << b[i][j] << "\t";
		}
		cout << "\n";
	}
	cout<<" \n Sum of two matrices is :\n";
	for (i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			cout << c[i][j] << "\t";
		}
		cout << "\n";
	}
	return 0;
}