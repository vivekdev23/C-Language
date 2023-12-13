#include<stdio.h>

int main()

{
  int i=1,total=0,n; 

  printf("Enter a number :");
  scanf("%d",&n);

  while(i<=n)
  {
    printf(" %d ",i);
    total+=i; // total = total+i;
    i++;
  }
  printf("\n");
  printf("total is : %d",total);

}