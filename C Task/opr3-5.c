#include<stdio.h>


int main()

{
printf( "\n\t enter two values and find whether their multiplication is divisible by 3 and 7 or not.");

   int a,b;

  printf("\n Enter Value a : ");
    scanf("%d",&a);
  printf("\n Enter Value b : ");
    scanf("%d",&b);
  
  int z=a*b;

// 3*7=21;

if (z%21==0){
       printf("\t (%d) is divisible by 3 or 7  \n",z);
}

else{
     printf("\n\t (%d) is not divisible by 7  or 3 \n",z);
}


return 0;

}