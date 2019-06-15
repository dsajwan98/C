// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_26.CPP
// Function to convert a 2-digit octal number into binary number

#include <iostream.h>
#include <conio.h>
#include <math.h>

void octal_to_binary(int octal)
{
	long binary = 0;
	int decimal;
	int X[10];
	int d1, d2, b12, b2, q, r;
	// Convert the number into decimal
	d1 = octal;
	int i = 0;
	while (d1 >= 10)
	{
		q = d1/10;
		r = d1 % 10;
		X[i] = q;
		d1 = r;
		if (d1 <= 10)
		{
			i++;
			X[i] = r;
		}
		else
			i++;
	}
	int j = i;
	char *strn = " ";
	char *tstrn= " ";
	// Steps to convert the array numbers into a whole integer. For example,
	// suppose the octal number is 14 then, its decimal is X[1] = 4 and X[2] = 1.
	// So, the number will be 41 by the following steps :
	int sum = 0, k = 0;
	for (i = j; i >= 0; i--)
	{
		sum = sum + X[i] * pow(8, k);
		k++;
	}
	decimal = sum;
	// Convert the number into decimal
	d1 = decimal;
	i = 0;
	while (d1 >= 2)
	{
		q = d1 / 2;
		r = d1 % 2;
		X[i] = r;	// Stores the remainder in array
		d1 = q;
		if (d1 < 2)
		{
			i++;
			X[i] = d1;	// Stores the last remainder in array X
		}
		else
			i++;
	}
	j = i;
	cout << "\nThe binary equivalent of octal number ";
	for (i = j; i >= 0; i--)
	{
		cout << X[i] << " ";
	}
}

void main()
{
	int octn;
	clrscr();
	cout << "Enter the octal number : ";
	cin >> octn;
	octal_to_binary(octn);
}
