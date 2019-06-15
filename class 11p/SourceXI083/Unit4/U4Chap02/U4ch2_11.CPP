// Filename: \\SourceXI083\Unit4\U4Chap02\U4ch2_11.CPP
/* Program to find number of blanks, tabs and newline in the given input */
#include<iostream.h>
#include<stdio.h>
void main()
{
	int nb, nt, nl;
	char c;
	nb = nt = nl =0;
	while (( c = getchar()) != EOF )
	{
		if ( c == ' ')
			 ++nb;
		if ( c == '\t')
			++nt;
		if ( c == '\n')
			++nl;
	}
	cout<<"\n\t Number of blanks space => "<<nb;
	cout<<"\n\t Number of tabs         => "<<nt;
	cout<<"\n\t Number of newline      => "<<nb;
}