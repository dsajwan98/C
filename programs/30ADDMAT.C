#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3] , b[3][3] ,s[3][3] ,i,j;
 clrscr();
 printf("Enter elements of first matrix:\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("Enter elements of second matrix:\n");
  for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
  for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   s[i][j]=a[i][j]+b[i][j];
  }
 }
 printf("Sum of two matrix is:\n");
  for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%d\t",s[i][j]);
  }
  printf("\n");
 }
 getch();
}