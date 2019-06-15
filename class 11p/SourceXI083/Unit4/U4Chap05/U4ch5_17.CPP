// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_17.CPP
// Program to find the sum of array elements
#include<iostream.h>
void main()
{
	int mat[50], n, i, sum;
	cout << "\n\t Enter how many elements  -> ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "\n\t Enter "<< (i+1) << "  element of array -> ";
		cin >> mat[i];
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + mat[i];
	}
	cout << "\n\t Sum of array elements is  -> " << sum;
}
