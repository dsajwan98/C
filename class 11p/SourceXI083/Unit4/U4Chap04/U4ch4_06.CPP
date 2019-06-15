// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_06.CPP
// Skeleton of a Student’s report program
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
void adm_report(void)
{
	//	;
	//	Admission report code goes here
	cout << "You are in admission block\n";
	return;
}
void lib_report(void)
{
	//	;
	//	Library report code goes here
	cout << "You are in library block\n";
	return;
}
void com_report()
{
	//	;
	//	Computer report code goes here
	cout << "You are in computer department block\n";
	return;
}
main()
{
	int choice;
	clrscr();
	do
	{
		cout << "Choose your choice from the following list \n";
		cout << "\t1.	Admission\n";
		cout << "\t2.	Library\n";
		cout << "\t3.	Computer\n";
		cout << "What is your choice? ";
		cin >> choice;
		switch (choice)
		{
			case 1:
				adm_report();	// Call admission function
				break;
			case 2:
				lib_report();	// Call library function
				break;
			case 3:
				com_report();	// Call computer function
				break;
			default:
				cout << "Invalid choice";
		}
		getch();
	} while ((choice >= 1) && (choice <= 3));	// Ensure 1, 2, or 3
	return 0;
}