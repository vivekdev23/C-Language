/*	1	2	3	4	5
	1	2	3	4	5
	1	2	3	4	5
	1	2	3	4	5
	1	2	3	4	5
	*/ 
	
	
#include<stdio.h>
int main()
{
	int i,j,n;
		scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",j);
		}
		
		printf("\n");
	}
	
return 0;
}

