#include<stdio.h>

int main()

{



// printf("\n\t enter one value and find it divisible by 5 or not.");

   int a;

  printf("\n Enter Value : ");
    scanf("%d",&a);

if(a%5==0){
       printf( "\t (%d) is divisible by 5 ",a);
}

else{
       printf( "\t (%d) is not divisible by 5 ",a);
}

  return 0;

}