#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10] ,n,i,f=0,flag=0;
  clrscr();
  printf("Enter the no.s in array:\n");
  for(i=0;i<10;i++)
  {
   scanf("%d",&a[i]);
  }
  printf("Enter the number:\n");
  scanf("%d",&n);
  for(i=0;i<10;i++)
  {
   if(a[i]==n)
   {
    flag=1;
    f++;
   }
  }
 if(flag==1)
 {
  printf("Frequency of n is:%d",f);
 }
 else
 {
  printf("Number %d is not in array",n);
 }
 getch();
}
