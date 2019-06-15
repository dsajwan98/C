// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_14.CPP
// Demonstration of while statement to find the factorial of a number.
#include <iostream.h>
main()
{
	int i;
	float N;
	double fact = 1;
	cout << "Enter any number to find factorial ";
	cin >> N;
	i = 1;
	while (i <= N)
	{
		fact = fact * i;
		i++;
	}
	cout << "\nThe factorial of " << N
		<< " is " << (double)fact;
	return 0;
}
