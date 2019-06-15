#include<stdio.h>
#include<conio.h>
void main()
{
 int b[2][3] ,i,j;
 clrscr();
 printf("Enter elements:\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 printf("2D array is:\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%d\t",b[i][j]);
  }
  printf("\n");
 }
 getch();
}