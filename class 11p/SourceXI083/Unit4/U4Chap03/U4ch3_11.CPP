// Filename: \\SourceXI083\Unit4\U4Chap03\U4ch3_11.CPP
// Demonstration for the use of atoi, atol, itoa and ltoa functions
#include <iostream.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
void main()
{
	clrscr();
	int n1; // To store an integer value
	long int n2; // To store a long integer value
	int num = 12345;
	long int num1 = 987654321;
	char str1[] = "12345.67";
	char str2[] = "98765432";
	char string1[25], strn[25];;
	n1 = atoi(str1) + 100; // adding 100 after converting
	n2 = atol(str2) + 2000; // adding 2000 after converting
	itoa(num, string1, 10); // Convert an integer into string
	ltoa(num1, strn, 10); // Convert a long integer into string
	cout << "String = " << str1 << " and new integer is : " << n1 << endl;
	cout << "String = " << str2 << " and new integer is : " << n2 << endl;
	cout << "Integer = " << num << " and string is : " << string1 << endl;
	cout << "Long Integer = " << num1 << " and string is : " << strn << endl;
}