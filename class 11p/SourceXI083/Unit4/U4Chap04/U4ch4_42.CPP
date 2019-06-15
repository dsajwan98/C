// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_42.CPP
// Function to swap A and B without using third variable

#include <iostream.h>
#include <conio.h>
void SWAP(int A, int B)
{
	A = A + B;
	B = A - B;
	A = A - B;
	cout << "\n\tAfter swapping a is - > " << A;
	cout << "\n\tAfter swapping b is - > " << B;
	getch();
}
void main()
{
	int a, b;
	clrscr();
	cout << "Enter the value of A : ";
	cin >> a;
	cout << "Enter the value of B : ";
	cin >> b;
	SWAP(a, b);
}

