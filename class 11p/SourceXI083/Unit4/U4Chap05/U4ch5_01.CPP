// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_01.CPP
// Demonstration of a sample program to print initialized array elements
#include <iostream.h>
#include <conio.h>
main()
{
	clrscr();
	int num[10] = {18, 0, 11, -14, 17, 22, 14, 10, 19, 25};
	for (int i = 0; i < 10; i++)
	{
		cout << "The element at " << i << " position is : " << num[i] << endl;
	}
	return 0;
}
