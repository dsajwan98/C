// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_20.CPP
// Program to check an entered date is a valid date or not.
#include<iostream.h>
#include<conio.h>
void main()
{
	int dd, mm, yy;
	clrscr();
	cout << "Enter the date [dd mm yyyy] ";
	cin >> dd >> mm >> yy;
	if ( mm==1 || mm == 3 || mm == 5 || mm == 7 || mm == 10 || mm == 12)
	{
		if (dd<=31 && dd >0)
			cout<<"Valid date ";
		else
			cout<< "Invalid date ";
	}
	else
	if ( mm==4 || mm == 6 || mm == 9 || mm == 11)
	{
		if (dd<=30 && dd >0)
			cout<<"Valid date ";
		else
			cout<< "Invalid date ";
	}
	else
		if (mm == 2)
		{
			if (( yy % 100 == 0) && (yy%400 == 0) || (!yy%100 == 0) && (yy%4 == 0))
				if (dd>0 && dd<=29)
					cout<<"Valid date";
				else
					cout<<"Invalid date ";
			else
				if (dd>0 && dd<= 28)
					cout<<"Valid date";
				else
					cout<<"Invalid date";
		}
		else
			cout<<"Invalid date";
}