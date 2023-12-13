#include<stdio.h>

int main()

{

  int i=1,n,a;
  
  
  printf("Enter anumber : ");
  scanf("%d",&n);

  do
  {
    a=i*i;
    printf(" %d ",a);
    i++;
  } while(i<=n);

}