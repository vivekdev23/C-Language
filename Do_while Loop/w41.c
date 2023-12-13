#include<stdio.h>

int main()

{
    int i,j,k=1;

    i=1;
    while(i<=5){

         j=1;
         while (j<=i)
         {
             printf(" %d ",k--);
            if(k<=-1)
            {
                k=1;
            }
             j++;
         }
        printf("\n");
        i++;
    }
}