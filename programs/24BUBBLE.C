#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,j,k,t;
 clrscr();
 printf("Enter ten numbers:\n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<9;i++)
 {
  for(j=0;j<9-i;j++)
  {
   if(a[j+1]>a[j])
   {
    t=a[j+1];
    a[j+1]=a[j];
    a[j]=t;
   }
   for(k=0;k<10;k++)
    {
     printf("%d\t",a[k]);
    }
   delay(2000);
   printf("\n");
  }
  printf("\n");
 }
 printf("\nPrint the Number after sorting:\n");
 for(i=0;i<10;i++)
 {
  printf("%d\t",a[i]);
 }
 getch();
}