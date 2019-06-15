// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_05.CPP
// Structure input with employees data passed to functions.
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
void emp_print(Employee empinf[]); //Function prototype for passing array
void main()
{
	int i;
	clrscr();
	Employee emp[3];  // Declaring array of structure
	for (i = 0; i <= 2; i++)
	{
		// Get employee data
		fflush(stdin);  // Clears input buffer for next input
		cout << "Enter employee code ";
		cin >> emp[i].empcode;
		cout << "Enter employee name ";
		gets(emp[i].empname);
		cout << "Enter employee designation ";
		gets(emp[i].empdesig);
		cout << "Enter employee salary ";
		cin >> emp[i].empsalary;
	}
	emp_print(emp);	// Calling array of structure function
	for (i = 0; i <= 2; i++)
	{
		cout << "\nEmployee #" << i+1<< " :\n";
		cout << "\nEmployee code : " << emp[i].empcode;
		cout << "\nEmployee name : " << emp[i].empname;
		cout << "\nEmployee designation : " << emp[i].empdesig;
		cout << "\nEmployee salary : " << emp[i].empsalary;
	}
}
//Function prototype for passing array
void emp_print(Employee empinf[])
{
	int i;
	cout << "Here is the employee information : \n";
	for (i = 0; i <= 2; i++)
	{
		cout << "\nEmployee #" << i+1 << " :\n";
		cout << "\nEmployee code : " << empinf[i].empcode;
		cout << "\nEmployee name : " << empinf[i].empname;
		cout << "\nEmployee designation : " << empinf[i].empdesig;
		cout << "\nEmployee salary : " << empinf[i].empsalary;
	}
}
