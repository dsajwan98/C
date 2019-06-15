// Program to find the occurance of a number n, kth time in the given sequence

#include<stdio.h>

int func (int , int );

void main(){
  	int n,k,out;
	scanf("%d %d",&n,&k);

  	out=func(n,k);

  	printf ("%d",out);
}

int func (int n, int k){

	int i=0,seq,occur=0;
   scanf("%d",&seq);
  while ( seq!=-1 ){

     if (seq==n)++occur;
     if(seq==n&&occur==k)
      return i;
     scanf("%d",&seq);
    i++;
  }
	return -1;
}
