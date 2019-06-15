// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_23.CPP
// This program find the minimum number among three numbers.
#include <iostream.h>
main()
{
	int a, b, c;
	int min;
	cout << "Enter the first number  ->  ";
	cin >> a;
	cout << "Enter the second number -> ";
	cin >> b;
	cout << "Enter the third number -> ";
	cin >> c;
	if ((a < b) && (a < c))
		min = a;
	else
		if ((b < a) && (b < c))
			min = b;
		else
			min = c;
	cout << "\nMinimum number is  –>  " << min;
	return 0;
}