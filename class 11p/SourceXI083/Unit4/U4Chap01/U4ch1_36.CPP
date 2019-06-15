// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_36.CPP
// program to print the values of two integers before and after swapping
#include <iostream.h>
void main()
{
	int a, b, temp;
	cout << "Enter value of a : ";
	cin >> a;
	cout << "Enter value of b : ";
	cin >> b;
	cout << endl;
	cout << "Value before swapping is : " << a << " " << b << endl;
	temp = a;
	a = b;
	b = temp;
	cout << "Value after swapping is : " << a << " " << b;
}