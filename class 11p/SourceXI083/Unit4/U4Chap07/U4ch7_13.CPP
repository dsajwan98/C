// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_13.CPP
// This program maintains the record of donor having following :
//FIELDS :  Name, Date of Birth, Address and Blood
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip.h>
struct  date
{
	int dd;
	int mm;
	int yy;
};
struct donor
{
	char name[20];
	date  dob;
	char address[25];
	char b_group[2];
 };
void main()
{
	donor person[30];
	int n, i;
	cout << "\nEnter how many donors -> ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		clrscr();
		cout << "\nEnter the Name of donor -> ";
		gets(person[i].name);
		cout << "\nEnter date of birth of donor : ";
		cout << "\nEnter day -> ";
		cin >> person[i].dob.dd;
		cout << "\nEnter month -> ";
		cin >> person[i].dob.mm;
		cout << "\nEnter year -> ";
		cin >> person[i].dob.yy;
		cout << "\nEnter address of donor -> ";
		gets(person[i].address);
		cout << "\nEnter blood group of donor -> ";
		gets(person[i].b_group);
	}
	cout << "\n\t\tList  of Donors \n";
	cout << "\n     NAME      DATE OF BIRTH      BLOOD GROUP       ADDRESS\n";
	for (i = 0; i < n; i++)
	{
		cout << setw(7) << person[i].name << setw(12) << person[i].dob.dd
			<< "/" << person[i].dob.mm << "/" << person[i].dob.yy
			<< setw(15) << person[i].b_group << setw(20)
			<< person[i].address << endl;
	}
}