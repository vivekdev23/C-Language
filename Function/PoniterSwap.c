#include<stdio.h>

int swep(int a,int b)
{
   int *p1,*p2,t;

     p1=&a; // 10
	 p2=&b; //30

	 t=p1;
	 p1=p2;
	 p2=t;
	 
	printf("\np1 num is :%d",*p1);   //30
	printf("\np2 num is :%d",*p2);  // 10

}



int main()
{
   int a,b;

   printf("Enter a num 1: ");
   scanf("%d",&a);
   printf("Enter a num 2: ");
   scanf("%d",&b);

   swep(a,b);

}