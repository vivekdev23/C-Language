#include<stdio.h>

int main()

{
    int i=1,n;

    printf("Enter a number :");
    scanf("%d",&n);

    while (i<=n)
    {
          if(i%2==1){
        printf(" %d ",i);
        }
        i++;
    }
    




}