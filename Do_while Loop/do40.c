#include<stdio.h>

int main()
{
    int i,j;

    i=5;
    do
    {
         j=i;
         do
         {
            printf(" %d ",j);
            j++;
         } while (j<=5);
         
        printf("\n");
        i--;
    } while(i>=1);
    
}