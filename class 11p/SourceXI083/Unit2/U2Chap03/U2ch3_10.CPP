// Filename: \\SourceXI083\Unit2\U2Chap03\U2ch3_10.CPP
// Example of manipulator operators endl and setw.
#include <iostream.h>
#include <iomanip.h>
int main()
{
	long pop1 = 12345678;
	long pop2 = 234555;
	long pop3 = 4323;
	cout << setw(10) << "Countries" << setw(12) << "Population" << endl
		<< setw(10) << "China" << setw(12) << pop1 << endl
		<< setw(10) << "India" << setw(12) <<pop2 << endl
		<< setw(10) << "America" << setw(12) <<pop3 << endl;
	return 0;
}
