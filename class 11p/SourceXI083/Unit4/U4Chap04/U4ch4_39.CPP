// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_39.CPP
//This program find the sum of series
// 1 + x + x2 /2!  + x3 / 3! +............+ xn /n!

#include <iostream.h>
#include <conio.h>

double seriesum(double x, int n); // Function prototype
void main()
{
	int n, i, x, j, a;
	float p, f, p1, total;
	clrscr();
	cout << "\n\tEnter the total term you want to add => ";
	cin >> n;
	cout << "\n\t Enter the value of x => ";
	cin >> x;
	total = seriesum(x, n);
	cout << "\n\t Sum of the series is => " << total;
	getch();
}
double seriesum(double x, int n)
{
	int i, j;
	double p1, sum;
	double f = 1;
	double p = x;
	sum = 1;
	sum = sum + x;
	for ( i = 2; i < n; i++)
	{
		f = 1;
		for(j = 1; j <= i; j++)
			f = f * j;
		p = p * x;
		p1 = p/f;
		sum = sum + p1;
	}
	return (sum);
}
