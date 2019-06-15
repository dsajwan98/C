// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_12.CPP
// Demonstration of multidimensional array
#include <iostream.h>
main()
{
	int array[4][4];
	int i, j;
	// Calculating the product of indices
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			array[i][j] = i * j;
	// Displaying the array in row, and column
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			cout << array[i][j] << "	";
		cout << "\n";
	}
	return 0;
}
