#include<stdio.h>
int main(){

int hight;
	printf("enter your hight:");
	scanf("%d",&hight);

if(hight<150){
	printf("your hight is dwarf");

}
else if((hight>=150)&&(hight<165)) {

	printf("your hight is avrage");
}
else if((hight>=165)&&(hight<=195)) {


	printf("your hight is tall");

}
else {
	printf("your hight is overal tallest ");

}



return 0;
}