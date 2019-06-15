// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_15.CPP
// Demonstration for the use of strcmpi(s1, s2) function
// using a password method
#include <iostream.h>
#include <string.h>
void main()
{
	char mpass[7] = "Master", npass[7];
	int ctr=0;
	cout << "Enter your password name :";
	cin >> npass;
	ctr = strcmpi(mpass, npass);
	if (ctr == 0)
		cout << "Correct password!!! ";
	else
		cout << "Wrong password!!! ";
}
