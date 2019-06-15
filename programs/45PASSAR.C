#include<stdio.h>
#include<conio.h>
void sum(int a[10])
{
 int i,s=0;
 for(i=0;i<10;i++)
 {
  s=s+a[i];
 }
 printf("\nSum of all elements of array is%d",s);
}
void main()
{
 int b[10],i;
 clrscr();
 printf("Enter 10 array elements:\n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&b[i]);
 }
 sum(b);
 getch();
}