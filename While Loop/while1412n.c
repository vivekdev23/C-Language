#include<stdio.h>
int main()
{
	int i=1,n,temp=1,num=1;
	scanf("%d",&n);
	
	while(i<=n)
	{
		num=i*temp;
		printf("%d\n",num);
		temp=temp*2;
		i++;
	}
return 0;
}