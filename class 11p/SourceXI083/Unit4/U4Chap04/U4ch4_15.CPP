// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_15.CPP
// Program illustrate formal and actual argument
#include <iostream.h>
double sum_twonum(int a, float b = 40.5, int c = 60);
void main()
{
	int x = 10;
	float y = 20.5;
	int z = 40;
	cout << "The total using formal arguments = " << sum_twonum(x) << endl;
	// Here, x, y and z are actual parameters
	cout << "The total using actual arguments = " << sum_twonum(x, y, z) << endl;
}
// Here, a, b and c are format parameters
double sum_twonum(int a, float b, int c)
{
	double sum = 0.0;
	sum = a + b + c;
	return (sum);
}
