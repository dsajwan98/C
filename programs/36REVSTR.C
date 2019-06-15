#include<stdio.h>
#include<conio.h>
void main()
{

  char str[10],rev[10];
  int i=0,j;
  clrscr();
  printf("Enter the word:\n");
  gets(str);
  while(str[i]!='\0')
  {
   i++;
  }
  printf("Length of string=%d\n",i);
  printf("reverse of string=");
  for(j=i;j>=0;j--)
  {
   printf("%c",str[j]);

  }
  getch();
}