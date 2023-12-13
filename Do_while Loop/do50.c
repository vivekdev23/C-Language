#include<stdio.h>

int main()
{
    int i,j;

    i=5;
    do
    {
          j=5;
          do
          {
            printf(" %d ",j);
            j--;
          } while(j>i);
          i--;
        printf("\n");    
    } while (i>=1);

    i=1;
    do
    {
          j=5;
          do
          {
            printf(" %d ",j);
            j--;
          } while (j>=i);
        i++;
        printf("\n");
    } while (i<=5);

    
}