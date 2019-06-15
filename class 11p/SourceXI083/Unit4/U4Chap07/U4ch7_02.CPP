// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_02.CPP
// Structure for initialization with the employee information.
#include <iostream.h>
#include <string.h>
#include <stdio.h>  	// Declares for gets function
#include <conio.h>
void main()
{
	// Declaring structure at here
	struct Employee
	{
		int empcode;
		char empname[20];
		char empdesig[15];
		float empsalary;
	} emp1, emp2; // emp1 and emp2 are two structure variables
	clrscr();
	// Get two employee information
	cout << "Enter employee code ";
	cin >> emp1.empcode;
	cout << "Enter employee name ";
	gets(emp1.empname);
	cout << "Enter employee designation ";
	gets(emp1.empdesig);
	cout << "Enter employee salary ";
	cin >> emp1.empsalary;
	fflush(stdin); 	// Clear input buffer for next input
	cout << "Enter employee code ";
	cin >> emp2.empcode;
	cout << "Enter employee name ";
	gets(emp2.empname);
	cout << "Enter employee designation ";
	gets(emp2.empdesig);
	cout << "Enter employee salary ";
	cin >> emp2.empsalary;
	// Printing the structure emp1 information to the screen
	cout << "Here is the employee information : \n";
	cout << "Emp  #1:\n";
	for (int i = 1; i <= 32; i++)
		cout << "=";
	cout << "\nEmployee code : " << emp1.empcode;
	cout << "\nEmployee name : " << emp1.empname;
	cout << "\nEmployee designation : " << emp1.empdesig;
	cout << "\nEmployee salary : " << emp1.empsalary;
	cout << "\nEmp  #1:\n";
	for (i = 1; i <= 32; i++)
		cout << "=";
	cout << "\nEmployee code : " << emp2.empcode;
	cout << "\nEmployee name : " << emp2.empname;
	cout << "\nEmployee designation : " << emp2.empdesig;
	cout << "\nEmployee salary : " << emp2.empsalary;
}

