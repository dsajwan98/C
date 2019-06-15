// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_32.CPP
// Program to print the message for season according to entered code
#include<iostream.h>
#include<conio.h>
main()
{
	char  code;
	clrscr();
	cout << "\n\t	Enter the code ";
	cin >> code;
	switch (code)
	{
		case 'd':	cout << "\n\tThe season is dry";
				break;
		case 'w':	cout << "\n\tThe season is winter";
				break;
		case 'r':	cout << "\n\tThe season is rainy";
				break;
		default:	cout << "\n\tWrong code";
	}
	return 0;
}