#include<stdio.h>
typedef struct
{
 int d;
 int m;
 int y;
}dob;
typedef struct
{
 char name[20];
 int roll;
 dob db;
}student;
void main()
{
 student s[3];
 int i=0;
 clrscr();
 for(i=0;i<3;i++)
 {
 printf("\nEnter name of student%d:",i+1);
 gets(s[i].name);
 printf("\nEnter roll no. of student1:");
 scanf("%d",&s[i].roll);
 printf("\nEnter date:");
 scanf("%d",&s[i].db.d);

 printf("\nEnter month:");
 scanf("%d",&s[i].db.m);

 printf("\nEnter Year:");
 scanf("%d",&s[i].db.y);
 fflush(stdin);
 }
 printf("Name\tRoll no.\tDate of Birth\n");
 for(i=0;i<3;i++)
 {
 printf("%s\t%d\t%d/%d/%d\n",s[i].name,s[i].roll,s[i].db.d,s[i].db.m,s[i].db.y);
 }
 getch();
}