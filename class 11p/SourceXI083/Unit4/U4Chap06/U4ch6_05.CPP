// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_05.CPP
// Demonstration of a character array.
#include <iostream.h>
#include <conio.h>
main()
{
	clrscr();
	char name[5][20] = { "Pankaj",
		"Sudhir",
		"Vinod",
		"Ramesh",
		"Sneha" };
	int i;
	// Steps to display the five names
	cout << "Names are ... \n";
	for (i = 0; i < 5; i++)
	{
		cout << "Name "<< i+1 << " is : " << name[i] << endl;
	}
	return 0;
}
