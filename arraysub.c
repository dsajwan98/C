int main()
{
 int a[8],i,j,k,l,s;
 for(i=0;i<8;i++)
 scanf("%d",&a[i]);
 s=0;
 l=s;
 for(i=0;i<8;i++)
 {
     for(k=0;k<8;k++)
     {
         s=0;
         for(j=i;j<8-k;j++)
            s+=a[j];
         if(s>l)
            l=s;
     }
 }
 printf("%d",l);
}
