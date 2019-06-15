#include<iostream.h>
#include<conio.h>

char a;
int b,i,sc,d,c,p;
void u();
void q();
void y();
void question1();
void question2();
void question3();
void question4();
void question5();
 void question6();
void question7();
void question8();
void question9();
void question10();
void question11();
void question12();
void question13();
void question14();
void question15();
main()
{
	a='y';
	do
	{
	 clrscr();
	u();
	y();
	q();
	question1();
	q();
	question2();
	q();
	question3();
	q();
	question4();
	q();
	question5();
	q();
	question6();
	q();
	question7();
	q();
	question8();
	q();
	question9();
	q();
	question10();
	q();
	question11();
	q();
	question12();
	q();
	question13();
	q();
	question14();
	q();
	question15();
	clrscr();
	gotoxy(10,10);
	cout<<"your final sum is => "<<sc;
	if(sc<10)
	{
	gotoxy(10,14);
	cout<<"you are weak in science";
	}
	else
	{
	gotoxy(10,14);
	cout<<"well done keep it up";
	}
	gotoxy(10,18);
	cout<<"do you want to continue";
	cin>>a;
	}while(a=='y');
	gotoxy(10,20);
	cout<<"job is over";
	return 0;
}

void  u(void)
{

	gotoxy(6,3);
	cout<<"------------------------------------------------";
	gotoxy(10,8);
	cout<<"  WELCOME  TO  SCIENCE  QUIZ";
	gotoxy(6,20);
	cout<<"------------------------------------------------";
	getch();
}

void y(void)
{

clrscr();
	 gotoxy(15,11);
	 cout<<"INSTRUCTION  FOR  USER :- ";
	 gotoxy(15,14);
	 cout<<"YOU HAVE GIVEN FOUR OPTIONS";
	 gotoxy(15,16);
	 cout<<"OUT OF WHICH YOU HAVE ";
	 gotoxy(15,18);
	 cout<<"TO CHOSE ANY ONE AS YOUR ANSWER";
	 getch();
}

void q()
{
	int row;
	row=3;
	clrscr();
	for(i=5;i<=60;i++)
	{
	gotoxy(i,row);
	cout<<"*";
	}
	row=23;
	for(i=5;i<=60;i++)
	{
	gotoxy(i,row);
	cout<<"*";
	}
   
}

void question1()
{

  sc=0;
  gotoxy(10,5);
  cout<<" Q1 :  THE ELEMENT WITH LOWEST ";
  gotoxy(16,6);
  cout<<"        MELTING AND BOILING POINT";
  gotoxy(10,7);
  cout<<" A : CU";
	gotoxy(10,8);
  cout<<" B : FE";
	gotoxy(10,9);
  cout<<" C : NI";
	gotoxy(10,10);
  cout<<" D : ZN";
  gotoxy(10,12);
  cout<<" ENTER  CHOICE => ";
  cin>>a;

  if (a=='d')
  {
  gotoxy(10,14);
  cout<<" YOU  ARE  CORRECT";
  sc=sc+1;
  }
  else
  gotoxy(10,14);
  cout<<" YOU ARE WRONG ";
	gotoxy(10,16);
	cout<<"YOUR  SCORE IS ";
	cout<<sc;
	getch();
}

void question2()
{

  gotoxy(10,5);
  cout<<" Q2 :  THE STUDY OF BIRD ";
  gotoxy(10,7);
  cout<<" A : ZOOLOGY ";
	gotoxy(10,8);
  cout<<" B : ASTROLOGY";
	gotoxy(10,9);
  cout<<" C : ORNTHOLOGY";
	gotoxy(10,10);
  cout<<" D : MICROLOGY";
  gotoxy(10,12);
  cout<<" ENTER  CHOICE => ";
  cin>>a;

  if (a=='c')
  {
  gotoxy(10,14);
  cout<<" YOU  ARE  CORRECT";
  sc=sc+1;
  }
  else
  {
  gotoxy(10,14);
  cout<<" YOU ARE WRONG ";
  }
	gotoxy(10,16);
	cout<<"YOUR  SCORE IS ";
	cout<<sc;
	getch();
}
void question3()
{

  gotoxy(10,5);
  cout<<" Q3 :  THE UNIT OF CAPACITANCE IS ";
  gotoxy(10,7);
  cout<<" A : NEWTON";
	gotoxy(10,8);
  cout<<" B : WATT";
	gotoxy(10,9);
  cout<<" C : OHM";
	gotoxy(10,10);
  cout<<" D : FARAD";
  gotoxy(10,12);
  cout<<" ENTER  CHOICE => ";
  cin>>a;

  if (a=='d')
  {
  gotoxy(10,14);
  cout<<" YOU  ARE  CORRECT";
  sc=sc+1;
  }
  else
  {
  gotoxy(10,14);
  cout<<" YOU ARE WRONG ";
  }
	gotoxy(10,16);
	cout<<"YOUR  SCORE IS ";
	cout<<sc;
	getch();
}
void question4()
{

  gotoxy(10,5);
  cout<<" Q4 :  WHO IS THE FATHER ";
  gotoxy(16,6);
  cout<<"        OF COMPUTER";
  gotoxy(10,7);
  cout<<" A : CHARLES BABBAGE";
	gotoxy(10,8);
  cout<<" B : BLAISE PASCAL";
	gotoxy(10,9);
  cout<<" C : NEWTON";
	gotoxy(10,10);
  cout<<" D : FRENKLIN";
  gotoxy(10,12);
  cout<<" ENTER  CHOICE => ";
  cin>>a;

  if (a=='a')
  {
  gotoxy(10,14);
  cout<<" YOU  ARE  CORRECT";
  sc=sc+1;
  }
  else
  {
  gotoxy(10,14);
  cout<<" YOU ARE WRONG ";
  }
	gotoxy(10,16);
	cout<<"YOUR  SCORE IS ";
	cout<<sc;
	getch();
}
void question5()
{

  gotoxy(10,5);
  cout<<" Q5 :  WHICH INSTRUMENT IS USED";
  gotoxy(16,6);
  cout<<"        TO MESURE EARTHQUAKE";
  gotoxy(10,7);
  cout<<" A : BAROMETER";
	gotoxy(10,8);
  cout<<" B : ANOMETER";
	gotoxy(10,9);
  cout<<" C : RICHTER SCALE";
	gotoxy(10,10);
  cout<<" D : GALVONOMETER";
  gotoxy(10,12);
  cout<<" ENTER  CHOICE => ";
  cin>>a;

  if (a=='c')
  {
  gotoxy(10,14);
  cout<<" YOU  ARE  CORRECT";
  sc=sc+1;
  }
  else
  {
  gotoxy(10,14);
  cout<<" YOU ARE WRONG ";
  }
	gotoxy(10,16);
	cout<<"YOUR  SCORE IS ";
	cout<<sc;
	getch();
}
void question6()
{

  gotoxy(10,5);
  cout<<" Q6 :  WHO INVENTED BULB ";
  gotoxy(10,7);
  cout<<" A : MARCONI";
	gotoxy(10,8);
  cout<<" B : RUTHERFORD";	gotoxy(10,9);
	 cout<<" C : EDISON";
	gotoxy(10,10);
  cout<<" D : HOKKINS";
  gotoxy(10,12);
  cout<<" ENTER  CHOICE => ";
  cin>>a;

  if (a=='c')
  {
  gotoxy(10,14);
  cout<<" YOU  ARE  CORRECT";
  sc=sc+1;
  }
  else
  {
  gotoxy(10,14);
  cout<<" YOU ARE WRONG ";
  }
	gotoxy(10,16);
	cout<<"YOUR  SCORE IS ";
	cout<<sc;
	getch();
}
void question7()
{

  gotoxy(10,5);
  cout<<" Q7 :  HEART IS DIVIDED INTO ";
  gotoxy(10,7);
  cout<<" A : ONE PART ";
	gotoxy(10,8);
  cout<<" B : TWO PART";
	gotoxy(10,9);
  cout<<" C : THREE PART";
	gotoxy(10,10);
  cout<<" D : FOUR PART";
  gotoxy(10,12);
  cout<<" ENTER  CHOICE => ";
  cin>>a;

  if (a=='d')
  {
  gotoxy(10,14);
  cout<<" YOU  ARE  CORRECT";
  sc=sc+1;
  }
  else
  {
  gotoxy(10,14);
  cout<<" YOU ARE WRONG ";
  }
	gotoxy(10,16);
	cout<<"YOUR  SCORE IS ";
	cout<<sc;
	getch();
}
void question8()
{

  gotoxy(10,5);
  cout<<" Q8 :  ATOM BOMB IS BASED ";
  gotoxy(16,6);
  cout<<"        ON THE PRINCIPLE OF";
  gotoxy(10,7);
  cout<<" A : NUCLEAR FISSION";
	gotoxy(10,8);
  cout<<" B : NUCLEAR FUSION";
	gotoxy(10,9);
  cout<<" C : NEWTON THIRD LAW";
	gotoxy(10,10);
  cout<<" D : NONE OF THE ABOVE";
  gotoxy(10,12);
  cout<<" ENTER  CHOICE => ";
  cin>>a;

  if (a=='a')
  {
	 gotoxy(10,14);
  cout<<" YOU  ARE  CORRECT";
  sc=sc+1;
  }
  else
  {
	 gotoxy(10,14);
  cout<<" YOU ARE WRONG ";
  }
	gotoxy(10,16);
	cout<<"YOUR  SCORE IS ";
	cout<<sc;
	getch();
}
void question9()
{

  gotoxy(10,5);
  cout<<" Q9 :  DISTANCE OF OZONE LAYER ";
  gotoxy(16,6);
  cout<<"       FROM EARTH";
  gotoxy(10,7);
  cout<<" A : 13 KM";
	gotoxy(10,8);
  cout<<" B : 14 KM";
	gotoxy(10,9);
  cout<<" C : 17 KM";
	gotoxy(10,10);
  cout<<" D : 16 KM";
  gotoxy(10,12);
  cout<<" ENTER  CHOICE => ";
  cin>>a;

  if (a=='d')
  {
	 gotoxy(10,14);
  cout<<" YOU  ARE  CORRECT";
  sc=sc+1;
  }
  else
  {
	 gotoxy(10,14);
  cout<<" YOU ARE WRONG ";
  }
	gotoxy(10,16);
	cout<<"YOUR  SCORE IS ";
	cout<<sc;
	getch();
}
void question10()
{

  gotoxy(10,5);
  cout<<" Q10 :  THE ATOMIC NUMBER ";
  gotoxy(16,6);
  cout<<"        OF GLUCOSE IS";
  gotoxy(10,7);
  cout<<" A : 180";
	gotoxy(10,8);
  cout<<" B : 80";
	gotoxy(10,9);
  cout<<" C : 120";
	gotoxy(10,10);
  cout<<" D : 160";
  gotoxy(10,12);
  cout<<" ENTER  CHOICE => ";
  cin>>a;

  if (a=='a')
  {
	 gotoxy(10,14);
  cout<<" YOU  ARE  CORRECT";
  sc=sc+1;
  }
  else
  {
	 gotoxy(10,14);
  cout<<" YOU ARE WRONG ";
  }
	gotoxy(10,16);
	cout<<"YOUR  SCORE IS ";
	cout<<sc;
	getch();
}
void question11()
{

  gotoxy(10,5);
  cout<<" Q11 :  DIELECTRIC CONSTANT OF WATER";
  gotoxy(10,7);
  cout<<" A : 82";
	gotoxy(10,8);
  cout<<" B : 81";
	gotoxy(10,9);
  cout<<" C : 80";
	gotoxy(10,10);
  cout<<" D : 85";
  gotoxy(10,12);
  cout<<" ENTER  CHOICE => ";
  cin>>a;

  if (a=='b')
  {
	 gotoxy(10,14);
  cout<<" YOU  ARE  CORRECT";
  sc=sc+1;
  }
  else
  {
	 gotoxy(10,14);
  cout<<" YOU ARE WRONG ";
  }
	gotoxy(10,16);
	cout<<"YOUR  SCORE IS ";
	cout<<sc;
	getch();
}
void question12()
{

  gotoxy(10,5);
  cout<<" Q12 :  LACK OF VITAMIN D ";
  gotoxy(10,7);
  cout<<" A : ANAEMIA";
	gotoxy(10,8);
  cout<<" B : RICKETS";
	gotoxy(10,9);
  cout<<" C : SCURVEY";
	gotoxy(10,10);
  cout<<" D : GOITER";
  gotoxy(10,12);
  cout<<" ENTER  CHOICE => ";
  cin>>a;

  if (a=='b')
  {
	 gotoxy(10,14);
  cout<<" YOU  ARE  CORRECT";
  sc=sc+1;
  }
  else
  {
	 gotoxy(10,14);
  cout<<" YOU ARE WRONG ";
  }
	gotoxy(10,16);
	cout<<"YOUR  SCORE IS ";
	cout<<sc;
	getch();
}
void question13()
{

  gotoxy(10,5);
  cout<<" Q14 :  WHICH BLOOD COMPONENT";
  gotoxy(16,6);
  cout<<"        PREVENT DISEASE";
  gotoxy(10,7);
  cout<<" A : RBC";
	gotoxy(10,8);
  cout<<" B : WBC";
	gotoxy(10,9);
  cout<<" C : PLASMA";
	gotoxy(10,10);
  cout<<" D : PLATELETS";
  gotoxy(10,12);
  cout<<" ENTER  CHOICE => ";
  cin>>a;

  if (a=='b')
  {
	 gotoxy(10,14);
  cout<<" YOU  ARE  CORRECT";
  sc=sc+1;
  }
  else
  {
	 gotoxy(10,14);
  cout<<" YOU ARE WRONG ";
  }
	gotoxy(10,16);
	cout<<"YOUR  SCORE IS ";
	cout<<sc;
	getch();
}
void question14()
{

  gotoxy(10,5);
  cout<<" Q14 :  HALEY COMET COMES AFTER ";
  gotoxy(16,6);
  cout<<"        EVERY";
  gotoxy(10,7);
  cout<<" A : 86";
	gotoxy(10,8);
  cout<<" B : 60";
	gotoxy(10,9);
  cout<<" C : 90";
	gotoxy(10,10);
  cout<<" D : 10";
  gotoxy(10,12);
  cout<<" ENTER  CHOICE => ";
  cin>>a;

  if (a=='a')
  {
	 gotoxy(10,14);
  cout<<" YOU  ARE  CORRECT";
  sc=sc+1;
  }
  else
  {
	 gotoxy(10,14);
  cout<<" YOU ARE WRONG ";
  }
	gotoxy(10,16);
	cout<<"YOUR  SCORE IS ";
	cout<<sc;
	getch();
}
void question15()
{

  gotoxy(10,5);
  cout<<" Q15 :  WHICH PHOSPHORUS ";
  gotoxy(16,6);
  cout<<"        IS POISONOUS";
  gotoxy(10,7);
  cout<<" A : RED";
	gotoxy(10,8);
  cout<<" B : WHITE";
	gotoxy(10,9);
  cout<<" C : YELLOW";
	gotoxy(10,10);
  cout<<" D : NONE OF THE ABOVE";
  gotoxy(10,12);
  cout<<" ENTER  CHOICE => ";
  cin>>a;

  if (a=='c')
  {
	 gotoxy(10,14);
  cout<<" YOU  ARE  CORRECT";
  sc=sc+1;
  }
  else
  {
	 gotoxy(10,14);
  cout<<" YOU ARE WRONG ";
  }
	gotoxy(10,16);
	cout<<"YOUR  SCORE IS ";
	cout<<sc;
	getch();
}










