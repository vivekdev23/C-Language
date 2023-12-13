#include <stdio.h>

int main()
{
int i,j,k=65;

		for(i=1; i<=5; i++)
		{
			for(j=i; j>=1; j--)
			{
				printf("%c\t",k+j-1);
			}
				printf("\n");
		}
	
	return 0 ;
}
