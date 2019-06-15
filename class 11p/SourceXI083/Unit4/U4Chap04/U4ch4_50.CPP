// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_50.CPP
#include <iostream.h>
#include <conio.h>
#include <math.h>

// The function is :
int fact(int num)
{
	double prod = 1;
	int i = 1;
	while(i <= num)
	{
		prod = prod*i;
		i++;
	}
	return(prod);
}
double sum(double  x, int n)
{
	double s;
	s = 1;
	double t = 0;
	int i, j = 1;
	for(i = 1; i < n; i++)
	{
		t = pow(x,j);
		s = s + t/(fact(i));
		j = j + 2;
	}
	return(s);
}
void main()
{
	clrscr();
	int n;
	double x, nsum = 0;
	cout << "Enter the value of x : ";
	cin >> x;
	cout << "Enter the value of n : ";
	cin >> n;
	nsum = sum(x, n);
	cout << "The sum of series value is : " << nsum;
}
