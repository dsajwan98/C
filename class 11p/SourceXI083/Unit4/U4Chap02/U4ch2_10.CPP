// Filename: \\SourceXI083\Unit4\U4Chap02\U4ch2_10.CPP
// Demonstration for getline function with terminating character.
#include <iostream.h>
main()
{
	char line[20];
	cout << "Enter a line terminated by . (dot) : ";
	cin.getline(line, 20, '.');
	cout << line;
	return 0;
}
