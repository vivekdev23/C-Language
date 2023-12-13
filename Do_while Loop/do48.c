#include<stdio.h>

int main()
{
    int i,j,sp=10;

    i=5;
    do
    {
        j=1; 
        do
        {
            printf(" ");
            j++;
        } while(j<=sp);

        j=1;
        do
        {
            printf(" *"); // left space 
            j++;
        } while (j<=i);
        
         

       printf("\n");
       sp++;
       i--; 
    } while(i>=1);
    
}