#include<stdio.h>
int main()
{
	int num[15],i,sum=0;
	
	for(i=0;i<15;i++)
	{
		printf("enter the value[%d] :\t",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<15;i++)
		
	{
		printf("the value is: \n",num[i]);
		sum=sum+i;
	}
	printf("%d",sum);
	return 0 ; 
}