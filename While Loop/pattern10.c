#include<stdio.h>
int main()
{
	int i=1,j=1,k=1;
	
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("%d\t",k);
			if(k==1)
			{
				k=0;
			}
			else
			{
				k=1;
			}
			j++;
		}
		
		printf("\n");
		i++;
	}
	
return 0;

}