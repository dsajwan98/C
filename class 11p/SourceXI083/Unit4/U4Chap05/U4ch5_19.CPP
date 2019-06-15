// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_19.CPP
// Program to reverse an integer.
#include <iostream.h>
#include <conio.h>
void main()
{
	int num, X[6], d1, d2, q, r, i, j;
	clrscr();
	cout << "Enter any integer ";
	cin >> num;
	if (num > 32766)
	{
		cout << "You entered a number which is not valid integer";
		getch();
		return;
	}
	// reversing the integer
	i = 0;
	while (num >= 10)
	{
		q = num / 10;	// Number will be divided by 10 and find the quotient
		r = num % 10;	// Find the remainder
		X[i] = r;	// Stores in array as output i.e., 1234 will produce 4
		num = q;	// Reassign the quotient into num i.e; num = 123
		if (num <= 10)
		{   	i++;
			X[i] = q;	// Stores the last number
		}
		else
			i++;
	}
	// Assigns the value i into j
	j = i;
	cout << "The original number is " << num << endl;
	cout << "The reverse number is ";
	for (i = 0; i <= j; i++)
	{
		cout << X[i];
	}
}