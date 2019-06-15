// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_38.CPP
// Function to calculate the series
// 1 + 1/2 + 1/3 + 1/4 +...+ 1/n

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

float sumseries(int n)
{
	int i = 1;
	float term, sum = 0.0;
	while (i <= n)
	{
		term = 1/float(i);
		sum = sum + term;
		i++;
	}
	cout << "\n\n\tThe sum is : " << setw(15)    // setwidth
		<< setprecision(4)    // set position of decimal point
		<< setiosflags(ios::left)   // set left justified output
		<< setiosflags(ios::showpoint)  // always show decimal point
		<< setiosflags(ios::fixed)    // set fixed notation for display
		<< sum;
	return(sum);
}
void main()
{
	clrscr();
	int N, nsum = 0;
	cout << "Enter the last element : ";
	cin >> N;
	nsum = sumseries(N);
	cout << "The sum of the series upto " << N << " is " << nsum;
}
