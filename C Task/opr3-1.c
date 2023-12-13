#include<stdio.h>

int main()

{

 printf("\n\t\t Conditionl Statememt ");

int a,b;
    printf("\nEnter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);

  if (a<b){

   printf("\t a (%d) is smaller than  b (%d)",a,b);
}

  else{

   printf("\t a (%d) is biger than  b (%d)\n",a,b);
}


   return 0;

}