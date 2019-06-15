// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_25.CPP
// Program to convert an integer number into its equivalent binary
#include <iostream.h>
#include <conio.h>
main()
{
	int i;
	long int num, decimal, X[20], d1, d2, q, r;
	// Convert the number into decimal
	clrscr();
	cout << "Enter any integer number ";
	cin >> num;
	cout << "Binary equivalent is : ";
	if (num == 0)
		cout << "00";
	d1 = num;
	i = 0;
	while (d1 != 0)
	{
		r = d1 % 2;    // Remainder
		q = d1 / 2; // Quotient
		X[i] = r; // Transfer the remainder into array
		d1 = q; // Re-initialize the quotient into dividend
		i++;
	}
	int j = i;
	cout << "\n";
	if (num > 0)
	{
		for (i = j-1; i >= 0; i--)
		{
			cout << X[i];
		}
	}
	getch();
	return 0;
}
