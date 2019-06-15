// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_03.CPP
// Demonstrating input/output of string data
// Input data will be terminated by Enter key.
#include <iostream.h>
void main()
{
	char name[25]; // Declaring a character array
	int i, n = 0;
	cout << "\nEnter your name : ";
	while ((name[n] = cin.get()) != '\n')
		n++;
	name[n] = '\0';
	cout << "\nYour entered your name as : \n";
	for (i = 0; i < n; i++)
		cout.put(name[i]);
}
