#include<stdio.h>
int main()
{
	int i=5,j;
	
	while(i>=1)
	{
		j=i;
		while(j<=5)
		{
			printf("%d\t",j);
			j++;
		}
		printf("\n");
		i--;
	}
	
return 0;

}