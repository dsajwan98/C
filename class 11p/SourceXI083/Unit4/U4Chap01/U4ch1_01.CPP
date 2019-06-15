// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_01.CPP
// Prints the square of the input value if the input value is less than 180
#include <iostream.h>
main()
{
	int num, square;
	cout << "\n\n";
	cout << "What number do you want to see the square of? ";
	cin >> num;
	if (num < 120)
	{
		square = num * num;
		cout << "The square of "<< num << " is " << square;
	}
	if (num >= 120)
	{
		cout << "\n*** Square is not allowed for numbers over 120 *** ";
		cout << "\nRun this program again and try a smaller value. ";
	}
	cout << "\nThank you for requesting squares.";
	return 0;
}
