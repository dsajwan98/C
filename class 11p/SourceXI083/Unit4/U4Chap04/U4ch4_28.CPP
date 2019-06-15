// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_28.CPP
// This program find the GCD of numbers using recursive function

#include <iostream.h>
#include <conio.h>
int gcd(int x, int y)
{
	int  r;
	r = x % y;
	if (r == 0)
		return  y;
	else
		gcd(y, r);
	return r;
}
void main()
{
	int x1, y1, r1;
	cout << "Enter the value of x : ";
	cin >> x1;
	cout << "Enter the value of y : ";
	cin >> y1;
	r1 = gcd(x1, y1);
	cout << "The GCD is : " << r1;
}
