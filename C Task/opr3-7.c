#include<stdio.h>

int main ()

{
    int a,b,c;

    printf("\n Enter value 1 : ");
    scanf("%d",&a);   
    printf("\n Enter value 2 : ");
    scanf("%d",&b);   
    printf("\n Enter value 3 : ");
    scanf("%d",&c);

     if(a>b)
     {
	if(a>c)
	 {
	     printf(" \n a %d larger than all...", a);
	 }
       else
	  {
	     printf("\n c %d is larger than all...", c);
	  }
      } 

     else 
      {	
    	if(b>c)
    	 {
	   printf("\n b %d is larger than all...",b);
    	 }
    	else
     	 {
	   p	`rintf("\n c %d is larger than all..",c);
    	 }
     }
  return 0;
}