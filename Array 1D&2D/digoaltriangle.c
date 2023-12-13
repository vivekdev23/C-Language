#include<stdio.h>

int main()

{
	 int a[5][5],i,j,total=0,total1=0,total2=0;
	
	 for(i=0;i<3;i++){
			
		for(j=0;j<3;j++){
			printf("Enter val of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}

	for (i=0;i<3;i++)
	{
		for (j=0;j<i;j++)
		{
		   total1+=a[i][j];
		}
	}
	
	for(i=0;i<3;i++){
 		
	 for(j=0;j<3;j++)
	 {
		printf(" %d ",a[i][j]); 
		
		if(i==j){
			total+=a[i][j];
		}
	    total2+=a[i][j];
	 }

     	printf("\n");
		
	}
	
	printf("\n digoal triangle total is : %d ",total);
	printf("\n lower triangle total is : %d ",total1);
	printf("\n uper triangle total is : %d ",(total2-total)-total1);
	// printf("\n total of metrices is : %d ",total2);

}