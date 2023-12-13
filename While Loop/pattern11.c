#include<stdio.h>
int main()
{
	int i=0,j=1,k=65;
	
	while(i<=4)
	{
		j=1;
		k=65+i;
		
		while(j<=i+1)
		{
			printf("%c\t",k--);	
			j++;
			
		}
		
		printf("\n");
		i++;
	}
	
return 0;

}