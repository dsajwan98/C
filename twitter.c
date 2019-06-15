#include<stdio.h>
void main()
{
int y,x,a[4]={0},i,ct,c,n,k,s[10];
scanf("%d %d",&n,&k);
y=k;
ct=0;
while(y>0)
{
     printf("click");
  scanf("%d",&x);
   scanf("%d",&c);
            if(c==1)
             {     a[x]++;
                   if((a[x]%2)!=0)
                 ct++;
                 else if((a[x]%2)==0)
                    ct--;
              }
                else if (c==0)
                    {
                    ct=0;
                    for(i=1;i<=n;i++)
                    a[i]=0;
                    }
    s[k-y]=ct;
    y--;
 }
 for(i=0;i<k;i++)
    printf("%d\n",s[i]);
}
