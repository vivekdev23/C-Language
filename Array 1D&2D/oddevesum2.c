#include<stdio.h>

// odd & even  sum using by input numbers ;

int main ()

{
	int i,num[5],odd=0,even=0;
	
	for(i=0;i<5;i++)
	{
	   printf(" Enter a  number [%d] : ",i);
       scanf("%d",&num[i]);	   
	}
	
	for(i=0;i<5;i++)
	{
		if(num[i]%2==1){
		     odd=odd+num[i];
		}
		else{
			even=even+num[i];
		}
	}
	
	printf("\nsum of odd number is : %d",odd);
	printf("\nsum of even number is : %d",even);
}