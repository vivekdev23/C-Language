#include<stdio.h>

int main(){

int a,b,c;
	printf("enter A value:");
	scanf("%d",&a);
	printf("enter B value:");
	scanf("%d",&b);
	printf("enter C value");
	scanf("%d",&c);

if((a>b)&&(a>c)) {
	printf("a is agretest number");

}
 else if((b>a)&&(b>c)){
	printf("b is greatest number");

}
else if((c>a)&&(c>b)){
	printf("c is greatest number");

}
else{
	printf("not a number greatest");

}



return 0;
}