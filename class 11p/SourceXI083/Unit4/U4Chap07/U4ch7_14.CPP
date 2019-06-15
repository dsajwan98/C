// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_14.CPP
// Program to store the information of name of country, country’s capital and per capita income
#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
#include <string.h>	
#include <stdio.h>
struct country
{
	char name[10], capital[10];
	float pcincome;
};
void main()
{
	char tname[10], tcapital[10];
	float tpcincome;
	int choice, i;
	clrscr();
	country x[] = {
		  "INDIA", "NEW-DELHI", 280,
		  "GERMANY", "BERLIN", 345.9,
		  "BRAZIL", "BRASILIA", 341.56,
		  "BRITAIN", "LONDON", 123.74,
		  "POLAND", "WARSAW", 243.54,
		  "PERU", "LIMA", 80.6,
		  "FIJI", "SUVA", 53.84,
		  "TOGO", "LOME", 662.13,
		  "ITALY", "ROME", 321.23,
		  "NORWAY", "OSLO", 61.90,
	};
	cout << "\n1. FOR NAME OF COUNTRY ";
	cout << "\n2. FOR NAME OF CAPITAL ";
	cout << "\n3. FOR PER CAPITA INCOME ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "\nEnter the country to be searched : ";
		gets(tname);
		for (i = 0; i < 10; i++)
		{
			if (strcmp(tname, x[i].name) == 0)
			{
				cout << "\nName : " << x[i].name;
				cout << "\nCapital : " << x[i].capital;
				cout << "\nPer capita income: " << x[i].pcincome; break;
			}
		}
	}
	if (choice == 2)
	{
		cout << "\nEnter the capital name to be searched : ";
		cin >> tcapital;
		for (i = 0; i < 10; i++)
		{
			if (strcmp(tcapital, x[i].capital) == 0)
			{
				cout << "\nName : " << x[i].name;
				cout << "\nCapital : " << x[i].capital;
				cout << "\nPer capita income : " << x[i].pcincome; break;
			}
		}
	}
	if (choice == 3)
	{
		cout << "\nEnter the per capita to be searched : ";
		cin >> tpcincome;
		for (i = 0; i < 10; i++)
		{
			if (x[i].pcincome == tpcincome)
			{
				cout << "\nName : " << x[i].name;
				cout << "\nCapital : " << x[i].capital;
				cout << "\nPer capita income : " << x[i].pcincome; break;
			}
		}
	}
}
