#include<iostream.h>
#include<conio.h>
#include<string.h>
#define dash  '*';
char  group[4][9];
char name[20];
int rem,sumbox;
int namelength;
int i,sum;
int number;
int  symbol;
int finalsum,finalrem;
char ch;
int col;
char ans;

void introbox();
void heading();
void writeintro();
void entername();
void lenname();
void countblock();
void box();
void displaychart();
void displaysum();
void displayfinal();
void characterpara();
main()
{

ans='y';
 do
 {
 clrscr();
 box();
 writeintro();
 getch();
 clrscr();
 introbox();
 gotoxy(22,12);
 entername();
 gotoxy(1,23);
 lenname();
 clrscr();
 box();
 displaychart();
 getch();
 clrscr();
 box();
 countblock();
 getch();
 clrscr();
 box();

 displaysum();
 displayfinal();
 getch();
 clrscr();
 heading();
 box();
 characterpara();
clrscr();
box();
 gotoxy(20,10);
 cout<<"Do you want to continue ";
 cin>>ans;
 }
 while(ans=='y');
 return 0;
}

void entername(void)
{
gotoxy(25,10);
cout<<"Enter Your Name(max.Lenth 20)";
gotoxy(33,14);
cin>>name;
}
void lenname(void)
{
namelength=strlen(name);
cout<<"Press Return key To Display Numberology Chart";
}
void box(void)
{
int  counter;

for(counter=16;counter<=65;counter++)
{
gotoxy(counter,20);
cout<<dash;
}
for(counter=16;counter<=65;counter++)
{
gotoxy(counter,4);
cout<<dash;
}
for(counter=4;counter<=20;counter++)
{
gotoxy(16,counter);
cout<<dash;
}
for(counter=4;counter<=20;counter++)
{
gotoxy(65,counter);
cout<<dash;
}
}

void displaychart(void)
{
int outer1,inner1,j;
 char alpha;

 gotoxy(28,6);
 cout<<"   Numerology Chart";
 gotoxy(24,7);
 cout<<"============================";
 alpha='a';
 j=8;
 for (outer1=1;outer1<=4;outer1++)
 {
 j=j+2;
 gotoxy(20,j);
 for(inner1=1;inner1<=9;inner1++)
 {
 if (outer1==1)
 {
 cout<<inner1<<"    ";
 goto e;
 }
 {
 cout<<alpha<<"    ";
 alpha=alpha++;
 }
e:	}
	 }
 gotoxy(2,25);
 cout<<"Press  return key to continue ";
}


void countblock(void)
{
int outer1,inner1,col;
char alpha;

 sum=0;
 col=7;
 gotoxy(22,5);
 cout<<"Aphabet         value           sum";
 gotoxy(21,6);
 cout<<"---------------------------------------";
 for(i=0;i<=namelength;i++)
 {
 alpha='a';
 for (outer1=2;outer1<=4;outer1++)
  {
	 for(inner1=1;inner1<=9;inner1++)
 {
 if (name[i]==alpha)
 {
 sum=sum+inner1;
 col=col+1;
 gotoxy(24,col);
 cout<<"   "<<name[i]<<"             "<<inner1<<"             "<<sum;
 goto q;
  }
  alpha++;
 }
 }
q:	}
  }


void displaysum()
{
gotoxy(26,7);
cout<<"Total number of alphaphets ";
gotoxy(26,9);
cout<<"in "<<name<<" are =>  ";
cout<<namelength;
gotoxy(26,11);
cout<<"Total sum of alphabets in "<<name;
gotoxy(26,13);
cout<<"According to the chart => ";
cout<<sum;
}

void displayfinal()
{
number=sum;
sumbox=0;
do
{
  rem=number %10;
  sumbox=sumbox+rem;
  number=number / 10;
}while(number!=0);
gotoxy(26,16);
cout<<"Exact sum of given name is => "<<sumbox;
gotoxy(5,22);
cout<<"Press Return to get characterstics of your name";
finalsum=0;
if( sumbox>9)
{
	  finalsum=0;
	  finalrem=0;
	  do
	  {
			finalrem=sumbox % 10;
			finalsum=finalsum + finalrem;
			sumbox=sumbox / 10;
		}while( sumbox!=0);
	  sumbox=finalsum;
	  gotoxy(22,18);
	  cout<<"Final number of input name=  "<<sumbox;
 }
}

void   introbox()
{
  for (i=8;i<=16;i++)
  {
  gotoxy(18,i);
  cout<<dash;
  }
  for (i=8;i<16;i++)
  {
  gotoxy(56,i);
  cout<<dash;
  }
  for(i=18;i<=56;i++)
  {
  gotoxy(i,17);
  cout<<dash;
  }
  for (i=18;i<=56;i++)
  {
  gotoxy(i,8);
  cout<<dash;
  }
}

void writeintro()
{
  gotoxy(19,7);
  cout<<"   S O F T W A R E   C O M P I L E D   B Y ";
  gotoxy(25,11);
  cout<<"    RACHIT  ,  ADITYA     ";
  gotoxy(25,13);
  cout<<"         XII - A";
  gotoxy(37,15);
  cout<<"OF";
  gotoxy(27,17);
  cout<<" HIMALAYA PUBLIC SCHOOL ";
  gotoxy(7,22);
  cout<<"YOU ARE REQUESTED TO OFF THE CAPS LOCK BEFORE USING THE SOFTWARE";
}

void heading()
{
  gotoxy(22,2);
  cout<<"Perosnality Characterstics of  "<<name;
  gotoxy(18,3);
  cout<<"=========================================";
}

void  characterpara()
{
	  switch ( sumbox)
	  {
		 case   1 :
						 gotoxy(21,6);
						 cout<<" ONES ARE ONE OF THE MOST STRONG MINDED";
						 gotoxy(21,8);
						 cout<<"OF ALL THE NUMBERS AND HATE BEING TOLD";
						 gotoxy(21,10);
						 cout<<"WHAT TO DO.ONES ARE FULL OF DETER-";
						 gotoxy(21,12);
						 cout<<"-NATION,ENERGY,CONFIDENCE AND CAN DO";
						 gotoxy(21,14);
						 cout<<"ANYTHING WHEN THEY PUT THEIR MIND TO IT";
						 gotoxy(21,16);
						 cout<<"THE FLIP SIDE : THE CAN BE PRETTY STU-";
						 gotoxy(21,18);
						 cout<<"BBORN AND BOSSY!";
						 break;
		 case   2:  gotoxy(21,6);
						cout<<"TWOS ARE KIND ,SHY,DAY,DREAMERS,THE";
						gotoxy(21,8);
						cout<<"LOVE ANIMALS,READING AND SPENDING";
						gotoxy(21,10);
						cout<<"COSY TIMES AT HOME AND TEND TO";
						gotoxy(21,12);
						cout<<"FEEL EITHER REALLY HAPPY OR SAD";
						gotoxy(21,14);
						cout<<"THEY DESPITE THEIR MODINESS";
						gotoxy(21,16);
						cout<<"THEY ARE RARELY GRUMPY AND HATE";
						gotoxy(21,18);
						cout<<"ROWS MORE THEN ANYTHING";
						break;
		 case   3:  gotoxy(21,6);
						cout<<"THREES ARE THOSE AMAZING,ANNOYING FOLK";
						gotoxy(21,8);
						cout<<"WHO ALWAYS HAND THEIR HOMEWORK IN ON";
						gotoxy(21,10);
						cout<<"TIME AND STILL HAVE TIME FOR LOTS OF";
						gotoxy(21,12);
						cout<<"HOBBIES WHICH THEY ARE BRILLIANT AT";
						gotoxy(21,14);
						cout<<"THEY ARE THEY ARE SENSIBLE,RELIABLE";
						gotoxy(21,16);
						cout<<"EASY GOING AND HONEST TOO.";
						break;
		 case   4 :
						 gotoxy(21,6);
						 cout<<" FOURS ARE QUICK,CLEVER,DARING AND GOOD AT ";
						 gotoxy(21,8);
						 cout<<"MAKING PEPOLE LAUGH SO IT IS NOT SURPRISING";
						 gotoxy(21,10);
						 cout<<"THAT THAY ARE USUALLY GANG LEADERS";
						 gotoxy(21,12);
						 cout<<"THAT OTHERS LOOK UP TO.WHEN THEY STRONGLY";
						 gotoxy(21,14);
						 cout<<"ABOUT SOMETHING THEY ARE SHY TO SPEAK THEIR";
						 gotoxy(21,16);
						 cout<<"MIND.EVER TO THEIR PARENTS AND TEACHERS";
						 gotoxy(21,18);
						 cout<<"A HABBIT WHICH OFTEN GETS THEM INTO TROUBLE";
						 break;
		 case   5:  gotoxy(21,6);
						cout<<"FIVES  ARE SMART,QUICK,AND A BIT ZANY.AND THEY";
						gotoxy(21,8);
						cout<<"LIKE TO HAVE LOADS OF DIFFERENT INTRESTS";
						gotoxy(21,10);
						cout<<"THEY LOVE TRAVEL AND TRYING NEW THINGS";
						gotoxy(21,12);
						cout<<"BUT THEY OFTEN FLIT SO QUICKLY THAT THEY";
						gotoxy(21,14);
						cout<<"SOMETIMES LEAVE THINGS UNFINISHED AND RARELY";
						gotoxy(21,16);
						cout<<"GIVE A PROPER CHANCE";
						break;
		 case   6:  gotoxy(21,6);
						cout<<"YOU ARE SIX, PEOPLE LIKE YOU MOST";
						gotoxy(21,8);
						cout<<"BE SMILING AS YOU READ THIS BECAUSE YOU ARE";
						gotoxy(21,10);
						cout<<"THE MOST CHEERFUL,OPTIMISTIC AND HAPPY OF ";
						gotoxy(21,12);
						cout<<"ALL THE PERSONALITY TYPES.YOU CAN FIND ";
						gotoxy(21,14);
						cout<<"SOMETHING GOOD IN EVEN WORST SITUATION AND";
						gotoxy(21,16);
						cout<<"IT IS NOT SURPRISING THAT YOU HAVE SO MANY ";
						gotoxy(21,18);
						cout<<"FRIENDS - YOU ARE JUST SO NICE TO BE WITH";
						break;
		 case   7 :
						 gotoxy(21,6);
						 cout<<" SEVENS ARE BRAINY AND QUIET AND TEND TO HAVE";
						 gotoxy(21,8);
						 cout<<" JUST ONE OR TWO VERY CLOSE FRIENDS.THEY CAN'T";
						 gotoxy(21,10);
						 cout<<" TOLERATE NOISY CROWDS .THEY ARE HAPPIEST WHEN";
						 gotoxy(21,12);
						 cout<<" THEY GET A CHANCE TO SPEND SOME TIME ALONE.";
						 gotoxy(21,16);
						 cout<<" THEY ADORE ANIMALS,WILDLIFE AND COUNTRYSIDE";


						break;
		 case   8:  gotoxy(21,6);
						cout<<"EIGHTS ARE SENSIBLE , RELIABLE AND THOROUGHLY";
						gotoxy(21,8);
						cout<<"NICE -WHICH SOMETIMES MAKES THEM PREY FOR ";
						gotoxy(21,10);
						cout<<"NASTY FLOKS WHO DO NOT MIND TAKING UNDUE ";
						gotoxy(21,12);
						cout<<"ADVANTAGE OF THEIR KINDNESS.EIGHTS PUT ";
						gotoxy(21,14);
						cout<<"LOTS OF EFFORT INTO EVERYTHING THEY DO";
						gotoxy(21,16);
						cout<<"FROM SCH0OL WORK TO HOBBIES";
						break;
		 case   9:  gotoxy(21,6);
						cout<<"NINES ARE SMART TALANTED AND CREATIVE BUT";
						gotoxy(21,8);
						cout<<"SCHOOLTHEY OFTEN TRY TO GET AWAY WITH";
						gotoxy(21,10);
						cout<<"MINIMUM OF EFFORT PREFERING TO LARK ABOUT.";
						gotoxy(21,12);
						cout<<"THEY ARE FUN TO BE WITH AND TEND TO BE";
						gotoxy(21,14);
						cout<<"VERY POPULAR BUT THEY CAN BE PRETTY BOSSY";
  }
getch();
}
