#include<stdio.h>
#include<conio.h>
void main()
{
 long float a[3][3] ;
 int i,j;
 clrscr();
 printf("Enter the matrix:\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%lf",&a[i][j]);
  }
 }
 for(j=0;j<3;j++)
 {
  a[0][j]=a[0][j]/a[0][0];
 }

 printf("The matrix is:\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%lf ",a[i][j]);
  }
  printf("\n");
 }
 getch();
}

