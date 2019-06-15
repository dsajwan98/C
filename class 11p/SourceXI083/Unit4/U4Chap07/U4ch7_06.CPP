// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_06.CPP
// Structure for copy with the employee structure
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
	Employee emp1 = {100, "Ms. Suhata", "PGT Computer", 12500};   // Initialized
	Employee emp2, emp3; // Not initialized
	emp2 = emp1; 	 // Copy each member of emp1 to emp2 and emp3
	emp3 = emp1;	
	// Printing the structure CD1 information to the screen
	cout << "Here is the employee information : \n";
	for (i = 1; i <= 32; i++)
		cout << "=";
	cout << "\nEmployee  #2:\n";
	for (i = 1; i <= 32; i++)
		cout << "=";
	cout << "\nEmployee code : " << emp2.empcode;
	cout << "\nEmployee name : " << emp2.empname;
	cout << "\nEmployee designation : " << emp2.empdesig;
	cout << "\nEmployee salary : " << emp2.empsalary;
	cout << endl;
	for (i = 1; i <= 32; i++)
		cout << "=";
	cout << "\nEmployee  #3:\n";
	for (i = 1; i <= 32; i++)
		cout << "=";
	cout << "\nEmployee code : " << emp3.empcode;
	cout << "\nEmployee name : " << emp3.empname;
	cout << "\nEmployee designation : " << emp3.empdesig;
	cout << "\nEmployee salary : " << emp3.empsalary;
}
