#include<stdio.h>

int main()

{

    // 2 4 8 16 
    
    int i=1,a,n;

  printf("Enter a number : "); // enter plus 50 
  scanf("%d",&n);

    do
    {
      printf(" %d ",i);
       i=i*2; //(i=i*2 || i*=2;) sam
    } while(i<=n);
    

}