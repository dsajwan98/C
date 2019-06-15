// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_26.CPP
// Program to illustrate static variable
#include<iostream.h>
void fun();
main()
{
	int i;
	for (i = 0 ; i < 10; i++)
		fun();
	return 0;
}
void fun()
{
	static  int  j = 0;
	j ++;
	cout << " j is  " << j << "\n";
}
