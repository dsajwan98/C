// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_26.CPP
// Program to check whether the string is palindrome or not.
#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	char str[20];
	int i, j;
	cout << "\n\t";
	cout << "\n\tEnter the string ";
	gets(str);              //TO READ THE STRING
	char flag = 'y';
	cout << "\n\tThe entered string ";
	for (i = 0; str[i] != '\0'; i++)
		cout << str[i];
	for (j = 0, i -= 1; i > j; j++, i--)
	{
		if (str[i] != str[j])       //CHECKING FOR PALINDROME
		{
			flag = 'n';
			break;
		}
	}
	if (flag == 'n')
		cout << " is not a palindrome ";
	else
		cout << " is a palindrome ";
	getch();
}