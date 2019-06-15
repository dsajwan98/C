// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_42.CPP
// Program to calculate income tax
#include <iostream.h>
#include <conio.h>
void main()
{
	float salary, itax = 0;
	cout << "Enter monthly salary ";
	cin >> salary;
	if (salary >= 9000)
		itax = salary * 0.40;
	else
		if (salary >= 7500 && salary < 8999)
			itax = salary * 0.30;
		else
			if (salary <= 7499)
				itax = salary * 0.20;
	cout << "Income tax is : " << itax;
}