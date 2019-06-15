#include<stdio.h>
#include<conio.h>
void main()
{
 int *p,n,i;
 clrscr();
 printf("Enter Size:");
 scanf("%d",&n);
 p=(int*)calloc(n,sizeof(int));
 printf("dynamically allocated array is:\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",p[i]);
 }
 getch();
}