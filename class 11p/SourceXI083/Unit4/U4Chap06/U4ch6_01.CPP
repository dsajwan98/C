// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_01.CPP
// Program to demonstrate printing of string
#include <iostream.h>
void main()
{
	char state[ ] = "Delhi"; // String array
	int i = 0;
	while (i < 5)
	{
		cout << "state[" << i << "] = " << state[i] << "\n";
		i++;
	}
}
