#include<stdio.h>

int main ()
{
    int i,j;

    i=1;
    do
    {
        j=1;
        do
        {
            if(j==1 || j==10 || i==1 || i==10 )
            {
                printf(" *");
            }
            else{
                printf("  ");
            }
            
            j++;
        } while (j<=10);
        
      

        i++;
        printf("\n");
    } while(i<=10);
    
}
