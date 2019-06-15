// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_31.CPP
// Program to calculate   xj / x!
#include<iostream.h>
#include<conio.h>
void main()
{
	int fact(int n);
	int power(int i, int n);
	int s, x, j;
	cout << "\n\t Enter the value of x = ";
	cin >> x;
	cout << "\n\t Enter the power= ";
	cin >> j;
	cout << "\n\t Fact is " << fact(x);
	cout << "\n\t Power is " << power(j, x);
	s = power(x, j) / fact(x);
	cout << " xj / x! is = " << s;
	getch();
}
int fact(int n)
{
	int f = 1;
	if (n == 0)
		return(1);
	else
		f = n * fact(n - 1);
	return(f);
}
int power(int i, int n)
{
	int p = 0;
	if (i == 0 )
		p = 1;
	else
		p = n * power(i - 1, n);
	return(p);
}
