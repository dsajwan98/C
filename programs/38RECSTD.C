#include<stdio.h>
struct student
{
 char name[20];
 int roll;
};
void main()
{
 struct student s1,s2;
 clrscr();
 printf("\nEnter name of student1:");
 gets(s1.name);
 printf("\nEnter roll no. of student1:");
 scanf("%d",&s1.roll);
 fflush(stdin);
 printf("\nEnter name of student2:");
 gets(s2.name);
 printf("\nEnter roll no. of student2:");
 scanf("%d",&s2.roll);
 printf("Name\tRoll no.\n");
 printf("%s\t%d\n",s1.name,s1.roll);
 printf("%s\t%d\n",s2.name,s2.roll);
 getch();
}