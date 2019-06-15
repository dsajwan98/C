#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,pos,n;
 clrscr();
 printf("Enter the elements of array:\n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&a[i]);

 }
 printf("Enter the number you want to delete:\n");
 scanf("%d",&n);
 for(i=0;i<10;i++)
 {

  if(a[i]==n)
  {
   pos=i+1;
   break;
  }
 }
 for(i=pos-1;i<9;i++)
 {
   a[i]=a[i+1];
 }
 printf("After deleting number Array is:\n");
 for(i=0;i<9;i++)
 {
  printf("%d\t",a[i]);
 }
 getch();
}