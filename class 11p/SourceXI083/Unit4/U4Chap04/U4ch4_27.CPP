// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_27.CPP
#include <iostream.h>
#include <conio.h>
// C++ function having Two value parameter x and n with result type
// float to find the sum of series given below :
// 1 +  x1 /2!  +x2 / 3! +............+ xn /(n+1)!
float calculate(int n, int x)
{
	float p = 1, f, p1, sum1;
	int i, j;
	sum1 = 1;
	for (i = 0;  i <= n; i++)
	{
		f = 1;
		for (j = 1; j <= i; j++)
		f = f * j;
		p = p * x;
		p1 = p/f;
		sum1 = sum1 + p1;
	}
	return(sum1);
}
void main()
{
	clrscr();
	int n1, x1;
	float sum = 0;
	cout << "Enter the value of n : ";
	cin >> n1;
	cout << "Enter the value of x : ";
	cin >> x1;
	sum = calculate(n1, x1);
	cout << "The sum of the series is : " << sum;
}

