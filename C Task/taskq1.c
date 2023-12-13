#include<stdio.h>

int main()
{
 
   float unit,bill;

   printf("\n Enetr Your Units : ");
   scanf("%f",&unit) ;

if (unit<=100)
  {   
     bill = 50+unit*0.60;

     printf("\n Your Bill is : %f ",bill);
  }

else if(100<unit && unit<=300)
  {
   bill=50+60+(unit-100)*0.80;

   printf("\n Your Bill is : %f ",bill);
  }

  else 
   {
   bill = 50+60+160+(unit-300)*0.90;

   printf("\n Your Bill is : %f ",bill);   
   }

if(bill>300){
   bill= bill+(bill*0.15);
   printf("\n Your updated Bill with 15%% is : %f ",bill);   
}


return 0;
}