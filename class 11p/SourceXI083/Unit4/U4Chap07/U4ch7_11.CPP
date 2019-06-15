// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_11.CPP
// Program to display enumerated values symbolically
#include <iostream.h>
enum  colour {Red, green, blue, yellow};
void main()
{
	colour col;
	switch(col)
	{
		case 0 : cout << "\n Red ";
			break;
		case 1 : cout << "\n green "; 
			break;
		case 2 : cout << "\n blue ";
			break;
		case 3 : cout << "\n yellow ";
	}
}