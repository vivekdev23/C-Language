#include<stdio.h>

int main()

{
    int  i,j, k=1;

     i=1;
     while (i<=5)
     {
    
        j=1;
        while (j<=i)
        {
            k++;
            if(i%2==0){
                printf(" %c ", k+95);
            }

            else{
                printf(" %c " ,k+63);
            }
                j++;
        }
        
       printf("\n");
       i++;
     }    
}