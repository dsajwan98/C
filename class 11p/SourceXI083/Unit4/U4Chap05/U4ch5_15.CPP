// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_15.CPP
// Program to find the product of two matrices.
# include <iostream.h>
# include <conio.h>
void main()
{
	int mat1[3][3], mat2[3][3], mat3[3][3];
	int ROW, COL, i, j, k;
	clrscr();
	cout << "Enter first matrix elements :\n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> mat1[i][j];
		}
	}
	cout << "Enter second matrix elements :\n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> mat2[i][j];
		}
	}
	// Initializing the third matrix
	for ( i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			mat3[i][j] = 0;
		}
	}
	// Doing product of two matrices
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
			{
				mat3[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
	clrscr();
	cout << "The first matrix is :\n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << mat1[i][j] << "\t";
		}
		cout << "\n";
	}
	cout<<"The second matrix is :\n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << mat2[i][j]<< "\t";
		}
		cout << "\n";
	}
	cout<<"Product of the matrix is :\n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << mat3[i][j] << "\t";
		}
		cout << "\n";
	}
}
