// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_48.CPP
#include <iostream.h>
void zero_small(int &a, int &b)
{
	if (a < b)
		a = 0;
	else
		b = 0;
}
void main( )
{
	int x, y;
	cout << "Enter the values X and Y : ";
	cin >> x >> y;
	zero_small(x, y);
	cout << "The final values of X and Y are : ";
	cout << x << y;
}