// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_41.CPP
// Program to find the sum factorial of a given number using function argument
#include <iostream.h>
double sumfact(float u, int n)
{
	double  sum = 1;
	int  i;
	float t = 1.0;
	for(i = 1; i <= n; i++)
	{
		t = t *(-1)/(float)i;
		sum = sum + t*u;
	}
	return(sum);
}
void main()
{
	float u;
	int n;
	double s;
	cout << "Enter the value of u => ";
	cin >> u;
	cout << "Enter the value of n => ";
	cin >> n;
	s = sumfact(u, n);
	cout << "\nThe sum is => " << s;
}