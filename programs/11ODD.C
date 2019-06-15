#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 for(a=2;a<=10;a++)
 {
  if(a%2==0)
  {
   continue;
  }
  printf("%d\t",a);
 }
 getch();
}