#include<stdio.h>
int main()
{
	int num[15],i;
	
	for(i=1;i<=10;i++)
	{
		printf("enter the value[%d] :\t",i);
		scanf("%d",&num[i]);
	}
	
	for(i=10;i>0;i--)
		
	{
		printf("num[%d] value is:%d \n",i,num[i]);
		
	}
	
	return 0 ; 
}