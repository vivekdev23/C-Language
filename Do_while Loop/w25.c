#include<stdio.h>

int main()

{
    char i,j,a;
    // char n;

    // printf("Enter a line num :");
    // scanf("%c",&n);          // F=70

    i='A';
    while(i<='E')
    {
        j='A';
        // a=n-64;              // 70-64 = 6 // a=6
        while(j<='E')          // i<=6
        {
            printf(" %c ",i);
            j++;
        }

        printf("\n");
        i++;
    }
    

}
