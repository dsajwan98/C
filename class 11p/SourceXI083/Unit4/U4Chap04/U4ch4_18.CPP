// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_18.CPP
//  Program that passes by address
#include <iostream.h>
#include <string.h>
void duplicate (int& a, int& b, int& c)
{
	a*=2;
  	b*=2;
  	c*=2;
}

int main ()
{
  	int x=1, y=3, z=7;
  	duplicate (x, y, z);
  	cout << "x=" << x << ", y=" << y << ", z=" << z;
  	return 0;
}