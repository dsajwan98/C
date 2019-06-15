// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_27.CPP
// Program to print the string in alphabetical order
#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	char a[20];
	int i, j, k;
	clrscr();
	cout << "\n\t";
	cout << "\n\tEnter the string ";
	gets(a);
	cout << "\n\tThe string in alphabetical order is ";
	for (i = 0; a[i] != '\0'; i++)      //SORTING IN ALPHABETICAL ORDER
	{
		j = i;
		for (k = i+1; a[k] != '\0'; k++)
		{
			if (a[k] < a[j])
				j = k;
		}
		k = a[i];
		a[i] = a[j];
		a[j] = char(k);
		cout << a[i];
	}
	getch();
}