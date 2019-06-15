// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_46.CPP
// Function series(), to find the series

#include <iostream.h>
#include <conio.h>
#include <math.h>

double series(double x, int n)
{
	double sum = 1;
	int p, f = 1;
	for(int i = 1; i < n; i++)
	{
		f = 1;
		p = pow(x, i);
		for(int j = 1; j <= (i + 1); j++)
		f = f * j;
		sum = sum + p/f;
	}
	return sum;
}
void main()
{
	clrscr();
	int x1, n1;
	float sum = 0;
	cout << "Enter the value of x : ";
	cin >> x1;
	cout << "Enter the value of n : ";
	cin >> n1;
	sum = series(x1, n1);
	cout << "The sum of the series is : " << sum;
}


