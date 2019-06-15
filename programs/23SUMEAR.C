#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,s=0;
 clrscr();
 printf("Enter ten numbers\n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<10;i++)
 {
  s=s+a[i];
 }
 printf("Sum of elements = %d",s);
 getch();

}