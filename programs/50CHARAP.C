#include<stdio.h>
#include<conio.h>
void main()
{
 char * s[5];
 int i=0;
 clrscr();
 printf("\nenter 5 names:\n");
 for(i=0;i<5;i++)
 {
  gets(s[i]);
 }
 for(i=0;i<5;i++)
 {
  printf("%s\n",s[i]);
 }
 getch();
}