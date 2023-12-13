#include<stdio.h>
int main()
{
	int i=1,n;
	float a=0.5,c;
	printf("Enter N vlaue:");
	scanf("%d",&n);
	printf("%.1f\n",a);
	
	while(i<2*n-1)
	{
		if(i%2==1)
		{
			c=a+0.5*(i);
			printf("%.1f\n",c);
			a=c;
		}
		
		i++;
	}
return 0;
}