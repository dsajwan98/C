#include<stdio.h>
#include<conio.h>
void main()
{
 int x,ft;
 clrscr();
 printf("Enter the number:\n");
 scanf("%d",&x);
 ft=fact(x);
 printf("\nFactorial of %d is= %d",x,ft);
 getch();
}
int fact(int n)
{
 int f=1;
 while(n>0)
 {
  f=f*n;
  n--;
 }
 return(f);
}