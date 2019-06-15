// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_07.CPP
// Calculates the average of three input values.
#include <iostream.h>
#include <iomanip.h>
float calc_av(int num1, int num2, int num3)
{
	float local_avg = 0.0;	// Holds average for these numbers
	local_avg = (float)(num1 + num2 + num3) / 3;
	return (local_avg); // Function returning an float value
}
main()
{
	int num1, num2, num3;
	float avg = 0.0;	// Will hold the return value
	cout << "Please type three numbers with space : ";
	cin >> num1 >> num2 >> num3;
	// Call the function, passing the numbers, and accept return value
	avg = calc_av(num1, num2, num3); // avg receives a float variable
	cout << "\nThe average is : " << setprecision(2) << avg << "\n";
	return 0;
}
