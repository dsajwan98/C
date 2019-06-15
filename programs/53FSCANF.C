#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fp;
 char ch[100],h;
 clrscr();
 fp=fopen("file.txt","r");
 while((ch!=EOF)&&(feof(fp)==0))
 {
  fscanf(fp,"%s",ch);
  printf("%s",ch);
  h=fgetc(fp);
  printf("%c",h);
 }
 fclose(fp);
 getch();
}