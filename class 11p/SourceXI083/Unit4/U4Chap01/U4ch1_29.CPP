// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_29.CPP
// This program finds whether the entered number is prime or not.
#include <iostream.h>
main()
{
	int n, i, flag;
	cout << "\n\t\t Enter any number => ";
	cin >> n;
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 1)
		cout << "\n\n\t\tThe number is not prime ";
	else
		cout << " \n\n\t\tThe number is prime ";
	return 0;
}