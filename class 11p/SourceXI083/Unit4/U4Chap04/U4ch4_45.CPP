// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_45.CPP
// Function SUMFUN(), to find the series


#include <iostream.h>
#include <conio.h>
#include <math.h>

float SUMFUN(int x, int N)
{
	float s = 0;
	int i,j=2;
	float t = 0;
	float t1,t2;
	for(i = 1; i < (N + 3); i = i + 2)
	{
		t = pow(-1, j);
		t1 = pow(x,i)/i;
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
