#include<stdio.h>

int main()
{
    int i,j,k;

    i=0-1;
    while (i<=5)
    {
        j=5-1;
        while(j>i)
        {
            printf(" ");
            j--;
        }

        k=0;
        while(k<i)
        {
            printf(" %c",k+65);
            k++;
        }
        printf("\n");
        i++;
    }

        i=5-1;
    while (i>=0)
    {
        j=6-1;
        while(j>i)
        {
            printf(" ");
            j--;
        }

        k=0;
        while(k<i)
        {
            printf(" %c",k+65);
            k++;
        }
        printf("\n");
        i--;
    }
    
}