#include<stdio.h>

int main()

{

   int i=1,total=0,n;
  
  // EVEN
  
  printf("Enter anumber : ");
  scanf("%d",&n);

  while (i <= n)
  {
    if(i%2==0){
        printf(" %d ",i);
        total+=i;
    }
    i++;
  }

    printf("\n");

  printf("total of even number is : %d" ,total );

}