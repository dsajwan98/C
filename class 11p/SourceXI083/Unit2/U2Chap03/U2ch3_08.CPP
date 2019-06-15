// Filename: \\SourceXI083\Unit2\U2Chap03\U2ch3_08.CPP
// Calculate interest on a loan using type casting
#include <iostream.h>
#include <iomanip.h>
main()
{
	int days = 40;	// Days since loan origination
	float principal = 3000.00;	// Original loan amount
	float interest_rate = 0.15;	// Annual interest rate
	float daily_interest;	// Daily interest rate
	// Typecast days to float
	daily_interest = interest_rate / (float)365;
	// Days is an interest, convert it to float
	daily_interest = principal * daily_interest * (float)days;
	principal += daily_interest;	// Update the principal with interest
	cout << "The balance you owe is "
		<< setiosflags(ios::fixed) << setprecision(2)
		<< principal;
	return 0;
}
