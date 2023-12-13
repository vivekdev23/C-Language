#include<stdio.h>

int main()

{

 printf("\n\t\t Conditionl Statememt ");

   int n,m;

    printf("\nEnter n :");
    scanf("%d",&n);
    printf("Enter m :");
    scanf("%d",&m);

  if(n>m){
     printf("\n\t n(%d) Is Greaterthan m(%d) ",n,m);
  }
  else{
    printf("\n\t m(%d) Is Greaterthan n(%d)\n ",m,n);
  }

   return 0;

}