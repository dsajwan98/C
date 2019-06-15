#include<stdio.h>
#include<conio.h>
void main()
{
 char *s = "hello";
 int i=0;
 clrscr();
 while(s[i]!='\0')
 {
  printf("%c\n",s[i]);
  i++;
 }
 getch();
}