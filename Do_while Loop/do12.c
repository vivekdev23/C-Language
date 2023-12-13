#include<stdio.h>

int main()

{
  int i=1,total=0,n;
  
  // ODD
  
  printf("Enter anumber : ");
  scanf("%d",&n);

  do
  {
    if(i%2==1){
      printf(" %d ",i);
      total+=i;
    }
    i++;
  } while(i<=n);

  printf("\n");

  printf("total of odd number is : %d" ,total );


}