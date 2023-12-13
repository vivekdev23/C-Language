#include<stdio.h>

int main()

{
    int i=1,a=0,b=1,c,n;

    printf("Enter a number : ");
    scanf("%d",&n);

    while (i<=n)
    {
        i++;
        printf(" %d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    

}