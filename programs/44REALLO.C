#include<stdio.h>
#include<conio.h>
void main()
{
 int *p,*q,n,i,a[]={1,2,3};
 clrscr();
 printf("\nEnter size:");
 scanf("%d",&n);
 p=(int*)calloc(n,sizeof(int));
 printf("Dynamically created array is:\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",p[i]);
 }
 q=realloc(p,n*2);
 printf("\nNewly created array is:\n");
 for(i=0;i<=2*n-1;i++)
 {
  printf("%d\t",q[i]);
 }
 printf("\n%d",sizeof(q));
 free(q);
 printf("\n%d",sizeof(q));
 getch();
}