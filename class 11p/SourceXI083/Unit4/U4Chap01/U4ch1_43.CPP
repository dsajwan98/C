// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_43.CPP
// Program to print out the electricity charges
#include <iostream.h>
#include <conio.h>
void main()
{
	int units;
	float charges = 0;
	cout << "Enter the number of units consumed : ";
	cin >> units;
	if (units < 100)
		charges = (units * 0.4) + 50;
	else
		if (units < 300)
			charges = ((units-100) * 0.5 + 50) + 50;
		else
			if (units > 300)
				charges = ((units-300) * 0.6 + 90) + 50;
	cout << "The charges is : "<< charges;
}