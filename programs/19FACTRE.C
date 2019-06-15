#include<stdio.h>
#include<conio.h>
void main()
{
  int n,f;
  clrscr();
  printf("Enter the number:\n");
  scanf("%d",&n);
  f=fact(n);
  printf("\nFactorial of %d is %d",n,f);
  getch();
}
int fact(int n)
{
   if(n==1)
   return(1);
   return(n*fact(n-1));

}