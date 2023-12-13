#include<stdio.h>
int main()
{
	int i=1,j=1,k=5;
	
	while(i<=5)
	{
		j=1,k=5;
		while(j<=i)
		{
			printf("%d\t",k--);
			j++;
		}
		printf("\n");
		i++;
	}
	
return 0;

}