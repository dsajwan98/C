// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_34.CPP
// Program to find the sum of geometric series
#include<iostream.h>
main()
{
	int  s, a, r, n, i;
	cout << " \n\t Enter the first term, common ratio of the terms ";
	cin >> a >> r >> n;
	s = 0;
	i = 1;
	do
	{
		s = s + a * i;
		i = i * r;
	}while (i > n +1);
	cout << " sum is = " << s;
	return 0;
}