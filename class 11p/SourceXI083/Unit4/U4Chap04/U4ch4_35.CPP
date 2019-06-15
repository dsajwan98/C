// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_35.CPP
// Function to find the sum of the series
// 1 +  x^2 /1!  + x^4 / 2! +............+ x^2n /n!

#include <iostream.h>
#include <conio.h>
#include <math.h>

double  SUM(double x, int n)
{
	float p, f, p1;
	double sum1;
	int i, j;
	int k = 2;
	p = 1;
	f = 1;
	sum1 = 1;
	for (i = 1;i < n; i++)
	{
		f = 1;
		for(j = 1; j <= i; j++)
			f = f * j;  // Calculates the factorial
		p = pow(x, k);  // To find the power of x
		p1 = p/f;
		sum1 = sum1 + p1;
		k = k + 2;
	}
	return(sum1);
}
void main()
{
	double x1, nsum = 0;
	int n1;
	cout << "Enter the value of x : ";
	cin >> x1;
	cout << "Enter the value of n : ";
	cin >> n1;
	nsum = SUM(x1, n1);
	cout << "The value of series is : " << nsum;
}

