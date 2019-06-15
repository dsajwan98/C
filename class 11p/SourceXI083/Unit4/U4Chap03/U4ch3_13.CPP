// Filename: \\SourceXI083\Unit4\U4Chap03\U4ch3_13.CPP
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
main()
{
	char ch;
	clrscr();
	cout << "Enter the character ";
	cin >> ch;
	ch = tolower(ch);
	switch(ch)
	{
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :  cout << "It is a vowel";
			break;
		default :  cout << "It is not a vowel";
	}
}