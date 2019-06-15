#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,n,pos,flag=0;
 clrscr(); printf("Enter the elements of array:\n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the number to search:\n");
 scanf("%d",&n);
 for(i=0;i<10;i++)
 {
  if(a[i]==n)
  {
   flag=1;
   pos=i+1;
  }
 }
 if(flag==1)
 printf("\nNumber %d is found at position = %d",n,pos);
 else
 printf("\nNumber %d is not found in array",n);
 getch();


}