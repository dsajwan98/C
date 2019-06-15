// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_12.CPP
//This program can add, subtract, multiply and divide
// two complex numbers
#include <iostream.h>
#include <conio.h>
struct complex
{
	float real, imag;
};
complex num1, num2;
void main()
{
	clrscr();
	void total(complex num1, complex num2);
	void difference(complex num1, complex num2);
	void multiply(complex num1, complex num2);
	void division(complex num1, complex num2);
	cout << "\nEnter the real part of first complex number -> ";
	cin >> num1.real;
	cout << "\nEnter the imaginary part of first number -> ";
	cin >> num1.imag;
	cout << "\nEnter the real part of second complex number -> ";
	cin >> num2.real;
	cout << "\nEnter the imaginary part of second number -> ";
	cin >> num2.imag;
	total(num1, num2);
	difference(num1, num2);
	multiply(num1, num2);
	division(num1, num2);
}
// Function to add two numbers
void total(complex num1, complex num2)
{
	complex sum;
	sum.real = num1.real + num2.real;
	sum.imag = num1.imag + num2.imag;
	cout << "\nSum of two real numbers are =   " << sum.real << " imaginary is " << sum.imag;
}
// Function to find difference of two numbers
void difference(complex num1, complex num2)
{
	complex sub;
	sub.real = num1.real - num2.real;
	sub.imag = num1.imag - num2.imag;
	cout << "\nSubtraction  of two real numbers are = " << sub.real  << " imaginary is " << sub.imag;
}
// Function to multiply two numbers
void multiply(complex num1, complex num2)
{
	complex  prod;
	prod.real = num1.real*num2.real - num1.imag*num2.imag;
	prod.imag = num1.real*num2.imag + num1.imag*num2.real;
	cout << "\nProduct of two real numbers are =  " << prod.real  << " imaginary is " << prod.imag;
}
// Function to divide two numbers
void division(complex num1, complex num2)
{
	complex div;
	float t;
	t = num1.real*num2.real + num1.imag*num2.imag;
	div.real = (num1.real*num2.real+num1.imag*num2.imag)/t;
	div.imag = (num1.imag*num2.real-num1.real*num2.imag)/t;
	cout << "\nDivision of two real numbers are =  " << div.real << " imaginary is " << div.imag;
}