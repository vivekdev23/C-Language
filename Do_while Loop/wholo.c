#include<stdio.h>

int main()

{
    int i,j,sp=10;

    i=1;
    while(i<=10)
    {
        j=1;
        while(j<=sp)
        {
            printf(" ");
            j++;
        }
        j=1;
        while (j<=i)
        {
            if(j==1 || j==i || j==10 || i==10)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
            j++;
        }
        i++;
        sp--;
        printf("\n");
    }
    
}