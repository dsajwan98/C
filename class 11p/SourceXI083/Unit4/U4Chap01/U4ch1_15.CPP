// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_15.CPP
// Demonstration of while statement to print any number in reverse order.
#include <iostream.h>
main()
{
	long int value, r_digit;
	value = 0;
	while (value <= 0)
	{
		cout << "Enter the number to be reversed. ";
		cin >> value;
		if (value <= 0)
		    cout << "The number must be positive \n";
	}
	cout << "The reverse of number " << value << " is : ";
	while (value != 0)
	{
		r_digit = value % 10;
		cout << r_digit;
		value = value / 10;
	}
	return 0;
}
