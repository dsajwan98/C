// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_22.CPP
// Demonstration of goto statement to find the factorial of any number.
#include <iostream.h>
main()
{
	long int i, N;
	float fact;
	cout << "Enter any number ";
	cin >> N;
	i = 1;
	fact = 1;
	FACT:
		if (i <= N)
		{
			fact = fact * i;
			i = i + 1;
			goto FACT;
		}
	if (N > 0)
		cout << "Factorial is " << fact;
	return 0;
}