// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_22.CPP
// Program to demonstrate float type parameter
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
void area_circle(float radius);
void main()
{
	float r;
	clrscr();
	cout << "Enter the radius of circle : ";
	cin >> r;
	area_circle(r);
}
void area_circle(float radius)
{
	float area = 0.0;
	area = 3.14 * radius * radius;
	cout << "\nThe area of circle is : " << area;
}
