#include<stdio.h>
#include<conio.h>
void main()
{
 int *p,n,i;
 clrscr();
 printf("\nEnter size:");
 scanf("%d",&n);
 p=(int*)malloc(n*sizeof(int));
 printf("dynamically created Array is:\n");
 for(i=0;i<n;i++)
 {
  p[i]=i;
  printf("%d\t",p[i]);
 }
 getch();
}