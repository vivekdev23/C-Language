#include<stdio.h>

int main()

{
    int i=1,n,a;

      printf("Enter anumber : ");
      scanf("%d",&n);

    while (i<=n)
    {
        a=i*i;
        if(i%2==0){
            printf(" %d ",a);
        }
        else {
            printf(" %d ",i);
        }
        i++;
    }
    
    return 0;
}