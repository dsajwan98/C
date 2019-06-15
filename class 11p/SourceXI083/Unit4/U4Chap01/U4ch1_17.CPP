// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_17.CPP
// Program to print the alphabets.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i;
	char str = 65;
	i = 65;
	while (i <= 90)
	{
		while (str <= i)
		{
			cout << str;
			str++;
		}
		cout << "\n";
		i++;
		str = 65;
	}
	getch();
}
