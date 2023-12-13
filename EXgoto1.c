#include<stdio.h>

int main()
{
    int i=1,j;

    test: 
    if(i<=5)
    {
        j=1;
        test2:
        if(j<i)
         {
            printf("* ");
            j++;
            goto test2;
        }

        printf("\n");
        i++;
        goto test;
    }
}