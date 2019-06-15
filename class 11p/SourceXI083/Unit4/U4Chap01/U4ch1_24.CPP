// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_24.CPP
// This program find the greatest common divisor of two numbers.
#include <iostream.h>
#include <conio.h>
main()
{
	int r, x, y, r1;
	clrscr();
	cout << "Enter two number -> ";
	cin >> x >> y;
	r = 0;
	r1 = 0;
	while (r != 0)
	{
		r = x % y;
		r1 = y / x;
		y = x;
		x = r;
	}
	cout << "\nGreatest common divisor is  -> " << r1;
	return 0;
}