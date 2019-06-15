// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_21.CPP
// Program to find the second maximum element of a matrix
# include <iostream.h>
# include <conio.h>
void main()
{
	int mat[3][3], max2, max=0;
	clrscr();
	cout<<"Enter the array of a 3 by 3 matrix : \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin>>mat[i][j];
		}
	}
	for ( i = 0; i < 3; i++)
	{
		for ( int j = 0; j < 3; j++)
		{
			if(mat[i][j] > max)
			{
				max2 = max;
				max = mat[i][j];
			}
		}
	}
	cout<<" The second maximum element of the matrix is " << max2;
	getch();
}
