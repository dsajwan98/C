// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_16.CPP
// Program to find the sum of diagonals of a matrix
# include <iostream.h>
# include <conio.h>
const   M = 4;
const   N = 4;
int main()
{
	clrscr();
	int  MATRIX[M][N], i, j, s1 = 0, s2 = 0;
	cout << "\n\tEnter the element in the array :\n ";
	for(i = 0; i < M; i++)
		for(j = 0; j < N; j++)
		{
			cin >> MATRIX[i][j];
		}
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			cout << MATRIX[i][j] << "\t";
		}
		cout << "\n";
	}
	// Steps to find the sum of left to right diagonal
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			s1 = s1 + MATRIX[i][j];
			i++;
		}
	}
	// Steps to find the sum of right to left diagonal
	cout << "Matrix with diagonal sum is :\n";
	for (i = 0; i <= M; i++)
	{
		for (j = N - 1; j >= 0; j--)
		{
			s2 = s2 + MATRIX[i][j];
			i++;
		}
	}
	cout << "--------------------------\n";
	cout << s2 << "   			" << s1;
	getch();
	return 0;
}