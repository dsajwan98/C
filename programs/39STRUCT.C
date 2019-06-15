#include<stdio.h>
struct student
{
 char name[20];
 int roll;
};
void main()
{
 struct student s[3];
 int i=0;
 clrscr();
 for(i=0;i<3;i++)
 {
 printf("\nEnter name of student%d:",i+1);
 gets(s[i].name);
 printf("\nEnter roll no. of student1:");
 scanf("%d",&s[i].roll);
 fflush(stdin);
 }
 printf("Name\tRoll no.\n");
 for(i=0;i<3;i++)
 {
 printf("%s\t%d\n",s[i].name,s[i].roll);
 }
 getch();
}