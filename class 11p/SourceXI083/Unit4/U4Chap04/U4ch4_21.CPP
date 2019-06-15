// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_21.CPP
// Program to demonstrate int type parameter
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
void cal_side(int side);
void main()
{
	int length;
	clrscr();
	cout << "Enter the length : ";
	cin >> length;
	cal_side(length);
}
void cal_side(int side)
{
	int area, volume, cube;
	area = side * side;
	volume = side * side * side;
	cube = 6 * area;
	cout << "\nThe side is : " << side;
	cout << "\nThe area is : " << area;
	cout << "\nThe volume is : " << volume;
	cout << "\nThe cube is : " << cube;
}
