#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n;
 clrscr();
 printf("Enter the no. of terms in Fibonacci Series:\n");
 scanf("%d",&n);
 for(i=0;i<n-1;i++)
 {
  printf("%d\t",fib(i));
 }
 getch();
}
int fib(int n)
{
 if(n==0)
 return(0);
 if(n==1)
 return(1);
 return(fib(n-1)+fib(n-2));
}