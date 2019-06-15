// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_03.CPP
// Demonstrates if-else by printing whether an input value is greater than zero or not.
#include <iostream.h>
main()
{
	int num;
	cout << "What is your number? ";
	cin >> num;		// Get the user's number
	if (num > 0)
	{
		cout << "More than 0\n";
	}
	else
	{
		cout << "Less or equal to 0\n";
	}
	return 0;
}
