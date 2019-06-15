// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_27.CPP
// This program generates the Fibonacci series - 1, 1, 2, 3, 5, 8
#include <iostream.h>
main()
{
	int a = 1, b = 1, c, i = 0, n;
	cout << "\n\t\tEnter the value of n =>  ";
	cin >> n;
	c = a + b;
	cout <<" \n\t\t The series is : \n";
	cout << "\n                      " << a;
	cout << "\n                      " << b;
	cout << "\n                      " << c;
	while (i < n-3)
	{
		a = b;
		b = c;
		c = a + b;
		cout << "\n                      " << c;
		i++;
	}
	return 0;
}
