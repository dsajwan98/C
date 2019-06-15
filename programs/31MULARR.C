//Wap to multiply two Arrays
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[2][3],b[3][4],c[2][4],i,j,k;
 clrscr();
 printf("Enter the elements of first matrix:\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
  printf("Enter the elements of second matrix:\n");
 for(j=0;j<3;j++)
 {
  for(k=0;k<4;k++)
  {
   scanf("%d",&b[j][k]);
  }
 }

 for(i=0;i<2;i++)
 {
  for(k=0;k<4;k++)
  {
   c[i][k]=0;
   for(j=0;j<3;j++)
   {
    c[i][k] = c[i][k]+a[i][j]*b[j][k];
   }
  }
 }
 printf("Multiplied matrix is:\n");
 for(i=0;i<2;i++)
 {
  for(k=0;k<4;k++)
  {
   printf("%d\t",c[i][k]);
  }
  printf("\n");
 }
 getch();
}