#include<stdio.h>

// goto is alternative of loop[for , while , do while ]


int main()
{
    int i=1;

    test: 
    if(i<=5)
    {
        printf(" %d ",i++);
        goto test;
    }
}