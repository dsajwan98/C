#include<stdio.h>
#include<conio.h>
void main()
{
 char a[20];
 printf("Enter the word:\n");
 gets(a);
 strrev(a);
 puts(a);
 getch();
}