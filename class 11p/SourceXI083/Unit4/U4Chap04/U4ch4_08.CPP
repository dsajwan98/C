// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_08.CPP
// Doubles the user's number
#include <iostream.h>
int doub(int num)
{
	int d_num;
	d_num = num * 2;	// Double the number
	return (d_num);	// Return the result
}
main()
{
	int number;	// Holds user's input
	int d_number;	// Will hold double the user's input
	cout << "What number do you want doubled? ";
	cin >> number;
	d_number = doub(number);		// Assign return value
	cout << "Doubled of  " << number << " is " << d_number;
	return 0;
}