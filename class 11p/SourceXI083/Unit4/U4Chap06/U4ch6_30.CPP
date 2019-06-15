// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_30.CPP
// Program to count number of blanks, tags and new line in the given input.
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void main()
{
	char str[50];
	int i, blnk = 0, tabs = 0, nlines = 0;
	clrscr();
	printf("\n\tEnter any string -> ");
	gets(str);
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = tolower(str[i]);
		if (str[i] == ' ')
			blnk++;
		else if (str[i] == '\t')
			tabs++;
		else if (str[i] == '\n')
			nlines++;
		i++;
	}
	printf("\n\tNumber of blanks are : %d", blnk);
	printf("\n\tNumber of tabs are : %d", tabs);
	printf("\n\tNumber of new lines are : %d", nlines);
}