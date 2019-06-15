// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_43.CPP
// Function to convert the inch to feet

#include <conio.h>
#include <iostream.h>
void feet_inch(int inch)
{
	float feet;
	feet = inch / 12;
	cout << "The person's height in inch is " << inch << endl;
	cout << "The person's height in feet is " << feet;
}
void main()
{
	int inc;
	cout << "Enter persons height in inch : ";
	cin >> inc;
	feet_inch(inc);
}

