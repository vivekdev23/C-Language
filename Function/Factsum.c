#include<stdio.h>
#define n 5

int fact(int arr[]){
	
	int i,sum;
	
	for(i=0;i<n;i++)
  {
	  
	  if(i==0)
	  {
		  printf("%d",arr[i]);
	  }
	  else{
	     sum=arr[i]+arr[i-1];
	     printf("\n%d \t %d ",arr[i],sum);
	  }
  }	
	
}


int main()
{
  int arr[n],i;
  
  for(i=0;i<n;i++)
  {
	printf("[%d]Enter a Number : ",i);
	scanf("%d",&arr[i]);
  }
  
  printf("\n");
  fact(arr);
 
  
}