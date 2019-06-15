#include<stdio.h>
unsigned long int fact(int);
int z(int);
int main()
{
	int i,a[10],t;
	unsigned long int N;
	
	scanf("%d",&t);
	while(t>0)
	{
	scanf("%d",&i);
	N= fact(i);
	printf("%d\n",z(N));
	t--;
    }
    return 0;     
}
unsigned long int fact(int n)
{
	unsigned long int f=1;
	while(n>0)
	{
	f=f*n;
	n--;
	}

	return f;
}
int z(int k)
{
	int cz=0;
	while(1)
	{

		if(k%10==0)
		{
			cz++;
			k=k/10;
		}
		else
		break;
	}
	return cz;
}
