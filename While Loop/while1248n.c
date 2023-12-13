#include<stdio.h>
int main()
{
	int i=1,n,c=1;
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d\n",c);
		c=c*2;
		i++;
	}
return 0;
}