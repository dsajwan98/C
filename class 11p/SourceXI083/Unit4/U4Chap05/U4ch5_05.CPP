// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_05.CPP
// Find totals of 8 input values from the user.
#include <iostream.h>
main()
{
	int num[8], i;
	int total = 0;
	cout << "Please enter 8 numbers ... \n";
	for (i = 0; i < 8; i++)
	{
		cin >> num[i];
		total += num[i];
	}
	cout << "The total of the numbers is " << total << "\n";
	return 0;
}
