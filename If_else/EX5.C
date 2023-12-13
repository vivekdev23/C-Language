#include<stdio.h>

int main(){
int age;
	printf("enter your age:\n");
	scanf("%d",&age);

if(age>=18){
	printf("your age is %d\n", age);
	printf("congreats! you are eligibale for the voting");

}
else{
	printf("your age is %d:\n",age);
	printf("sorry you are not eligibale for voting");

}



return 0;
}