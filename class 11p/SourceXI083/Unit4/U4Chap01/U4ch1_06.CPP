// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_06.CPP
// Program to calculate the roots of quadratic equation
#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
	int a, b, c, r1, r2, d;
	clrscr();
	cout << "\n\t	Enter the values of a , b and c ";
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (d < 0)
		cout << "\n\t Roots are imaginary";
	if (d >= 0)
	{
		r1 = (-b + sqrt(d)) / (2 * a);
		r2 = (-b - sqrt(d)) / (2 * a);
		if ( d == 0)
			cout << "\n\t  Roots are equal";
		cout << " \n\t First root is " << r1;
		cout << " \n\t Second root is " << r2;
	}
	return 0;
}
