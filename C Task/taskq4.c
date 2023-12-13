
   // float income,taxe,slab1,slab2,slab3,slab4;

#include <stdio.h>
int main()
{
	float income,N_income,taxe;

	printf("\nEnter Income=");
	scanf("\n %f",&income);

	if(income<=2500)
	{
		taxe = income*0;
		N_income=income;
		printf("your tax is %f rs per income",taxe);
		printf("\nyour income is %f rs after cutting tax",N_income);
	}
 
        else if ( (income >2500 )&& (income < 5000 ))
        {
                taxe = 250+(income-2500)*0.10;
		N_income=income-taxe;
		printf("your tax is %f rs per income",taxe);
		printf("\nyour income is %f rs after cutting tax",N_income);   
        }

        else if ( (income > 5000 ) && (income <= 10000 ))
        {
                taxe = 250+1000+(income-10000)*0.20;
		N_income=income-taxe;
		printf("your tax is %f rs per income",taxe);
		printf("\nyour income is %f rs after cutting tax",N_income);   
        }

        else if  (income > 10000 ) 
        {
                taxe = 250+1000+(income-10000)*0.30;
		N_income=income-taxe;
		printf("your tax is %f rs per income",taxe);
		printf("\nyour income is %f rs after cutting tax",N_income);   }

        return 0;
}
