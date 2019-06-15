// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_24.CPP
#include<iostream.h>
#include<conio.h>
#include <stdio.h>
#include <iomanip.h>
#define MAX 50
void main()
{
	char name[MAX][25], author[MAX][25];
	int bookno[MAX], price[MAX], no_of_copy[MAX], total[MAX], n, i;
	cout << "\n\t Enter how many books =>  ";
	cin >> n;
	cout << "\n Enter the particulars of books ";
	for (i = 0; i < n; i++)
	{
		cout << "\n\t Enter book number  => ";
		cin >> bookno[i];
		cout << "\n\t Enter name of book => ";
		gets(name[i]);
		cout << "\n\t Enter price of book => ";
		cin >> price[i];
		cout << "\n\t Enter author of book  => ";
		gets(author[i]);
		cout << "\n\t Enter number of copies sold => ";
		cin >> no_of_copy[i];
		total[i] = no_of_copy[i] * price[i];
	}
	clrscr();
	cout << "\n\n\t\t    PARTICULARS OF BOOKS";
	cout << "\n   Book No       Name        Author      Total Amount\n";
	for (i = 0; i < n; i++)
	{
		cout << setw(7) << bookno[i] << setw(12) << name[i] << setw(12) << author[i]
			<<setw(15) << total[i] << endl;
	}
}