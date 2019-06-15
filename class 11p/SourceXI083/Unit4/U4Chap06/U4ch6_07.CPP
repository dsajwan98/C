// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_07.CPP
// Demonstrate to read a sequence of string in an array and print them
#include <iostream.h>
main()
{
	char name[5][25];
	int ctr = 0;
	cout << "Enter at most 5 names with at most 24 characters :\n";
	while (ctr<5)
	{
		cin.getline(name[ctr++], 25);
	}
	cout << "The names are : \n";
	for (int i = 0; i <ctr; i++)
		cout << "\t" << i << ". [" << name[i] << "]" << endl;
	return 0;
}
