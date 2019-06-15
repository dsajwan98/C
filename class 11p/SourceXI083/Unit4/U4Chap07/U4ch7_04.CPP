// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_04.CPP
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
// The parameter given below emp_pass as a struct type of employee returns a struct type object
struct Employee struct_input(Employee emp_pass)
{
	// Get employee's data
	fflush(stdin);	// Clears input buffer for next input
	cout << "Enter employee code ";
	cin >> emp_pass.empcode;
	cout << "Enter employee name ";
	gets(emp_pass.empname);
	cout << "Enter employee designation ";
	gets(emp_pass.empdesig);
	cout << "Enter employee salary ";
	cin >> emp_pass.empsalary;
	return emp_pass;
}
// Function emp_print for printing the employees information
void emp_print(Employee emp_pass)
{
	for (int i = 1; i <= 32; i++)
		cout << "=";
	cout << "\nEmployee code : " << emp_pass.empcode;
	cout << "\nEmployee name : " << emp_pass.empname;
	cout << "\nEmployee designation : " << emp_pass.empdesig;
	cout << "\nEmployee salary : " << emp_pass.empsalary;
}

void main()
{
	int i;
	clrscr();
	Employee emp1, emp2;  // Define 2 local structure variables
	// Call function to input employee information
	// emp1 is passed by copy, so it must be returned for main() to recognize it.
	emp1 = struct_input(emp1);
	emp2 = struct_input(emp2);
	// Call print function for employee information
	cout << "Here is the employee information : \n";
	for (i = 1; i <= 32; i++)
		cout << "=";
	cout << "\nEmployee  #1:\n";
	emp_print(emp1);	// prints the first employee information
	cout << endl;
	for (i = 1; i <= 32; i++)
		cout << "=";
	cout << "\nEmployee #2:\n";
	emp_print(emp2); // prints the second employee information
}
