#include <stdio.h>
int main()

{
	int sub1[5],sub2[5],sub3[5],i,per[5],total[5],grade;
	
	for(i=0;i<5;i++)
	{

	printf("Enter the marks of chemistry for student %d:",i+1);
	scanf("%d",&sub1[i]);
	
	printf("Enter the marks of phy for student %d :",i+1);
	scanf("%d",&sub2[i]);
	
	printf("Enter the marks of math for student%d:",i+1);
	scanf("%d",&sub3[i]);
	
	}
		for(i=0;i<5;i++)
	{
		total[i]=sub1[i]+sub2[i]+sub3[i];
		
		printf("the total of : %d\n",total[i]);
	}
	
		for(i=0;i<5;i++)
	{
		per[i]=(total[i]*100/300);
		printf("the per is the %d is %d\n",i+1,per[i]);
	}
	
	for(i=0;i<5;i++)
	{
		 
	}
	
	
	
	return 0 ; 
}