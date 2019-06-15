#include<stdio.h>
#include<conio.h>
void main()
{
  int a,r;
  clrscr();
  printf("Enter the number:\n");
  scanf("%d",&a);
  r=pal(a);
  if(a==r)
  {
   printf("%d is a palindrome",a);
  }
  else
  {
   printf("%d is not a palindrome",a);
  }
  getch();
}
int pal(int p)
{
  int rev=0,r,n=p;
  while(n!=0)
  {
  r=n%10;
  rev=rev*10+r;
  n=n/10;
  }
  return(rev);

}