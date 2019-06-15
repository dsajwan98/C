// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_18.CPP
// Demonstration of do-while statement to print any number in reverse order.
#include <iostream.h>
main()
{
	long value, r_digit;
	do
	{
		cout << "Enter the number to be reversed. ";
		cin >> value;
		if (value <= 0)
			cout << "The number must be positive \n";
	} while (value <= 0);
	cout << "The reverse of number " << value << " is : ";
	do {
		r_digit = value % 10;
		cout << r_digit;
		value = value / 10;
	}while (value != 0);
	return 0;
}
