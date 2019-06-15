// Filename: \\SourceXI083\Unit2\U2Chap03\U2ch3_11.CPP
/*Program to enter the marks in 3 subjects and calculate total and assign grade if total >= 200 grade is 'A'
otherwise grade is 'B'.*/
#include <iostream.h>
void main()
{
	int m1, m2, m3;
	int total;
	char grade;
	cout << "\t\t Enter the marks in three subjects ";
	cin >> m1 >> m2 >> m3;
	total = m1 + m2 + m3;
	grade = (total >= 200)? 'A' :'B';
	cout  << "\t\t Grade  is = > " << grade;
}