#include<stdio.h>

int main()
{
    int i,j,k=65;

    i=1;
    do
    {
         j=1;
         do
         {
            printf(" %c ",k-j+1);
            j++;
        } while (j<=i);
        k++;
        printf("\n");
        i++;
    } while(i<=5);
    
}