// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_05.CPP
// This function illustrates function calls
#include <iostream.h>
void next_fun(void)	// Second function parentheses always required
{
	cout << "Inside next_fun()\n";	// No variables defined in function
					// control is now returned to main()
	return;
}
void third_fun(void)	  //	Last function called in program
{
	cout << "Inside third_fun() \n";
	return;	// Always return from all functions
}
main()		// main() always the first C++ function executed
{
	cout << "First function called main() \n";
	next_fun();		// Second function is called here
	third_fun();		// Third function is called here
	cout << "main() is completed\n";	// All control returns here
	return 0;		// Control is returned to MS-DOS
	// This brace concludes main()
}
