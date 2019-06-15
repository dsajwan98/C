// Filename: \\SourceXI083\Unit2\U2Chap03\U2ch3_02.CPP
// Program to convert time given in minute into
//hours and remaining minutes
#include <iostream.h>
main()
{
	int t, hour, min;
	cout << " \n\t Enter the time in minutes => ";
	cin >> t;
	hour = t / 60;
	min = t % 60;
	cout << " Hours are " << hour;
	cout << " Minutes are " << min;
	return 0;
}
