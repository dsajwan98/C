// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_11.CPP
// Structure for initialization with the employee information.
#include <iostream.h>
#include <string.h>
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
	} emp1; // emp1 is the structure variable
	clrscr();
	int i;	// declares a temporary variable for under line
	// Initialize members here
	emp1.empcode = 100;
	strcpy(emp1.empname, "Mr. Santosh Rana");
	strcpy(emp1.empdesig, "Manager");
	emp1.empsalary = 8980.00;
	// Printing the structure variable emp1 information to the screen
	cout << "Here is the employee information : \n";
	for (i = 1; i <= 32; i++)
		cout << "=";
	cout << "\nEmployee code : " << emp1.empcode;
	cout << "\nEmployee name : " << emp1.empname;
	cout << "\nEmployee designation : " << emp1.empdesig;
	cout << "\nEmployee salary : " << emp1.empsalary;
}
