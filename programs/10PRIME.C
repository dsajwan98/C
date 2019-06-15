#include<stdio.h>
#include<conio.h>
void main()
{
  int a, flag=0,n;
  clrscr();
  printf("Enter a number\n");
  scanf("%d",&n);
  for(a=2;a<=n/2;a++)
  {
    if(n%a==0)
    {
      flag=1;
      break;
    }
  }
  if(flag==0)
  {
   printf("%d is prime",n);
  }
  else
  {
   printf("%d is not prime",n);

  }
 getch();
}

