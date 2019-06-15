//WAP to insert an element in an array.
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[11],i,n,ind;
 clrscr();
 printf("Enter elements of array:\n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the no. and its position you want to insert:");
 scanf("%d %d",&n,&ind);
 for(i=10;i>=ind;i--)
 {
    a[i]=a[i-1];
 }
 a[ind-1]=n;
 printf("After insertion array is:\n");
 for(i=0;i<11;i++)
 {
  printf("%d\t",a[i]);
 }
 getch();
}