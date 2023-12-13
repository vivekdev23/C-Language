#include<stdio.h>
int main()

{
 int income,tax;

	printf("enter your income:\n");
	 scanf("%d",&income);

 if(income<2500){
	tax=income*0;

}
else if ((income>=2500) && (income<5000)){
	tax=income*0.1;
}
else if ((income>=5000) && (income<10000)){
	tax=income*0.2;
}

else if(income>=10000) {
	tax=income*0.3;

}
else{

	printf(" not exit the value");

}
	printf("the sallry is :%d\n",income);
	printf("the tax slab of sallry is:%d\n",tax);

return 0;

}