#include<stdio.h>

int main()
{
    int i,num;

    printf("Enter a Skip Number betwin 0 To 15 : ");
    scanf("%d",&num);

    for(i=0;i<=15;i++)
    {
        if(i==num)
        {
            continue;
        }
        printf(" %d ",i);
    }
    
}