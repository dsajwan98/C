// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_08.CPP
// Program to find minimum and maximum value of a given array
#include <iostream.h>
#include <conio.h>
int main()
{
	int num[100], min, max, i, size;
	clrscr();
	cout << "Enter the size of your array ... ";
	cin >> size;
	cout << "Please enter the Values ... \n";
	for (i = 0; i < size; i++)
		cin >> num[i];
	max = num[0];	// Initialize the default value to max and min
	min = num[0];
	for (i = 0; i < size; i++)
	{
		if (num[i] > max)
			max = num[i];
		if (num[i] < min)
			min = num[i];
	}
	cout << "The maximum value in the list is " << max << endl;
	cout << "The minimum value in the list is " << min << endl;
	return 0;
}
