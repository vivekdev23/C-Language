#include<stdio.h>
int main()
{
	int a=1,b=1,n;
	printf("enter N value:");
	scanf("%d",&n);
	
	while(a<=n)
	{
		b=1;
		while(b<=n)
		{
			printf("%d\t",a);
			b++;
		}
		printf("\n");
		a++;
	}
	
return 0;
}