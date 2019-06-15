// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_02.CPP
// Demonstration of a sample program for array handling
#include <iostream.h>
main()
{
	int num[5];
	int i, sum = 0;
	for (i = 0; i < 5; i++)
	{
		cout << "Enter value " << i << " -> ";
		cin >> num[i];
	}
	for (i = 0; i < 5; i++)
	{
		sum = sum + num[i];
	}
	cout << "The sum of all the 5 elements are " << sum;
	return 0;
}
