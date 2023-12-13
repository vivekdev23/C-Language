#include<stdio.h>
int main()
{
	int a=1,b=1,n,c,i=1;
	printf("enter the N value:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	
return 0;
}