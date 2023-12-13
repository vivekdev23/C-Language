#include<stdio.h>
int main()
{
	int a=1,b=1,n,c=11;
	printf("enter N value:");
	scanf("%d",&n);
	
	while(a<=n)
	{
		b=1; 
		while(b<=n)
		{
			printf("%d\t",c++);
			b++;
		}
		printf("\n");
		c+=5;
		a++;
	}
	
return 0;
}