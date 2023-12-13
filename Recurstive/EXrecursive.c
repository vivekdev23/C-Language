#include<stdio.h>

// Recursive is function is function automatically call by it self 

int newfun(int n)
{
    printf("\nwinding phesa : %d",n);
    if(n<3)
    {
        newfun(++n);
    }
    printf("\nunwinding phesa : %d",n);   
}

int main()
{
    newfun(1);
}