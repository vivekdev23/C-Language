#include<stdio.h>


int main()

{

printf("\n\t enter two values and find whether their multiplication is divisible by their addition or not.");

   int a,b;

  printf("\n Enter Value a : ");
    scanf("%d",&a);
  printf("\n Enter Value b : ");
    scanf("%d",&b);

  if((a*b)%(a+b)==0){
     printf("\n\t values is idivisible by their addition");
}

else {
     printf("\n\t values is not idivisible by their addition");
}

  return 0;

}