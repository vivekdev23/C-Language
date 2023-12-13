#include<stdio.h>
int main()
{
int n,a,b,c=1;
        printf("enter");
        scanf("%d",&n);
		for(a=1;a<=n;a++) 
	{ 
		for(b=1;b<=5;b++) 		
		printf("%d \t",c++); 
	    printf("\n");
    }
      return 0;
}