#include <stdio.h>

int main(){

int days,years,weeks,month;

printf("Enter numeber of days: ");
scanf("%d",&days);

  years = (days / 365);
  weeks = (days % 365) / 7 ; 
  days  = (days % 365 % 7);


     printf("Years : %d\n", years);
     printf("Weeks : %d\n", weeks \n);
     printf("Weeks in Days : %d\n", weeks*7);
     printf("Days  : %d\n", days);
     printf("Total Reming Days : %d\n", (weeks*7)+days);

return 0;

}