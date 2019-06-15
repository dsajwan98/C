// Filename: \\SourceXI083\Unit4\U4Chap02\U4ch2_03.CPP
// Demonstrate the member function cin.get() input stream.
// Press Ctrl+Z to exit from the entry mode.
#include <iostream.h>
main()
{
	char opt;
	int ctr = 0;
	while (cin.get(opt))
		if (opt == 'e')
			++ctr;
	cout << ctr << "e's were counted.\n";
	return 0;
}