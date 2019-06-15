// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_36.CPP
// Function to find the sum of series 1 + 2 + 3 + ......+ N

#include <iostream.h>
#include <conio.h>

int sumseries(int N)
{
	int i,sum = 0;
	for(i = 0;i <= N; i++)
		sum = sum + i;
	return(sum);
}
void main()
{
	clrscr();
	int num, nsum = 0;
	cout << "Enter the last element : ";
	cin >> num;
	nsum = sumseries(num);
	cout << "The sum of the series upto " << num << " is " << nsum;
}

