#include<stdio.h>
#define n 5

int min_max(int array[])
{
  int i,max,min,num1,num2;

  max = array[0];
  min = array[0];

  for (i=0;i<n;i++)
  {
    if(array[i]>max)
    {
      max=array[i];
      num1=i;
    }

    if(array[i]<min)
    {
      min=array[i];
      num2=i;
    }

  }
  
  printf("\n[%d] Maximum number of Thame is : %d",num1,max);
  printf("\n[%d] Minimum number of Thame is : %d",num2,min);

}

int main ()
{

  int num[n];

   for (int i=0;i<n;i++)
   {
      printf("Enter Number [%d] : ",i);
      scanf("%d",&num[i]);
   }

   min_max(num);

}