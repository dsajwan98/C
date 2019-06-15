// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_33.CPP
#include <iostream.h>
#include <conio.h>
// The required function is :
double seqsum(double x, int n)
{
	float sum = 1, num = x, div = 2, fact = 1;
	float term;
	for(int i = 2; i <= n; i++)
	{
		num = num*n;
		fact = fact*(div)*(div - 1);
		term = (num/fact);
		div = div+2;
		sum = sum + term;
	}
	return sum;
}

void main()
{
	clrscr();
	double x1, seqs = 0;
	int n1;
	cout << "Enter the value of x : ";
	cin >> x1;
	cout << "Enter the value of n : ";
	cin >> n1;
	seqs = seqsum(x1, n1);
	cout << "The value of series is : " << seqs;
}