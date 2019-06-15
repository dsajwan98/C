#include<stdio.h>
#include<conio.h>
typedef struct
{
 char name[20];
 char roll;
 int marks[5];
}st;
void main()
{
 st s;
 FILE *fp;
 int i,total;
 char ch;
 clrscr();
 fp=fopen("file.txt","ab");
 printf("\nEnter student's name:\n");
 gets(s.name);
 printf("\nEnter roll no.:\n");
 scanf("%d",&s.roll);
 printf("\nEnter marks for 5 subjects:");
 for(i=0;i<5;i++)
 {
  scanf("%d",&s.marks[i]);
 }
 fwrite(&s,sizeof(s),1,fp);
 fclose(fp);
 fp=fopen("file.text","rb");
 printf("\nFile has following records:\n");
 printf("\nName\tRoll.no.\ttotal marks\n");
 while( fread(&s,sizeof(s),1,fp)
 {
  total=0;
  for(i=0;i<5;i++)
  {
   total=total+s.marks[i];
  }
  printf("\n%S\t%d\t\t%d\n",s.name,s.roll,total);
 }

 fclose(fp);
 getch();
}