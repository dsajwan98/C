// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_16.CPP
// Demonstration of loop with a monthly cheque total
// Execution will be terminated when the entry will be 0.
#include <iostream.h>
main()
{
	float cheque_amt;		// Cheque amount
	double tot_cheque = 0.0;	// Initial total cheque value
	cout << "Enter First cheque ";
	cin >> cheque_amt;
	while (cheque_amt != 0.0)
	{
		tot_cheque = tot_cheque + cheque_amt;
		cout << "Enter next cheque ";
		cin >> cheque_amt;
	}		// Loop continues till the cheque_amt becomes zero (0)
	cout << "The monthly total cheque amount is " << tot_cheque;
	return 0;
}
