// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_28.CPP
// Function accept a string and search for a sub-string.
#include <iostream.h>
#include <stdio.h>
int search(char str[30],char sub[10])
{
	int i = 0, j = 0, k, flag, pos;
	while(str[i] != '\0')
	{
		flag = 0;
		j=0;
		if (str[i] == sub[j])
		{
			pos = i;
			j++;
			k = i;
			k++;
			while(sub[j]!='\0')
			{
				if(str[k] == sub[j])
				{
					j++;
					k++;
					flag = 1;
				}
				else {
					flag=0;
					break;
				}
			}
		}
		if (flag == 1) break;
			i++;
	}
	if (flag == 1)
		return ++pos;
	else
		return -1;
}
void main()
{
	char strn[30], sstrn[10];
	int flag = 0;
	cout << "Enter the main string : ";
	gets(strn);
	cout << "Enter the search string : ";
	gets(sstrn);
	flag = search(strn, sstrn);
	if (flag == -1)
		cout << "String does not found";
	else
		cout << "String found at : " << flag << "th position";
}


