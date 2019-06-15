//********************************************
//********************************************
// PROJECT OF SALES MANAGEMENT SYSTEM
//********************************************
//********************************************

#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>

int memo;
int dd,mm,yy;
char  it_code[50][5];
char  it_name[50][20];
float it_rate[50];
char i_code[50][5];
char i_name[50][5];
float quantity[50];
float rate[50];

void box();
void bill(int n2);
void intro(void);
char ans;
int ch,row;
int i,n,j, n1;
main()
{

	box();
	intro();
	getch();
	clrscr();
	box();
	gotoxy(20,10);
	 cout<<" Enter how many items ";
	 cin>>n;
	for(i=0;i<n;i++)
	{
		clrscr();
		box();
		gotoxy(20,6);
		cout<<"NAME  OF  ITEM  =>";
		cin>>it_name[i];
		gotoxy(20,8);
		cout<<"CODE OF ITEM. =>";
		cin>>it_code[i];
		gotoxy(20,10);
		cout<<"RATE OF ITEM =>";
		cin>>it_rate[i];
	}

	int flag;
	char ans;
	ans='y';
	flag=0;
	i=0;
	clrscr();
	box();
	gotoxy(20,10);
	cout<<" enter memo number => ";
	cin>>memo;
	do
	{
		flag=0;
		clrscr();
		box();
		gotoxy(20,8);
		cout<<"Enter Item code  -> ";
		cin>>i_code[i];
		gotoxy(20,10);
		cout<<"Enter quantity required -> ";
		cin>>quantity[i];
		 j=0;
		 for(j=0;j<n;j++)
		{
			 if (strcmp(it_code[j],i_code[i])==0)
			{
				clrscr();
				box();
				gotoxy(20,8);
				cout<<"Name           => "<<it_name[j];
				gotoxy(20,10);
				cout<<"ITEM CODE      => "<<it_code[j];
				gotoxy(20,12);
				cout<<"RATE           => "<<it_rate[j];
				rate[i]=it_rate[j];
				strcpy(i_name[i],it_name[j]);
				flag=1;
				i++;
			}
	}
	if (flag == 0)
	{
		gotoxy(20,16);
		cout<<"item not found";
	}
	gotoxy(20,22);
	cout<<" Do you want to continue ";
	cin>>ans;
  }while(ans=='y');
  n1=i;
  bill(n1);
  return 0;
}


//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
// THIS  FUNCTION DISPLAY THE BILL
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

void bill(int n2)
{
	float gtotal,gdis,total,dis,total1;
	gtotal=0;
	clrscr();
	box();
	gotoxy(20,8);
	cout<<"Enter date ";
	gotoxy(32,8);
	cin>>dd;
	gotoxy(35,8);
	cin>>mm;
	gotoxy(38,8);
	cin>>yy;
	clrscr();

	gotoxy(10,3);
	cout<<"CASH MEMO NUMBER : "<<memo;
	gotoxy(10,4);
	cout<<"CASH MEMO DATE   : "<<dd<<"/"<<mm<<"/"<<yy;
	gotoxy(10,6);
	cout<<"ITEM CODE";
	gotoxy(20,6);
	cout<<"NAME ";
	gotoxy(30,6);
	cout<<"QUANTITY";
	gotoxy(40,6);
	cout<<"RATE";
	gotoxy(50,6);
	cout<<"DISCOUNT";
	gotoxy(60,6);
	cout<<"TOTAL";
	gotoxy(10,7);
	cout<<"-----------------------------------------------------";
	total=0;
	row=8;
	for(i=0;i<n2;i++)
	{
			 total=0;
			 total1=0;
			 dis=0;
			gotoxy(10,row);
			cout<<i_code[i];
			gotoxy(20,row);
			cout<<i_name[i];
			gotoxy(30,row);
			cout<<quantity[i];
			gotoxy(40,row);
			cout<<rate[i];
			total=quantity[i]*rate[i];
			if ((total>=1000)&&(total<2000))
				dis=total*5/100;
			else
				if((total>=2000)&&(total<5000))
					dis=total*10/100;
				else
					if(total>=5000)
						dis=total*20/100;
			gotoxy(50,row);
			cout<<dis;
			total1=total-dis;
			gotoxy(60,row);
			cout<<total1;
			gtotal=gtotal+total1;
			row++;
		}
				gotoxy(20,23);
	cout<<"GRAND TOTAL : "<<gtotal;
}
// **************************************************
// THIS FUNCTION DISPLAY THE INTRODUCTION
// **************************************************
void intro()
{
	gotoxy(20,8);
	cout<<"     S A L E S    M A N A G E M E N T";
	gotoxy(20,12);
	cout<<"              S Y S T E M";
	gotoxy(40,14);
	cout<<"          COMPILED BY : ";
	gotoxy(40,16);
	cout<<"          SAKSHI JINDAL";
	gotoxy(40,17);
	cout<<"           VIKRAM SAHNI";
	gotoxy(40,18);
	cout<<"             MANU SINGH";
}

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
// THIS FUNCTION DISPLAY THE BOX
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

void box(void)
{
	int  i;
	for (i=16;i<=65;i++)
	{
		gotoxy(i,20);
		cout<<"*";
	}
	for (i=16;i<=65;i++)
	{
		gotoxy(i,4);
		cout<<"*";
	}
	for (i=4;i<=20;i++)
	{
		gotoxy(16,i);
		cout<<"*";
	}
	for (i=4;i<=20;i++)
	{
		gotoxy(65,i);
		cout<<"*";
	}
}

