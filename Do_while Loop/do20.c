#include<stdio.h>

int main()

{
    float i=0.5,a=0.5,n;

    printf("enter a number : ");
    scanf("%f",&n);

    printf("%f",a);

    do
    {
        // a+=i;
        a=a+i;
        printf(" %f ",a);
        i++;
    } while(i<=n);
    


}