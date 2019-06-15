// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_28.CPP
// This program swap two number without using third variable.
#include<iostream.h>
#include<conio.h>
main()
{
	int a, b;
	cout << "\n\t Enter first number -> ";
	cin >> a;
	cout << "\n\t Enter second number -> ";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "\n\tAfter swapping a is -> " << a;
		cout << "\n\tAfter swapping b is -> " << b;
	return 0;
	getch();
}
