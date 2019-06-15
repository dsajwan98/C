#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,g;
 clrscr();
 printf("Enter 1 to addition \nEnter 2 to Subtract\nEnter 3 to division\nEnter 4 to multiply\nEnter 5 to exit\n");
 scanf("%d",&g);
 switch(g)
 {
   case 1: printf ("Enter two numbers\n");
	   scanf("%d%d",&a,&b);
	   printf("\nSum of %d & %d is %d",a+b);
	   break;
   case 2: printf ("Enter two numbers\n");
	   scanf("%d%d",&a,&b);
	   printf("\nsubtraction of %d & %d is %d",a-b);
	   break;
   case 3: printf ("Enter two numbers\n");
	   scanf("%d%d",&a,&b);
	   printf("\nDivision of %d & %d is %d",a,b,a/b);
	   break;
     case 4: printf ("Enter two numbers\n");
	   scanf("%d%d",&a,&b);
	   printf("\nMultiplication of %d & %d is %d",a*b);

	   break;
   case 5: exit(0);
   default: printf("Please enter number between 1-4");
 }


 getch();
}
