#include<stdio.h>

int main()

{

  int a[5] , b[5]={6,7,8,9,0},i;

  for(i=0;i<5;i++)
  {
  
   printf("Enter val of a number : ");
   scanf("%d" ,&a[i]);
  
  }
  
  // print data 
  

  for(i=0;i<5;i++)
  {
  
   printf(" \n %d + %d = %d \n ",a[i],b[i],a[i]+b[i]);
    // printf("\n");
  }  


}