#include<stdio.h>

int main()

{
    int i,j;

    i=1;
    do
    {
         j=1;
         do
         {
            printf(" %d ",i);
            j++;
         } while(j<=i);
     printf("\n");
     i++;
    } while(i<=5);
    
}