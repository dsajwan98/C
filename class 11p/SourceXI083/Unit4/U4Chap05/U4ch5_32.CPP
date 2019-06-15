// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_17.CPP
// Program to find the transpose of a matrix.
#include<iostream.h>
#include<conio.h>
void main()
{
	int mat[10][20], trans[20][10];
	int n, m, i, j;
	cout << "\n\t Enter the number of rows -> ";
	cin >> n;
	cout << "\n\t Enter the number of column -> ";
	cin >> m;
	cout << "\n\t Enter the elements of array\n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cout << "\n\t Enter element -> ";
				cin >> mat[i][j];
		}
	}
	for (i = 0; i < m; i++)
	{
		for ( j = 0 ; j < n; j++)
		{
			trans[i][j] = mat[j][i];
		}
	}
	clrscr();
	cout << "\n\n\t The original matrix is \n\n ";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cout << "\t" << mat[i][j]<<"  ";
		}
		cout<<"\n";
	}
	cout << "\n\n\t The transpose of matrix\n\n ";
	for (i = 0; i < m; i++)
	{
		for ( j = 0 ; j < n; j++)
		{
			cout << "\t\t" << trans[i][j]<<"  ";
		}
		cout<<"\n";
	}
}