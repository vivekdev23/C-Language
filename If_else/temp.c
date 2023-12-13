#include<stdio.h>

int main(){

int temp;

printf("enter the tempereture:");
scanf("%d",&temp);

if(temp<0){

printf("Frezing weather");

}
else if(temp>=0 && temp<10) {

printf("very cold");

}

else if(temp>=10 && temp<20){

printf("cold");

}

else if(temp>=20 && temp<30){

printf("Normal");

}

else if(temp>=30 && temp<40){

printf("Hot");

}

else {

	printf("very hot");
}






return 0; 
}