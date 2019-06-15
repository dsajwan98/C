// Filename: \\SourceXI083\Unit4\U4Chap02\U4ch2_04.CPP
// Demonstrating get() and put() function
#include <iostream.h>
#include <conio.h>
void main( )
{
	int count = 0;
	char ch;
	clrscr();	// clears screen
	cout << "Enter any text " << endl;
	ch = cin.get();	// input character
	while (ch != '\n')
	{
		cout.put(ch); // output character
		count++; //increment character count
		ch = cin.get(); // input character
	}
	// output character count
	cout << endl << "Number of characters - " << count << endl;
}
