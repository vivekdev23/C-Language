#include<stdio.h>
int main()
{
	int i=1,n,a=0;
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2==0)
		{
		a=i*i;
		printf("%d\n",a);
		}
		else
		{
			
			printf("%d\n",i);
		}
			i++;
	}
return 0;
}