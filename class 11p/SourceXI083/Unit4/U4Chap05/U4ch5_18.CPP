// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_18.CPP
// Program to calculate the function
#include<iostream.h>
main()
{
	int  f, x;
	cout << "\n\t Enter the value of x = ";
	cin >> x;
	if ( x < 2)
		f = 2 * x * x + 3 * x + 4;
	else
		if (x ==2)
			f = 0;
		else
			f = -(2 * x * x + 3 * x + 4);
		cout << "\n\t Value of f is = " << f;
	return 0;
}