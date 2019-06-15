// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_23.CPP
// Program to demonstrate double type parameter
#include <iostream.h>
#include <conio.h>
#include <math.h>
void cal_power(double base, double power);
void main()
{
	double db, dp;
	clrscr();
	cout << "Enter the base number : ";
	cin >> db;
	cout << "Enter the power : ";
	cin >> dp;
	cal_power(db, dp);
}
void cal_power(double base, double power)
{
	double dans;
	dans = pow(base, power);
	cout << "\nThe result is : " << dans;
}
