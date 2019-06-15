// Filename: \\SourceXI083\Unit4\U4Chap02\U4ch2_02.CPP
// Introduces the program by using get() and put() function
#include <iostream.h>
main()
{
	char char_val;    	// Holds incoming initial
	char fname, lname;	// Holds converted first and last initials.
	cout << "Enter your first name initials : ";
	cin.get(char_val);
	fname = char_val;
	cin.get(char_val);	// Ignore new line
	cout << "Enter your second name initials : ";
	cin.get(char_val);
	lname = char_val;
	cin.get(char_val);	// Ignore new line
	cout << "Your name initials are : ";
	cout.put(fname);
	cout.put(lname);
	return 0;
}
