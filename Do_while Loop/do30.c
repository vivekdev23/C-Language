#include<stdio.h>

int main()

{
    int i ,j,k=6;

    i=1;
    do
    {
      k+=5;
      j=1;
      do
      {
        printf(" %d ",k);
        k++;
        j++;
      } while (j<=5);
      
      printf("\n");
      i++;
    } while (i<=5);
    

}