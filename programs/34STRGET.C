#include<stdio.h>
#include<conio.h>
void main()
{
 char a[20],ch;
 int i=0;
 clrscr();
 printf("Enter your name:\n");
 ch=getchar();
 while(ch!='\n')
 {
   a[i]=ch;
   i++;
   ch=getchar();
 }
 a[i]='\0';
 printf("Your name is:\n");
 puts(a);
 getch();

}