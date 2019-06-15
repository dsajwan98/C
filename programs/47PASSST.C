#include<stdio.h>
#include<conio.h>
typedef struct
{
 char name[30];
 int roll;
}st;
void display(st *t)
{
 printf("\nName\tRoll.no.\n");
 printf("%s\t%d",t->name,t->roll);
}
void main()
{
 st *s;
 clrscr();
 strcpy(s->name,"Amit");
 s->roll=20;
 display(s);
 getch();
}