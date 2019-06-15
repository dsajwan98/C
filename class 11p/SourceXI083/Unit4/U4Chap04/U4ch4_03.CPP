// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_03.CPP
// Converts the user's Celsius to Fahrenheit
#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
float convert(float c_type); // Converts prototype
int main(void);
int main()
{
	clrscr();
	float c_temp;	// Holds user's Celsius temperature
	float f_temp;	// Holds converted temperature
	cout << "What is the Celsius temperature to convert ? ";
	cin >> c_temp;
	f_temp = convert(c_temp);	  // Convert the temperature
	cout << "The Fahrenheit equivalent is : " << setprecision(2) << f_temp << "\n";
	return 0;
}
float convert(float c_temp)	// Return var and parameter are both float
{
	float f_temp;
	f_temp = c_temp * (9.0 / 5.0) + 32.0;
	return (f_temp);
}
