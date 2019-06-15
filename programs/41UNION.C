#include<stdio.h>
#include<conio.h>
typedef union
{
 int roll;
 char name[20];
 float f;
 }un;
 void main()
 {
  un u;
  int b;
  clrscr();
  u.roll=10;
  strcpy(u.name,"Amit");
  u.f=10000.0;
  b=sizeof(u);
  printf("Size of union variable u=%dBytes\n",b) ;
  printf("name is %s\nroll no is%d\nsal is %f",u.name,u.roll,u.f);
  getch();
 }