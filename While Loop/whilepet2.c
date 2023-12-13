#include<stdio.h>
int main()
{
	int a,b,n;
	printf("enter N value:");
	scanf("%d",&n);
	
	a=n;
	while(a>=1)
	{
		b=n;
		while(b>=1)
		{
			printf("%d\t",a);
			b--;
		}
		printf("\n");
		a--;
	}
	
return 0;
}