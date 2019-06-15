/*

void main()
{
 int i,j,k,n;
 clrscr();
 printf("enter no. of rows:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   for(j=1;j<=n-i/2;j++)
   {
    printf(" ");
   }
   for(k=1;k<=i;k++)
   {

     printf("*");

   }
   printf("\n");
 }
 getch();
}


*/




/*

void main()
{
  int i,j,n;
  char k;
  clrscr();
  k='a';
  for(i=1;i<=9;i++)
  {
    for(j=1;j<=15;j++)
    {

      printf("%c ",k);
      delay(100);

       k++;


    }
    clrscr();

   for(n=1;n<=i;n++)
   {
    printf("\n");
    }

  }
  getch();
}

*/


/*


int cir(int k,int l,int m,int n)
{
   int i,j;


    if(i==k||i==l)
    {
     if(j==m||j==n)
     {
      printf("* ");
     }
     else
     {
      printf("  ");
     }
    }


}
void main()
{
 int i,j,k,l,m,n;
 clrscr();
 k=1;l=8;m=4;n=5;
 for(i=1;i<=8;i++)
 {
  for(j=1;j<=8;j++)
  {
    while(k<=4&&l>=4&&m>=1&&n<=8)
    {

    cir(k,l,m,n);
    }
    k++;
    l--;
    m--;
    n++;

  }
   printf("\n");
 }

 getch();
}


*/



/*


void main()
{
  int i,j;
  clrscr();
  for(i=1;i<=8;i++)
  {
   for(j=1;j<=8;j++)
   {
    if(i==1||i==8)
    {
     if(j==4||j==5)
     {
      printf("* ");
     }
     else
     {
     printf("  ");
     }
    }


    if(i==2||i==7)
    {
     if(j==3||j==6)
     {
      printf("* ");
     }
     else
     {
     printf("  ");
     }
    }

    if(i==3||i==6)
    {
     if(j==2||j==7)
     {
      printf("* ");
     }
     else
     {
     printf("  ");
     }
    }

    if(i==4||i==5)
    {
     if(j==1||j==8)
     {
      printf("* ");
     }
     else
     {
     printf("  ");
     }
    }

   }
  printf("\n");
  }

  getch();
  }

 */






/*
void main()

{ int i,j,n,r;
clrscr();
  for(i=0;i<=3;i++)
   {
    for(j=0;j<=3;j++)
    {

    if(i==2||i==1)
     {
       if(j==2||j==1)
       {
       printf("  ");
       }
       else
       {
       printf("* ");
       }
     }

     else
     {
       printf("* ");

     }
     }
     printf("\n");
     }
     getch();


    }
  */










/*
int fact (int n)

{

  if(n==1)
  return(3);
  return (n*fact(n-1));

}


void main()

{

  int a;
  clrscr();
  printf("enter the value");
  scanf("%d",&a);
  printf("factorial =%d \n",fact(a));
  getch();

}

*/



/*

{
  int i,a,b,c,j;
  clrscr();
  for (i=0;i<=8;i++)
   {
      for (j=0;j<=8;j++)
      {
      printf("%d",i||j);
       }
    printf("\n");
    }

  getch();
  }

*/


void main()
{
   int a=10,b=20,c=30;
   clrscr();
   c==a==b;
   printf("%d%d%d",a,b,c);
    getch();
}