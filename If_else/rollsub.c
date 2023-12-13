#include<stdio.h>

int main(){

	int rollnum, phy,chem,CA,total,per;
//char name;
	
	printf("enter the roll number:\n");
	scanf("%d",&rollnum);
	
	//printf("enter the name of student:");
	//scanf("%c",&name);
	
	printf("enter the physic marks:");
	scanf("%d",&phy);
	
	printf("enter the chemistry marks:");
	scanf("%d",&chem);
	
	printf("enter the Computer marks:");
	scanf("%d",&CA);
	
	total= phy+chem+CA;
	printf("totl marks:%d\n", total);
	
	per = (total*100)/300;
	printf("percentage:%d\n", per);
	
	
	





return 0;
}