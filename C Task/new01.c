#include<stdio.h>

int main()

{
/*    
int a, b;

printf("enter a :");
scanf("%d",&a);
printf("enter b :");
scanf("%d",&b);

      a=b+a;
      b=a-b;
      a=a-b;

  
   printf("\n a = %d",a);
   printf("\n b = %d",b);
*/

int a,b,c;
printf("enter a :");
scanf("%d",&a);
printf("enter b :");
scanf("%d",&b);

   c=a;
   a=b;
   b=c;

   printf("\n a = %d",a);
   printf("\n b = %d",b);

   return 0;
}