// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_30.CPP
// Program to check whether the number is perfect or not
#include<iostream.h>
#include<math.h>
main()
{
	int a, b, n;
	cout << "enter a number";
	cin >> n;
	b = sqrt(n);
	a = b*b;
	if (a == n)
		cout << "number is perfect";
	else
		cout << "number is not perfect";
	return 0;
}
