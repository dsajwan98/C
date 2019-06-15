// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_40.CPP
// This program is used to find the sum of prime numbers

#include<iostream.h>
#include<conio.h>
#include <math.h>

int sumprime( int n); // Function prototype
void main()
{
	int n, sum;
	clrscr();
	cout << "\n\tEnter the value of n=> ";
	cin >> n;
	sum = sumprime(n);
	cout << "\n\t Sum of the prime numbers is  => " << sum;
	getch();
}
int sumprime( int n1)
{
	int S = 0, flag;
	for (int i = 1; i <= n1; i++)
	{
		flag = 1;
		for(int j = 2; j<= sqrt(i); j++)
			if ((i%j) == 0)
				flag = 0;
			if (flag == 1)
				S = S + i;
	}
	return (S);
}
