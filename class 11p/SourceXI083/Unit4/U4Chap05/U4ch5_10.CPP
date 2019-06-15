// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_10.CPP
// Demonstration of exchange sort of ten numbers.
#include <iostream.h>
void sort(int a[10], int);
void sort(int a[10], int elements)
{
	int i = 0, j, temp;
	while (i < (elements - 1))
	{
		j = i + 1;
		while (j < elements)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			j++;
		}
		i++;
	}
}
void main()
{
	int numbers[] = {10, 9, 8, 23, 19, 11, 2, 7, 1, 13, 12};
	int loop;
	cout << "\nBefore the sort, the array was : \n";
	for (loop = 0; loop < 11; loop++)
		cout << numbers[loop] <<  "   ";
	sort(numbers, 11);
	cout << "\nAfter the sort, the array is :  \n";
	for (loop = 0; loop < 11; loop++)
		cout << numbers[loop] << "   ";
}