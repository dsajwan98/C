// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_11.CPP
// Sample program using a for statement to display 10 natural numbers
#include <iostream.h>
main()    // Program introduces the for statement, ctr to ten
{
	int ctr;
	for (ctr = 1; ctr <= 10; ctr = ctr + 1)
	{
		cout << ctr << ' ';
	}
	return 0;
}
