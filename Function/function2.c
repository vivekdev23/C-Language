#include <stdio.h>       
int a,b;

int addNumbers()       
{
    int result;
    result = a+b;
    return result;            
}


int main()
{
    int n1,n2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = addNumbers(n1, n2);        
    printf("sum = %d",sum);

    return 0;
}

