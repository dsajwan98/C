// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_25.CPP
// This program convert decimal number into binary number.
#include <iostream.h>
#include <conio.h>
main()
{
	int n, r, col, row;
	cout << "Enter the value of n ";
	cin >> n;
	col = 40;
	row = 6;
	while (n != 0)
	{
		r = n % 2;
		n = n / 2;
		gotoxy (col, row);
		cout << r;
		col--;
	}
	return 0;
}