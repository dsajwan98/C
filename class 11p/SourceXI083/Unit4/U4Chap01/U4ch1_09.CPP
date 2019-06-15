// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_09.CPP
// Demonstration of switch statement for finding sum and difference of
// any two numbers.
#include <iostream.h>
main()
{
	int num1, num2, opt, sum, diff;
	cout << "Enter first number ";
	cin >> num1;
	cout << "Enter second number ";
	cin >> num2;
	cout << "1 - > for addition";
	cout << "\n2 - > for difference ";
	cout << "\n\nEnter choice from above ";
	cin >> opt;
	switch (opt)
	{
		case 1:
			sum = num1 + num2;
			break;
		case 2:
			if (num1 > num2)
				diff = num1 - num2;
			else
				diff = num2 - num1;
			break;
		default:
			cout << "\nInvalid option selected";
	}
	if (opt == 1)
		cout << "The sum of " << num1 << " and " << num2 << " is = " << sum;
	else
	if (opt == 2)
		cout << "The difference between " << num1 << " and " << num2 							<< " is = " << diff;
	return 0;
}
