// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_32.CPP
// Program to calculate the Ackerman's function
#include<iostream.h>
void main()
{
	int m, n;
	int a(int m, int n);
	cout << "\n\t Enter the value of m and n = ";
	cin >> m >> n;
	cout << a(m, n);
}
int a(int m, int n)
{
	int a1;
	if ((m == 0) && (n != 0))
		a1 = n + 1;
	else
		if ((n == 0) && (m != 0))
			a1 = a(m - 1, 1);
		else
			a1 = a(m - 1, a(m, (n - 1)));
	return (a1);
}
