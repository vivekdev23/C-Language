#include<stdio.h>
int main()
{
	int i=1,j=1,n,c=65;
	scanf("%d",&n);
	
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			printf("%c\t",c++);
			j++;
		}
		printf("\n");
		i++;
	}
	
return 0;

}