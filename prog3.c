#include<stdio.h>
#include<ctype.h>

void main()
{
    char c;
  	int numOfword=0,flag=0;

    c = getchar();

    while ( c != EOF ) {

      c = getchar();

      if (isalnum(c) && flag==0){
        numOfword++;
        flag=1;
      }
      if (!isalnum(c)) flag=0;

    }
  	printf ("%d",numOfword);

}
