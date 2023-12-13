#include <stdio.h>



int main()

{

   int a = 5; 

   printf("\n Squareroot of 5 = %d \n", a*a);
   
   float P=10000,T=5,R=5;
   
   float SI = (P * T * R) / 100;

   printf("\n Simple Interest = %f \n ",(P*T*R)/100 );
   
   float RS=1500;
    
   float USD=RS/81.71;
    
   printf("\n RS IN USD. = %f \n ",USD);

   int Chairs=3 , TCO=5000;

   int Echair = TCO/Chairs;

   printf("\n Cost of 1 chair = %d \n ", Echair);

    int c=10,d=20,g=5,h=12;
    
    int L = (c+d) * (g+h);
    
    printf("\n L= %d \n",(c+d) * (g+h));
    
    int k=12,a1=15; 

    int x = ((k-4)* (a1*4)) /100;
    
    printf("\n x= %d \n" , ((k-4)* (a1*4)) /100);    
     
    int a2=20,b=8,c1=15,a3=25;
     
    int s = ((4*a2+c1) -2*a3*b) /100;
    
    printf("\n S= %d\n",((4*a2+c1) -2*a3*b) /100);



   return 0;
}
