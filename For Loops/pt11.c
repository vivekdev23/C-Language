#include <stdio.h>

int main()
{
int i,j,a=1;

	
	
		for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",a);
			
			if(a==1)
			{
				a=0;
			}
			else 
			{
				a=1;
			}
						
		}
			printf("\n");
	}

	return 0 ;
}