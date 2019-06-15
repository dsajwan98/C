// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_29.CPP
//Program to calculate sum and average of odd, even and natural numbers.
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
float n_sum(int last_n, int &sum) //Function to calculate sum of natural nos.
{
	int i;
	sum = 0;
	for (i = 1; i <= last_n; i++)
		sum += i;
		return (float(sum/(i - 1)));
}
float e_sum(int last_n, int &sum) //Function to calculate the sum of even nos.
{
	int i, k = 0;
	sum = 0;
	for (i = 2; i <= last_n; i += 2, k++)
		sum += i;
	return (float(sum/k));
}
float o_sum(int last_n, int &sum) //Function to calculate the sum of odd nos.
{
	int i, k = 0;
	sum = 0;
	for (i = 1; i <= last_n; i += 2, k++)
		sum += i;
	return (float(sum/k));
}
// Main
void main()
{
	int n, ch, sum = 0;
	char choice = 'y';
	float n_sum(int n, int &sum);
	float e_sum(int n, int &sum);
	float o_sum(int n, int &sum);
	clrscr();  //For clearing the screen
	cout << "\n\n\n\t\tThis program calculate the  "
		<< "the sum and average of given values ";
	cout << "\n\n\t Please enter the end value ";
	cin >> n;  //To get the terminating value
	do
	{
		fflush(stdin);
		clrscr();
		cout << "\n\n\n\t\t\t 1. To calculate the sum of natural numbers ";
		cout << "\n\t\t\t 2. To calculate the sum and average of even numbers. ";
		cout << "\n\t\t\t3. To calculate the sum of odd numbers.. ";
		cout << "\n\n\tEnter your choice ";
		cin >> ch;
		switch (ch)          //To get the type of sum to perform
		{
			case 1:
				cout << "\n\tThe average of the required ";
				cout << "natural nos.are " << n_sum(n, sum);
				cout << "\n\tThe sum is " << sum;
				break;
			case 2:
				cout << "\n\tThe average of the required ";
				cout << "even nos.are " << e_sum(n, sum);
				cout << "\n\tThe sum is " << sum;
				break;
			case 3:
				cout << "\n\tThe average of the required ";
				cout << "odd nos.are " << o_sum(n, sum);
				cout << "\n\tThe sum is " << sum;
				break;
			default:
				cout << "\n\tInvalid choice ";
				break;
		}
		cout << "\n\n\n\n \tPress y to continue n to exit..... ";
		cin >> choice;
	}while ((choice == 'y') || (choice == 'Y'));
	cout << "\n\n\tBye!";
	getch();
}
