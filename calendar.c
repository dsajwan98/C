int main()
{
    int m,i,y,d,l;
    scanf("%d",&y);
    for(m=1;m<12;m++)
    {
        d=1;

        if(m%2==0)
         {
          if(m==2)
          {

         if(y%400==0)
                l=29;
         else if(y%100==0)
            l=28;
         else if(y%4==0)
            l=29;
          }
          else l=30;
         }
        else if(m%2!=0)
            l=31;

        for(d=1;d<l;d++)
        {
        printf("%d",d);
        if (d%5==0)
            printf("\n");
        }
    }
return 1;

}

