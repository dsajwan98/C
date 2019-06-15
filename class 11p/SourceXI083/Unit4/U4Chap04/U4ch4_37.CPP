// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_37.CPP
// Function to find the sum of series (1) + (1+2) + (1+2+3) + ......+ N

#include <iostream.h>
#include <conio.h>

int sumseries(int n)
{
	int i,sum = 0, sum1 = 0;
	for(i = 1; i <= n; i++)
	{
		sum = 0;
		for(int j = 0; j <= i; j++)
			sum = sum + j;
		sum1 = sum1 + sum;
	}
	return(sum1);
}
void main()
{
	clrscr();
	int N, nsum = 0;
	cout << "Enter the last element : ";
	cin >> N;
	nsum = sumseries(N);
	cout << "The sum of the series upto " << N << " is " << nsum;
}
