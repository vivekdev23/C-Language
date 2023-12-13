#include<stdio.h>

int main()

{
    int i,k;

    char n;

     printf("Enter a alphabet letter :");
     scanf("%c",&n);




      i=97;
    do
    {
        if(n>='a' && n<='z'){
            k=i-32;
            printf(" %c - %c ", k , i );
            i++;
        }
        else{
          i=65;
          do
          {
            k=i+32;
            printf(" %c = %c ", i , k);
            i++;
          } while (i<=n);          
        }
    } while (i<=n);        
 
}

    