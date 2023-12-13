#include <stdio.h>

int main(){

     // question 3

 float mth,sci,hin,eng;
  
  printf("\n Enter marks \n");

  printf("\n Maths   : ");
  scanf("%f",&mth);
  printf("\n Science : ");
  scanf("%f",&sci);
  printf("\n Hindi   : ");
  scanf("%f",&hin);
  printf("\n English : ");
  scanf("%f",&eng);
  
  float total = mth+sci+hin+eng;
  float percentage = (mth+sci+hin+eng)/400*100;
  
  printf("\n total = %f \n",total );
  printf("\n percentage =  %f \n",percentage );



return 0;

}