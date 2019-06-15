// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_27.CPP
// Function to find the matching parenthesis

#include <iostream.h>
#include <stdio.h>
#include <conio.h>

int match_paren(char str[20])
{
	int i, j;
	cout << "\n\tThe entered string is ";
	for (i = 0; str[i] != '\0'; i++)
		cout << str[i];
	int stp = 0;	// Let starting parenthesis is 0
	int enp = 0;	// and ending parenthesis is also 0
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '(')
			stp = stp + 1;
		else
			if (str[i] == ')')
				enp = enp + 1;
	}
	if (stp == enp)
		return 1;
	else
		return 0;
}
void main()
{
	clrscr();
	char strn[20];
	int flag;
	cout << "Enter any string : ";
	gets(strn);
	flag = match_paren(strn);
	if (flag == 1)
		cout << "Parenthesis matched";
	else
		cout << "Wrong matched";
}
