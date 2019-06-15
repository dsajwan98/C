void main()
{
 int a[10],i,j,k,c=0;
 for(i=0;i<10;i++)
    scanf("%d",&a[i]);
 for(i=0;i<10;i++)
 {
     for(j=i+1;j<10;j++)
     {
        if (a[i]==a[j])
        {
            c++;
           for(k=j;k<10;k++)
           {
              a[k]=a[k+1];
           }
           j--;
         }

      }
       for(k=0;k<10;k++)
    printf("%d\t",a[k]);
    printf("\n");

 }
 printf("\n%d\n",c);
 for(i=0;i<10;i++)
    printf("%d\t",a[i]);
}

