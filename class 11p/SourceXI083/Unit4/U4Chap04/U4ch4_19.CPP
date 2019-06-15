// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_19.CPP
// Program illustrate type void as an argument
#include <iostream.h>
#include <conio.h>
void sum_num(void);
void main()
{
	cout << "Sum of first 10 natural numbers is : ";
	sum_num();
}
void sum_num(void)
{
	int i, sum = 0;
	for (i = 1; i <= 10; i++)
		sum+=i;
	cout << sum;
}
