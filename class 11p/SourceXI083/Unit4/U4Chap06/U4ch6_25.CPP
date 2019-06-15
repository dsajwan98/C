// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_25.CPP
#include<iostream.h>
#include <stdio.h>
void main()
{
	char string[50], string1[50];
	int i = 0, j, flag;
	cout << "\n\t Enter first string ";
	gets(string);
	cout << "\n\t Enter second string ";
	gets(string1);
	j = 0;
	flag = 0;
	while (string[i] != '\0')
		i++;
	while (string1[j] != '\0')
		j++;
	i--;
	j--;
	if (i != j)
		flag = 1;
	else
	{
		i = 0;
		j = 0;
		while ((string[i] != '\0') && (string1[j] != '\0'))
		{
			if (string[i] != string1[j])
			{
				flag =1;
				break;
			}
			i++;
			j++;
		}
	}
	if (flag ==1)
		cout << "\n\t Strings are not equal";
	else
		cout << "\n\t Strings are equal";
}