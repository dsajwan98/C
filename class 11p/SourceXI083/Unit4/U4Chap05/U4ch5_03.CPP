// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_03.CPP
// Demonstration of one-dimensional array
#include <iostream.h>
main()
{
	float per[20];
	int i;
	cout << "Enter student's percentage ";
	for (i = 0; i < 20; i++)
	{
		cin >> per[i];
	}
	// increase by 15 marks to each student
	for (i = 0; i < 20; i++)
	{
		per[i] = per[i] + 15;
	}
	// Display the increased percentage of 20 students
	for (i = 0; i < 20; i++)
	{
		cout << per[i] << endl;
	}
	return 0;
}
