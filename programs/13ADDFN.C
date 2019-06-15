#include<stdio.h>
#include<conio.h>
int sum(int a,int b) ;
int main()
{
 int num1, num2,total=0;
 clrscr();
 printf("\nEnter the first number:");
 scanf("%d",&num1);
 printf("\nEnter the second number:");
 scanf("%d",&num2);
 total= sum (num1,num2);
 printf("\nSum of %d & %d is %d",num1,num2,total);
 getch();
 return 0;

}
int sum(int a,int b)
{
 return(a+b);
}