#include<stdio.h>

int main()

{
    char i,j;

    i='A';
    do
    {
         j='A';
         do
         {
            printf(" %c ",j);
             j++;
         } while (j<=i);
         
        
        printf("\n");
        i++;
    } while(i<='E');
    


}