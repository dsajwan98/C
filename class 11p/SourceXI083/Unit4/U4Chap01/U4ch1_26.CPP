// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_26.CPP
// This program find the sum of series
#include<iostream.h>
#include<conio.h>
main()
{
	int n, i, x, j;
	float p, f, p1, sum;
	clrscr();
	cout << " \n\tEnter the value of n => ";
	cin >> n;
	cout << "\n\t Enter the value of x => ";
	cin >> x;
	p = 1;
	sum = 1;
	for ( i = 2; i <= n; i++)
	{
		f = 1;
		for (j = 1; j <= i; j++)
			f = f * j;
		p = p * x;
		p1 = p/f;
		sum = sum + p1;
	}
	cout << "\n\tSum of series is -> " << sum;
	return 0;
}