// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_47.CPP
#include<iostream.h>
#include<conio.h>
double power(double n, int p = 2)
{
	int s = 1;
	for(int i = 1; i <= p; i++)
		s = s*n;
	return(s);
}
void main( )
{
	double num, result;
	int po;
	clrscr();
	cout << "Enter the number ";
	cin >> num;
	cout << "Enter the power to be calculated ";
	cin >> po;
	result = power(num,po);
	cout << "\nResult when the power is given "<<result;
	result = power(num);
	cout << "\nResult when the power is not given "<<result;
}
