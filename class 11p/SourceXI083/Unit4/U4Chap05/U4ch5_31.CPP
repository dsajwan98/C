// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_30.CPP
// This function search an element in an array using binary search

#include <iostream.h>
#include <conio.h>

int binary(float P[100], float data, int n)
{
	 int i, flag = 0, first = 0, last, pos = 1, mid;
	 last = n - 1;
	 while ((first <= last) && (flag == 0))
	 {
		mid = (first + last) / 2;
		if (P[mid] == data)
		{
			pos = pos+mid;
			flag = 1;
		}
		else
		if (P[mid] < data)
		{
			first = mid + 1;
		}
		else
		{
			  last = mid - 1;
		}
	 }
	 if (flag == 1)
		 return(1);
	 else
		 return(0);
}
void main()
{
	clrscr();
	// Here arr is the array, sdata is the search data, n1 is the number of elements
	float arr[10], sdata, temp;
	int n1, i, j, nflag = 0;
	cout << "Enter the number of array elements : ";
	cin >> n1;
	cout << "Enter the array elements : \n";
	for (i = 0; i < n1; i++)
		cin >> arr[i];
	for (i = 0; i < n1-1; i++)
		for (j = i+1; j < n1; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	cout << "The sorted elements are : \n";
	for (i = 0; i < n1; i++)
		cout << arr[i] << endl;
	cout << endl;
	cout << "Enter the search element : ";
	cin >> sdata;
	nflag = binary(arr, sdata, n1);
	if (nflag == 1)
		cout << "The search element found!!!";
	else
		cout << "The search element does not found!!!";
}



