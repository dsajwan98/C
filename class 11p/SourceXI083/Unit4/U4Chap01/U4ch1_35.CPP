// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_35.CPP
// Program to find out the Armstrong numbers
#include<iostream.h>
#include<conio.h>
main()
{
	int  n, i, k, s, d;
	cout << "\n\t Enter the end limit ";
	cin >> n;
	for (i = 1 ;i <= n; i++)
	{
		s = 0;
		k = i;
		while (k != 0)
		{
			d = k % 10;
			s = s + d * d * d;
			k = k / 10;
		}
		if ( s == i)
			cout << "\n" << i;
	}
	getch();
}