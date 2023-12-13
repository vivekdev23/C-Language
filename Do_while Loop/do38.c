#include<stdio.h>

int main()

{
    int i,j,k=64;

   i=1;
   do
   {
      j=1;
      do
      {
        k++;
        if(j%2==0){
            printf(" %c ",k);
        }
        else{
            printf(" %c ",k+32);
        }

        j++;
      } while (j<=i);
      
     printf("\n");
     i++;
   } while (i<=5);
   

}
