
// (3) Verify the formula of Simple Interest.

#include<stdio.h>
int main()
{

   float  p = 5 ,r=4,n=8;
   float  a = p*(1+(r/100) /n) -p;
   printf("\n a =%f \n", p*(1+(r/100) /n) -p);

   float V=50 ,s=30 ,m=7;
   float t = ((V+s)+ (1-m)*1);
   printf("\n t= %f \n", ((V+s)+ (1-m)*1));


   int a1=30, b1=90;
   int c = (a1+b1)* (a1+b1);
   printf("\n c= %d \n",(a1+b1)* (a1+b1) );
 


   return 0;

}