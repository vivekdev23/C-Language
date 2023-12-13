#include<stdio.h>
int main(){

int total,per;
int che,bio,phy;

printf("enter the che marks:");
scanf("%d",&che);
printf("enter the phy marks:");
scanf("%d",&phy);
printf("enter the bio marks:");
scanf("%d",&bio);

total= che+bio+phy;
printf("your total marks is:%d\n",total);
per= total*0.3;
printf("your persentage is :%d\n",per);

if(per>75){

	printf("you are A gread");
}
else if ((per>65)&&(per<=75)){

	printf("you are B gread");
}

else if ((per>45)&&(per<=65)){

	printf("your are C gread");
}

else if((per>35)&&(per<=45)){

	printf("your are D gread");
}

else {

	printf("you are fool student");
}



return 0;
}