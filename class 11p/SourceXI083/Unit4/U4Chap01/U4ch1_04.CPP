// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_04.CPP
#include <iostream.h>
main()
{
	int fn, sn, tn;	// Declare three different variable
	cout << "What is the first number? ";
	cin >> fn;
	cout << "What is the second number? ";
	cin >> sn;
	cout << "What is the third number? ";
	cin >> tn;
	if ((fn > sn) && (fn > tn))
	{
		cout << "The bigger value is " << fn;
	}
	else
		if ((sn > tn) && (sn > fn))
		{
			cout << "The bigger value is " << sn;
		}
		else
		{
			cout << "The bigger value is " << sn;
		}
	return 0;
}
