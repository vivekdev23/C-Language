/*	2	2	2	2	2
	4	4	4	4	4
	6	6	6	6	6
	8	8	8	8	8
	10	10	10	10	10
	*/ 
	
	
#include<stdio.h>
int main()
{
	int i,j,n;
		scanf("%d",&n);
	for(i=1;i<=2*n;i++)
	{
		if(i%2==0)
		{
			
	for(j=1;j<=n;j++)
	{
		printf("%d\t",i);
	}
			
		}
		printf("\n");
	}
	
return 0;
}

