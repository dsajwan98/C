// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_39.CPP
// Program to find first 5 multiples of 9 using for loop
#include<iostream.h>
 main()
{
	int i, j, k;
	for( i = 1; i <= 5; i++)
	{
		k = i * 9;
		cout << "9" << " * " << i << " = " << k << "\n";
	}
	return 0;
}