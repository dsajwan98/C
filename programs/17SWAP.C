#include<stdio.h>
#include<conio.h>
void swap(int *a,int*b)
{
  int t,i,s=0 ;
  t=*a;
  *a=*b;
  *b=t;

}
void main()
{
 int c,d,i;
 clrscr();
 printf("Enter two numbers to swap:\n");
 scanf("%d %d",&c,&d);
 swap(&c,&d);
 printf("After swapping c=%d and d=%d",c,d);
 getch();

}