// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_21.CPP
// Demonstrate use of continue statement
#include <iostream.h>
main()
{
	int ctr;
	for (ctr = 1; ctr <= 10; ctr++)	// Loop 10 times
	{
		cout << ctr << " ";
		continue;	// Cause body to end early
		cout << "C++ Programming \n";
	}
	cout << "\n";
	return 0;
}
