// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_12.CPP
// Program to print mathematical table
#include<iostream.h>
#include<dos.h>
#include<conio.h>
main()
{
	int i, j, k;
	for( i = 0; i <= 10; i++)
	{
		clrscr();
		for (j = 0; j <= 10; j++)
		{
			k = i * j;
			cout << i << " * " << j << " = " << k << "\n";
		}
		delay(2000);
	}
	return 0;
}
