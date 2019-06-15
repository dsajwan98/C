// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_08.CPP
// Program to find the maximum between two numbers
#include<iostream.h>
main()
{
	int  a, b, c, max;
	cout << "\n\t Enter the value of a : ";
	cin >> a;
	cout << "\n\t Enter the value of b : ";
	cin >> b;
	cout << "\n\t Enter the value of c : ";
	cin >> c;
	max = (a>b) ? (a > c ? a : c) : (b > c ? b : c);
	cout << endl << "\n\t Maximum number is " << max;
	return 0;
}
