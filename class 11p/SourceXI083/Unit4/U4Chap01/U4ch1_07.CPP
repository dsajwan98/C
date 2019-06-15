// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_07.CPP
#include<iostream.h>
void main()
{
	int x, y, z;
	cout << "\t Enter the value of x => ";
	cin >> x;
	cout << "\t Enter the value of y => ";
	cin >> y;
	x = x + 1;
	y = y - 1;
	if ((x>y) && (x>=0))
		  z = x % y;
	else
		z = y % x;
	cout << "\n Value of x => "<<x;
	cout << "\n Value of y => "<<y;
	cout << "\n Value of z => "<<z;
	x++;
	--y;
	z = y > x ? y : x;
	cout << "\n Value of x => "<<x++;
	cout << "\n Value of y => "<<--y;
	cout << "\n Value of z => "<<z;
}