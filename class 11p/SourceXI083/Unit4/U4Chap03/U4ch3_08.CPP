// Filename: \\SourceXI083\Unit4\U4Chap03\U4ch3_08.CPP
// Demonstration for the use of mathematical functions
//	1. ceil(x). 2. fabs(x). 3. floor(x). 4. fmod(x, y).
//	5. pow(x, y). 6. sqrt(x).
#include <iostream.h>
#include <math.h>
void main()
{
	float num1 = -6789.876;
	float x = 13, y = 3;
	cout << "The nearest integer of num1 is : " << ceil(num1);
	cout << "\nThe absolute value of num1 is : " << fabs(num1);
	cout << "\nThe nearest round down value of num1 is : " << floor(num1);
	cout << "\nThe remainder value is : " << fmod(x, y);
	cout << "\nThe x raised to the power y is : " << pow(x,y);
	cout << "\nThe square root value of 100 is : " << sqrt(100);
}
