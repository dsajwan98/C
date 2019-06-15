// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_10.CPP
#include<iostream.h>
#include<conio.h>
main()
{
	int  a, r, l, c, b, ch;
	clrscr();
	cout << " \n\t	1. For area of circle";
	cout << "\n\t	2. For area of rectangle";
	cout << "\n\t	3. For circumference of circle";
	cout << "\n\t	4. For area of square";
	cout << "\n\t	Enter your choice ";
	cin >> ch;
	switch (ch)
	{
		case 1:	cout << "\n\tEnter the radius of the circle ";
			cin >> r;
			a = 3.14 * r * r;
			cout << "\tArea of circle is => " << a;
			break;
		case 2:	cout << "\n\tEnter the length ";
			cin >> l;
			cout << "\n\tEnter the breadth ";
			cin >> b;
			a = l * b;
			cout << "\tArea of rectangle is => " << a;
			break;
		case 3:	cout << "\n\tEnter the radius of the circle ";
			cin >> r;
			c = 2 * 3.14 * r;
			cout << "\tCircumference of circle is => " << c;
			break;
		case 4:	cout << "\n\tEnter the side of square ";
			cin >> l;
			a = l * l;
			cout << "\tArea of square is => " << a;
	}
	return 0;
}
