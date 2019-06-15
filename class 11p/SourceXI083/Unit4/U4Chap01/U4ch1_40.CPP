// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_40.CPP
#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int i = 0, ua = 0, ub = 0, uc = 0, fail = 0;
	while (i <= 5)
	{
		switch (i++)
		{
			case 1 : ++ua;
			case 2 : ++ub;
			case 3 :
			case 4 : ++uc;
			default : ++fail;
		}
	}
	cout << "ua = ," << ua << ", ub = " << ub << ", uc = " << uc << ", fail" << fail;
}