#include<stdio.h>

int main() {
int hra , da , grs , sallry;
printf("enter your sallry:\n");
scanf("%d",&sallry);

if(sallry<5000) {

da=grs*0.2;
hra= grs*0.08 ;
grs=sallry+da+hra;

}
else if(sallry>=5000&&sallry<10000){
 da=grs*0.3;
 hra=grs*0.12;
 grs=sallry+da+hra;
}
else if(sallry>=10000 && sallry<15000) {
	da=grs*0.4;
	hra=grs*0.15;
	grs=sallry+da+hra;

}
   else {
   da=grs*0.5;
   hra=grs*0.2;
   grs=sallry+da+hra;

   }
		printf("the da is:%d",da);
		printf("the hra is %d",hra);

		printf("the gross sallry is : %d",grs);


return 0;
}