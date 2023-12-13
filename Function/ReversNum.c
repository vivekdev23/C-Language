#include<stdio.h>

int revers(int x)
{
  int y=0;
  while(x!=0){
    y=y*10+x%10;
	x/=10;
  }
  return y;
  
}

int main()
{
	int x,y;
	
	printf("Enter a number : ");
	scanf("%d",&x);
	
	y=revers(x);
	printf("The Revers Number is : %d ",y);
}