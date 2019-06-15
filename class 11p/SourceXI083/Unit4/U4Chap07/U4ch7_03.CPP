// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_03.CPP
// Structure input with employees data by array of structure.
#include <iostream.h>
#include <string.h>
#include <stdio.h>  	// Declares for gets function
#include <conio.h>
// Declaring structure at here
struct Employee
{
	int empcode;
	char empname[20];
	char empdesig[15];
	float empsalary;
} ;
void main()
{
	int i;
	clrscr();
	Employee emp[20]; // Define 1 local structure variables with 20 employees information
	for (i = 1; i <= 20; i++)
	{
		// Get into employee information
		cout << "Enter employee code ";
		cin >> emp[i].empcode;
		cout << "Enter employee name ";
		gets(emp[i].empname);
		cout << "Enter employee designation ";
		gets(emp[i].empdesig);
		cout << "Enter employee salary ";
		cin >> emp[i].empsalary;
	}
	// Printing the structure emp1 information to the screen
	cout << "Here is the employee information : \n";
	for (i = 1; i <= 20; i++)
	{
		cout << "\nEmployee code : " << emp[i].empcode;
		cout << "\nEmployee name : " << emp[i].empname;
		cout << "\nEmployee designation : " << emp[i].empdesig;
		cout << "\nEmployee salary : " << emp[i].empsalary;
	}
}
