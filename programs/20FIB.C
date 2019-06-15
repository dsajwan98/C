#include<stdio.h>
#include<conio.h>
void main()
{
 int b;
 clrscr();
 printf("Enter no. of terms in Fibonacci Series:\n");
 scanf("%d",&b);
 fib(b);
 getch();
}
int fib(int n)
{

  int f=0,s=1,next,i;
  printf("%d \t %d \t",f,s);
  for(i=1;i<=n-2;i++)
  {
   next=f+s;
   f=s;
   s=next;
   printf("%d\t",next);
  }
 return (0);
}

