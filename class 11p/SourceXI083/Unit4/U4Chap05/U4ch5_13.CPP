// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_13.CPP
// Demonstration of multidimensional array with input values
#include <iostream.h>
main()
{
	int num[4][4];
	int i, j;
	// Input data into array
	cout << "Enter the num values : \n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			cin >> num[i][j];
	}
	// Displaying num values
	cout << "\nThe array is : \n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			cout << num[i][j] << "	";
		cout << "\n";
	}
	return 0;
}
