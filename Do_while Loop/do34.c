#include<stdio.h>

int main()

{
  int i,j,k=1;

  i=1;
  do
  {
     j=1;
     do
     {
        printf(" %d ",k);
        k++;
        j++;
     } while(j<=i);
     
    printf("\n");
    i++;
  } while(i<=5);
  



}