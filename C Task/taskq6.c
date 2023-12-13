#include<stdio.h>

int main()

{
   int x,y;

   printf("Enetr value of x:");
   scanf("%d",&x);

   printf("Enetr value of y:");
   scanf("%d",&y);
   
if ((x<2000) || (x>=3000))
{

    printf("\t your value is X : %d",x);   
}

else
{
  printf("\n\t enter a velid input X");
}

 if ((y>100) && (y<500))
  {
    printf("\n\t your value is Y: %d",y);   
  }

else
{
  printf("\n\t enter a velid input Y");
}


    return 0;
}