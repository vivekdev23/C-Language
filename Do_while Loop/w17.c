#include<stdio.h>

int main()

{

int i=1,a=1,n;

// 1 4 12 32 80 

  printf("Enter a number : "); 
  scanf("%d",&n);

while(i<=n)
{
   i=i*2;
   a++;
   printf(" %d ",a*i); // 4
}

}

