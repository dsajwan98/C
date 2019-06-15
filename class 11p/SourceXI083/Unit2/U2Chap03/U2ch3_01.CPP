// Filename: \\SourceXI083\Unit2\U2Chap03\U2ch3_01.CPP
// Program to calculate the torque
#include <iostream.h>
main()
{
	int t, m1, m2, g;
	cout << " \n\t Enter the value of m1=> ";
	cin >> m1;
	cout << " \n\t Enter the value of m2=> ";
	cin >> m2;
	cout << "\n\t Enter the value of g => ";
	cin >> g;
	t = ((2 * m1 * m2) / ( m1 + m2)) * g;
	cout << " Torque is => " << t;
	return 0;
}