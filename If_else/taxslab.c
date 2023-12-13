#include<stdio.h>
int main(){

int tax,sallry ;

printf("enter your sallry:");
scanf("%d",&sallry);

if(sallry<2500){

	tax=sallry*0;
}

else if((sallry>=2500)&&(sallry<5000)){

	tax=sallry*0.1;
}

else if((sallry>=5000)&&(sallry<10000)){

	tax=sallry*0.2;
}

else {
	tax=sallry*0.3;
}

	printf("the sallry of employe:%d\n", sallry);
	printf("And the tax slab is:%d\n",tax);


return 0;
}