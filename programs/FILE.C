#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("Enter two numbers:\n");
 scanf("%d %d",&a,&b);
 c=(a>b) ?a:b;
 printf("The largest of %d & %d is = %d",a,b,c);
 getch();
}