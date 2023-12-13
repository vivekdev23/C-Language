#include<stdio.h>

int main()
{
    char i='A',n;

    printf("Enter a alphabet letter  : ");
    scanf("%c",&n);

    if(n>'A' && n<'Z'){
        do
        {

            printf(" %c ",i);

        i++;

        } while (i<=n);
    }
    
    else{
        printf("Enter a vlide alphabet letter : ");
    }
}