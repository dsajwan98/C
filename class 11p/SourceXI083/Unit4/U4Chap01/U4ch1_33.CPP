// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_33.CPP
// Program to find maximum number between n numbers
#include<iostream.h>
main()
{
	int  max, i, count, n, min;
	i = max  = 0;
	cout << "\n\t Enter how many numbers";
	cin >> n;
	while (i <= n)
	{
		cout << "\n\t Enter the number => ";
		cin >> count;
		if (count > max)
		   max = count;
		if (count < min)
		   min = count;
		i++;
	}
	cout << "\n\t Maximum number is " << max;
	cout << "\n\t Minimum number is " << min;
	return 0;
}