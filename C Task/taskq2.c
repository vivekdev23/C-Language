
#include<stdio.h>

int main()
{
 
 int age;

 printf("\n Enter Your Age :");
 scanf("%d",&age);

 if(age<=18)
{
   age = 19-age;
   printf("\n\t Your not Eligible for voting %d Year ",age );

 }
 
else 
   {
   printf("\n\t Your Eligible for voting ");    
   }

return 0;
}