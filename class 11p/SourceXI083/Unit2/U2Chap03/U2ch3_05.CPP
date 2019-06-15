// Filename: \\SourceXI083\Unit2\U2Chap03\U2ch3_05.CPP
// Program to find the maximum between two numbers
#include<iostream.h>
main()
{
	int a, b, max;
	cout<<"\n\t Enter the value of a : ";
	cin>>a;
	cout<<"\n\t Enter the value of b : ";
	cin>>b;
	max = (a>b)? a : b;
	cout<<"\n\t Maximum number is "<<max;
	return 0;
}
