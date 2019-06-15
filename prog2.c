#include<stdio.h>

int fact (int);

void main(){

	int num,i=1,factNum=1;
  	scanf("%d",&num);

  	while (factNum <= num){
      factNum=fact(i++);
      if (factNum > num) break;
      printf("%d ",factNum);
        }
  	printf ("\n");
}


int fact (int n ){
		if (n==1)
          return 1;
  		else return n*fact(n-1);

	}
