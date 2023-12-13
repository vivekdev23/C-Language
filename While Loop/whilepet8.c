#include<stdio.h>
int main()
{
	int a=1,b=1,n,c=65;
	printf("enter N value:");
	scanf("%d",&n);
	
	while(a<=n)
	{
		b=1; 
		while(b<=n)
		{
			printf("%c\t",c++);
			b++;
		}
		printf("\n");
		a++;
	}
	
return 0;
}