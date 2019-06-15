// Filename: \\SourceXI083\Unit4\U4Chap02\U4ch2_01.CPP
// Prints the student name on the printer
#include <fstream.h>
main()
{
	char fname[20];
	char lname[20];
	cout << "Enter your first name : ";
	cin >> fname;
	cout << "Enter your last name : ";
	cin >> lname;
	// Send name to the printer
	ofstream prn("PRN"); 	// prn is the printer device name
	prn << "Your birth name is ";
	prn << fname << ", " << lname << endl;
	return 0;
}
