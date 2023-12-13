#include<stdio.h>


int main()

{


printf("\n\t  enter one value and find it divisible by 5 and 3 or not.");

   int x;

  printf("\n Enter Value : ");
    scanf("%d",&x);

// 5*3=15;

if (x%15==0){
       printf("\t (%d) is divisible by 5 or 3 ",x);
}

else{
       printf("\n\t (%d) is not divisible by 5 or 3 ",x);
}

 
  return 0;

}