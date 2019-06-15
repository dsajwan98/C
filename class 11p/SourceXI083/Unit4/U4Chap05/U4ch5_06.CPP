// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_06.CPP
// Search an element and its position in an array
#include <iostream.h>
main()
{
	int num[10], i, pos = 0, value;
	cout << "Please enter the Values ... ";
	for (i = 0; i < 10; i++)
	{
		cin >> num[i];
	}
	cout << "Enter the search value ";
	cin >> value;
	for (i = 0; i < 10; i++)
	{
		if (value == num[i])
		{
			pos = i+1;
		}
	}
	cout << "The search value " << value << "’s position is " << pos;
	return 0;
}
