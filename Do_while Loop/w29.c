#include<stdio.h>

int main()

{
    int i=1,j,k=65;

    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
            printf(" %c ",k);
            k++;
            j++;
        }
        printf("\n");
        i++;
    }
    
}
