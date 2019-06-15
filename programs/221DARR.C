#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i;
clrscr();
printf("Enter 10 numbers:\n");
for(i=0;i<10;i++)
 {
 scanf("%d",&a[i]);
 }
printf("Numbers you entered are:\n");
for(i=0;i<10;i++)
 {
 printf("%d\t",a[i]);
 }
getch();
}
