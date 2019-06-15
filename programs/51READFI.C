#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fp;
 char ch;
 clrscr();
 fp=fopen("file.txt","r");
 ch=fgetc(fp);
 while(ch!=EOF)
 {
  printf("%c",ch);
  ch=fgetc(fp);
 }
 fclose(fp);
 getch();
}