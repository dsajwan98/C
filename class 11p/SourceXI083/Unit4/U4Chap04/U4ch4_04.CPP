// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_04.CPP
// Demonstration of function declaration
#include <iostream.h>
void new_line(); // Function prototype
main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		cout << i;
		new_line(); 	// Calling function new_line()
	}
	return 0;
}
// Called function
void new_line()
{
	cout << "\n";		// Display output in a new line
}