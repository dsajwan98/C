void main()
{
  int i,j,n,r;
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



/*{
   int a=10,b=20,c=30;
   clrscr();
   c==a==b;
   printf("%d%d%d",a,b,c);
    getch();
}*/