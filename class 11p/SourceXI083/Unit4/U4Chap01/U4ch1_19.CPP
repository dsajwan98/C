// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_19.CPP
// Demonstration of nested loop to find the factorial of all numbers between 1 and 10.
#include <iostream.h>
main()
{
	int i;
	int limit = 10;
	long factorial = 1;
	for (i = 1; i <= limit; i++)
	{
		factorial = 1;
		for (int factor = 2; factor <= i; factor++)
		{
			factorial *= factor;
		}
		cout << "\n" << i << "! is: " <<(double)factorial;
	}
	return 0;
}
