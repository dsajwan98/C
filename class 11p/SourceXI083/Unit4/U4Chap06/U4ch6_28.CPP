// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_28.CPP
// Program to calculate the total salary of n employee and find who gets highest salary
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	int empno[50], i, n;
	float basic[50], da[50], hra[50], total[50], max, no;
	char a[50][20];
	cout << "\n\t Enter how many employee ";
	cin >> n;
	cout << "\n\t Enter the data of employee ";
	for (i = 0;i < n; i++)
	{
		cout << "\n\t Enter name ";
		cin >> a[i];
		cout << "\n\t Enter number ";
		cin >> empno[i];
		cout << "\n\t Enter basic salary ";
		cin >> basic[i];
		da[i] = basic[i] * 20 /100;
		hra[i] = basic[i] * 30 /100;
		total[i] = basic[i] + da[i] + hra[i];
	}
	max = total[0];
	for (i = 1; i < n; i++)
	{
		if ( max < total[i])
		{
			max = total[i];
			no = empno[i];
		}
	}
	clrscr();
	cout << " NAME		 EMP NO.	BASIC               TOTAL\n";
	cout << "------------------------------------------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << setw(2) << a[i] << setw(17) << empno[i] << setw(17) << basic[i]
			<< setw(17) << total[i] << endl;
	}
	cout << "\n\t Highest Salary : " << max;
	cout << "\n\t Employee number is: " << no;
}
