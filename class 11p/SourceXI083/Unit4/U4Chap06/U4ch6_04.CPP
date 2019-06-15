// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_04.CPP
// Demonstrating input/output of string data
// Input data will be terminated by Enter key.
#include <iostream.h>
void main()
{
	char name[25]; // Declaring a character array
	cout << "\nEnter your name : ";
	cin.getline(name, 25);
	cout << "\nYou enter your name as : \n";
	cout << name;
}
