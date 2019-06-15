// Filename: \\SourceXI083\Unit4\U4Chap01\U4ch1_05.CPP
// Program to assign grade according to some initial condition
#include<iostream.h>
main()
{
	int   hardness, tensile, grade;
	float	carbon;
	cout << "\n\t Enter the value of carbon ";
	cin >> carbon;
	cout << "\n\t Enter the value of hardness ";
	cin >> hardness;
	cout << "\n\t Enter the value of tensile ";
	cin >> tensile;
	if ((hardness >= 50) && (carbon <= 0.7) && (tensile > 5600))
		grade =	 10;
	else
	if ((hardness >= 50 ) && (carbon <= 0.7))
		grade = 9;
	else
	if ((carbon <= 0.7 ) && (tensile >= 5600))
		grade = 8;
	else
	if ((hardness >= 50 ) && (tensile >= 5600))
		grade = 7;
	else
	if ((hardness >= 50 ) || (carbon <= 0.7) || (tensile >= 5600))
		grade = 6;
	else
		grade = 5;
	cout << "\n\t The grade assign is : " << grade;
}
