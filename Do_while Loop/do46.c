#include<stdio.h>

int main()
{
    int i,j,sp=10;

    i=1;
    do
    {
        j=1; 
        do
        {
            printf(" ");
            j++;
        } while(j<=sp);

        j=i;
        do
        {
            printf(" *"); // left space 
            j++;
        } while (j<=5);
        
         

       printf("\n");
       i++; 
    } while(i<=5);
    
}