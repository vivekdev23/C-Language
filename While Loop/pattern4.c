#include<stdio.h>
int main()
{
	int i=1,j=1,n,c=1;
	scanf("%d",&n);
	
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			printf("%d\t",c++);
			j++;
		}
		
		printf("\n");
		i++;
	}
	
return 0;

}