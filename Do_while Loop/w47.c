#include<stdio.h>

int main()
{
	int i,j,sp=10;
	
	i=5;
	while(i>=1)
	{
      j=1;
     while(j<=sp){
		 
		 printf(" ");
		 j++;
	 }	  
 
     j=1;
     while(j<=i)
	 {
		 printf("*");
		 j++;
	 }
 
     printf("\n");
	 sp++;
     i--;
 	}
	
}
