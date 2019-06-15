// Filename: \\SourceXI083\Unit2\U2Chap03\U2ch3_07.CPP
// Demonstration of comma operator
#include <iostream.h>
main()
{
	int num, sq, cube; // Comma operator
	num = 4;
	// Calculate the square and cube of the number
	sq = (num * num), cube = (num * num * num);
	cout << "The square of " << num << " is " << sq;
	cout << "\nThe cube of " << num << " is " << cube << "\n";
	return 0;
}
