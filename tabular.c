#include<iostream>
using namespace std;
int main()
{
int m[16],d[16][4]={};
int i=0,j,n,k;
for(j=0;j<16;j++)
{
    cout<<j;
   cin>>n;
   m[j]=n;
}
for(j=0;j<16;j++)
{
  k=j;
  i=0;
	while(k!=0)
        {

           d[j][i]=k%2;
            k=k/2;
            i++;
        }
}
cout<<endl;
for(i=0;i<16;i++)
{
    if(m[i]==1)
    {
    cout<<i;
    for(j=3;j>=0;j--)
	cout<<d[i][j];
	cout<<endl;
    }
}
return 1;
}
