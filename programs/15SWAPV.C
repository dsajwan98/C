#include<stdio.h>
#include<conio.h>
void swap(int a ,int b)
{
  int temp=0;
  temp = a;
  a = b;
  b = temp;

}
void main()
{
  int c,d;
  clrscr();
  printf("Enter two Numbers to swap\n");
  scanf("%d%d",&c,&d);
  swap(c,d);
  printf("After swapping c=%d and d=%d",c,d);
  getch();

}