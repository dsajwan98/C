#include<stdio.h>
#include<conio.h>
void main()
{

  char a[20],ch;
  int i=0;
  clrscr();
  printf("Enter your name:\n");
  gets(a);
  while(a[i]!='\0')
  {
   i++;
  }
  printf("Length of your name:%d",i);
  getch();
}