#include<stdio.h>
#include<conio.h>
int sum(int n)
{
 int r,s=0;
 while(n!=0)
 {
  r=n%10;
  s=s+r;
  n=n/10;
 }
 return(s);
}
void main()
{
 int a,b;
 clrscr();
 printf("Enter the Number\n");
 scanf("%d",&a);
 b=sum(a);
 printf("sum of digits of %d is %d",a ,b);
 getch();
 return 0;
}