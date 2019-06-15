// Filename: \\SourceXI083\Unit4\U4Chap02\U4ch2_05.CPP
// Uses getch() and putch() for input and output
#include <iostream.h>
#include <conio.h>
main()
{
	int ctr;	// for loop counter
	char letters[5];	// Holds 5 input characters
	cout << "Enter any five letters ... \n";
	for (ctr = 0; ctr < 5; ctr++)
		letters[ctr] = getche();		// Add input to array
	// Printing the output by using putch()
	for (ctr = 0; ctr < 5; ctr++)
		putch(letters[ctr]);
	return 0;

}
