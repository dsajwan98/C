// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_31.CPP
// Program to find number of 500, 100, 50, 20, 10, 5 and 2 Re. notes in the entered money
#include<iostream.h>
main()
{
	int money;
	int n500, n100, n50, n20, n10, n5, n2, n1;
	cout << "\n\t Enter the money in Rs. ";
	cin >> money;
	while (money)
	{
		n500 = money / 500;
		money = money % 500;
		n100 = money / 100;
		money = money % 100;
		n50 = money / 50;
		money = money % 50;
		n20 = money / 20;
		money = money % 20;
		n10 = money / 10;
		money = money % 10;
		n5 = money / 5;
		money = money % 5;
		n2 = money / 2;
		money = money % 2;
		n1 = money / 1;
		money = money % 1;
	}
	cout << "\n\t Number of 500 " << n500;
	cout << "\n\t Number of 100 " << n100;
	cout << "\n\t Number of 50 " << n50;
	cout << "\n\t Number of 20 " << n20;
	cout << "\n\t Number of 10 " << n10;
	cout << "\n\t Number of 5 " << n5;
	cout << "\n\t Number of 2 " << n2;
	cout << "\n\t Number of 1 " << n1;
}