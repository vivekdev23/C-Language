#include<stdio.h>

int main()
{
    int a,b,ch;

    printf("Enter a Two Num : ");
    scanf("%d%d",&a,&b);
    printf("\n1. Sum");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division \n");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("[1].Sum of num is : %d" ,a+b);
        break;
    
    case 2:
        printf("[2].Subtraction of num is : %d",a-b);
        break;
    
    case 3:
        printf("[3].Multiplication of num is : %d",a*b);
        break;
    
    case 4:
        printf("[4].Division of num is : %d ",a/b);
        break;
    
    default :
        printf("Wrong input Enter a velid input ");
        break;
    }
}