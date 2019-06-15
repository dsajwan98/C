#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fp;
 char ch[100];
 clrscr();
 fp=fopen("file.txt","r");
 fgets(ch,sizeof(ch),fp);
 printf("%s",ch);
 fclose(fp);
 getch();
}