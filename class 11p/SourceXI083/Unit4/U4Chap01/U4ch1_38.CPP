// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_38.CPP
#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{
	int x, i;
	float sum = 0, f, p;
	int k = 3;
	clrscr();
	cout << "Enter the value of x : ";
	cin >> x;
	for(i = 0;i<= 5;i++)
	{
		p = pow(x,k);
		f = 1;
		for(int j = 1;j <= k; j++)
			f = f * j;
		sum = sum + p / f;
		k = k + 2;
	}
	cout << "Sum of the first 5 terms of the series is : " << sum;
}