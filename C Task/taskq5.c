#include<stdio.h>

int main()

{
    int acc,eng,brf,eco;
    printf("\n Enter marks \n");

   printf("\n English     : ");
   scanf("%d",&eng);

   printf("\n Account    : ");
   scanf("%d",&acc);

   printf("\n M law       : ");
   scanf("%d",&brf);


   printf("\n Economics   : ");
   scanf("%d",&eco);
  

  int total = acc+eco+brf+eng;

  int marks =(acc+eco+brf+eng)*100/400;
  

  printf("\n\t total = %d",total );
  
  printf("\n\t percentage = %d%%",marks );
 
 
  if (marks<=35)
  {
      printf("\n studnt is fail " );
  }

  else if ((marks > 75 ) && ( marks < 100))
   {
    printf("\n Grades is A " ); 
   }

  else if (( marks > 60 ) && (marks < 75))
   {
    printf("\n Grades is B " ); 
   }

 else if ((marks > 45 )&& (marks < 60))
  {
    printf("\n Grades is C " ); 
  }
 
 else if((marks > 35 )&& (marks < 45))
  {
    printf("\n Grades Is D " );  
  }

else{
   printf("\n better luck next time ");
}
    return 0;
}