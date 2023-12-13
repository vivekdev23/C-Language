#include<stdio.h>
int main()
{
	int i=1,j=1,k=65;
	
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			if(i%2==1)
			{
			printf("%c\t",k);
			}
			else
			{
				printf("%c\t",k+32);
			}
				k++;
			j++;
		}
		
		printf("\n");
		i++;
	}
	
return 0;

}