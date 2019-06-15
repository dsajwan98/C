// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_07.CPP
// Demonstration of sorting an array using bubble sort method.
#include <iostream.h>
#include<conio.h>
main()
{
	clrscr();
	int item[100];
	int num, i, j, temp;
	cout << "How many numbers you want to sort? ";
	cin >> num;
	cout << "Enter the element into array :\n";
	for (i = 0; i < num; i++)
		cin >> item[i];
	for (i = 0; i < num-1; i++)
		for (j = i + 1; j < num; j++)
			if (item[i] > item[j])
			{
				temp = item[i];
				item[i] = item[j];
				item[j] = temp;
			}
	cout << "The sorted elements are :\n";
	for (i = 0; i < num; i++)
		cout << item[i] << "\n";
	return 0;
}