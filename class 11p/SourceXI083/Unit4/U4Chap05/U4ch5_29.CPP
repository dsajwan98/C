// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_29.CPP
// Function to count number of words in a string

#include <iostream.h>
#include <stdio.h>

int count_word()
{
	char str[50];
	int i;
	int count =1;
	cout << "\n\t Enter the string ";
	gets(str);
	while(str[i] != '\0')
	{
		if ((str[i] == ' ') && (str[i + 1] != ' '))
			count++;
			i++;
	}
	return count;
}
void main()
{
	int ctr = 0;
	ctr = count_word();
	cout << "Total words is : " << ctr;
}
