// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_44.CPP
// Function to find the sum of series

#include <iostream.h>
#include <conio.h>
#include <math.h>
float SUMFUN(int x, int N)
{
	float s = 1, t = 0, t1,t2;
	int i, j = 1;
	for(i = 2; i < (N + 1); i++)
	{
		t = pow(-1, j);
		t1 = pow(x, i)/i;
		t2 = t * t1;
		s = s + t2;
		j++;
	}
	return(s);
}
void main()
{
	clrscr();
	int x1, N1;
	float sum = 0;
	cout << "Enter the value of x : ";
	cin >> x1;
	cout << "Enter the value of N : ";
	cin >> N1;
	sum = SUMFUN(x1, N1);
	cout << "The sum of the series is : " << sum;
}

